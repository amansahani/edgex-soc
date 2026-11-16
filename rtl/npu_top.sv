// EDGEX NPU top — activation/weight buffers + skewed feeder + drain capture + FSM.
// Weight loading: on `start`, the FSM pushes b_mem into PEs (1 column/cycle),
// then runs the array, capturing C into c_mem. done pulses when capture ends.
// See docs/NPU_SPEC.md §4–5.
`timescale 1ns/1ps

module npu_top #(
    parameter N = 16
) (
    input  logic        clk,
    input  logic        rst_n,
    // weight write port: addr = k*16+j, value = B[k][j]
    input  logic        w_we,
    input  logic [7:0]  w_addr,
    input  logic [7:0]  w_data,
    // activation write port: addr = i*16+k, value = A[i][k]
    input  logic        a_we,
    input  logic [7:0]  a_addr,
    input  logic [7:0]  a_data,
    input  logic        start,
    output logic        done,
    // C read port: addr = i*16+j
    input  logic [7:0]  c_addr,
    output logic [31:0] c_data
);
    localparam S_IDLE = 2'd0, S_WLOAD = 2'd1, S_RUN = 2'd2, S_DONE = 2'd3;

    logic [1:0] state;
    logic [6:0] run_cnt;      // 0..46 covers array+drain window
    logic [3:0] wl_col;

    // ---- storage (inferred; sky130 SRAM macros in v1) ----
    logic signed [7:0] b_mem [N][N];
    logic signed [7:0] a_mem [N][N];
    logic [31:0]       c_mem [N][N];

    // ---- weight column presented to the array ----
    wire [3:0] w_col_idx = (state == S_WLOAD) ? wl_col : w_addr[3:0];
    logic [N*8-1:0] w_col_data;
    always_comb begin
        for (int k = 0; k < N; k++) w_col_data[k*8 +: 8] = b_mem[k][w_col_idx];
    end

    // ---- skewed feeder (generate: constant part-selects — dynamic slices mis-simulate) ----
    logic [N*8-1:0] a_row_in;
    generate
        for (genvar k = 0; k < N; k++) begin : g_feed
            always_comb begin
                int idx;                 // no initializer — static lifetime must be assigned every eval
                idx = run_cnt - k;       // A[idx][k]
                if (idx >= 0 && idx < N && state == S_RUN) a_row_in[k*8 +: 8] = a_mem[idx][k];
                else                                      a_row_in[k*8 +: 8] = 8'h00;
            end
        end
    endgenerate

    // ---- array ----
    logic [N*32-1:0] psum_bottom;
    wire              en = (state == S_RUN);
    wire              wl = (state == S_WLOAD);
    npu_array #(.N(N)) u_array (
        .clk        (clk),
        .rst_n      (rst_n),
        .en         (en),
        .wload      (wl),
        .a_row_in   (a_row_in),
        .w_col_in   (w_col_data),
        .w_col      (w_col_idx),
        .psum_bottom(psum_bottom)
    );

    // ---- drain capture: cell (15,j) completes C[m][j] at run_cnt = m+15+j ----
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE; run_cnt <= '0; wl_col <= '0; done <= 1'b0;
        end else begin
            done <= 1'b0;
            unique case (state)
                S_IDLE: begin
                    run_cnt <= '0; wl_col <= '0;
                    if (start) state <= S_WLOAD;
                end
                S_WLOAD: begin
                    if (wl_col == 4'(N-1)) begin wl_col <= '0; state <= S_RUN; end
                    else                    wl_col <= wl_col + 4'd1;
                end
                S_RUN: begin
                    // capture C[m][j]: for each column j, m = run_cnt-15-j in range
                    for (int j = 0; j < N; j++) begin
                        automatic int m;
                        m = run_cnt - 16 - j;
                        if (m >= 0 && m < N) c_mem[m][j] <= psum_bottom[j*32 +: 32];
                    end
                    if (run_cnt == 7'd46) state <= S_DONE;
                    else                   run_cnt <= run_cnt + 7'd1;
                end
                S_DONE: begin
                    done  <= 1'b1;
                    state <= S_IDLE;
                end
            endcase

            if (w_we) b_mem[w_addr[7:4]][w_addr[3:0]] <= w_data;
            if (a_we) a_mem[a_addr[7:4]][a_addr[3:0]] <= a_data;
        end
    end

    // ---- C readout ----
    always_comb c_data = c_mem[c_addr[7:4]][c_addr[3:0]];
endmodule
