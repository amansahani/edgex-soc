// EDGEX NPU MMIO bridge — wraps npu_top in a memory-mapped register file.
// Registered command latch: no race with bus turn-around or with the
// WBO-NBA sample ordering.
//
// Handshake contract (verified against the picorv32 native memory interface):
//   The CPU holds mem_valid for >= 2 cycles; address/data are stable while valid.
//   `rise` = 1-cycle strobe at the start of every transaction.
//
// Pipeline:
//   T+0  rise          — latch addr/wdata/wstrb; nothing else fires
//   T+1  rise1         — a_we/w_we/start pulse, registered rdata computed
//   T+2  (npu samples) — npu_top latches the pulse; indices advance (rise2)
//   CPU samples rdata at T+2; sees T+1-registered value (pre-increment) ✓
//
//   Register map (byte offsets):
//   0x000 ID       RO  0x00010000
//   0x004 CTRL     WO  bit0: start, bit1: clear done-latch
//   0x004 STATUS   RO  bit0: done (latched)
//   0x008 A_IDX    RW
//   0x00c A_DATA   WO  write A[A_IDX] byte, A_IDX++
//   0x010 B_IDX    RW
//   0x014 B_DATA   WO  write B[B_IDX] byte, B_IDX++
//   0x018 C_IDX    RW
//   0x01c C_DATA   RO  read C[C_IDX] 32-bit, C_IDX++
`timescale 1ns/1ps

module npu_mmio #(
    parameter N = 16
) (
    input  logic        clk,
    input  logic        rst_n,
    input  logic        valid,
    output logic        ready,
    input  logic [31:0] addr,
    input  logic [3:0]  wstrb,
    input  logic [31:0] wdata,
    output logic [31:0] rdata
);
    logic valid_d, rise_d, rise_d2;
    wire  rise  = valid && !valid_d;
    wire  rise1 = rise_d;             // T+1: side effects fire from latched cmd
    wire  rise2 = rise_d2;            // T+2: indices advance (after NPU sampled)

    // ---- registered command latch (T+0) ----
    logic [13:0] addr_r;
    logic [3:0]  wstrb_r;
    logic [31:0] wdata_r;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            valid_d <= 1'b0;
            rise_d  <= 1'b0;
            rise_d2 <= 1'b0;
            addr_r  <= '0;
            wstrb_r <= '0;
            wdata_r <= '0;
        end else begin
            valid_d <= valid;
            rise_d  <= rise;
            rise_d2 <= rise_d;
            if (rise) begin
                addr_r  <= addr[13:0];
                wstrb_r <= wstrb;
                wdata_r <= wdata;
            end
        end
    end

    // ---- NPU core signals ----
    wire       start = rise1 && (addr_r == 14'h004) && wstrb_r[0] && wdata_r[0] && !done_latched;
    wire       w_we  = rise1 && (addr_r == 14'h014) && wstrb_r[0];
    wire       a_we  = rise1 && (addr_r == 14'h00c) && wstrb_r[0];
    wire [7:0] w_addr = b_idx;
    wire [7:0] a_addr = a_idx;
    wire [7:0] w_data = wdata_r[7:0];
    wire [7:0] a_data = wdata_r[7:0];
    wire [7:0] c_addr = c_idx;

    logic [7:0] a_idx, b_idx, c_idx;
    logic       done_latched;
    wire        done;
    wire [31:0] c_data;

    npu_top #(.N(N)) u_npu (
        .clk    (clk),
        .rst_n  (rst_n),
        .w_we   (w_we),
        .w_addr (w_addr),
        .w_data (w_data),
        .a_we   (a_we),
        .a_addr (a_addr),
        .a_data (a_data),
        .start  (start),
        .done   (done),
        .c_addr (c_addr),
        .c_data (c_data)
    );

    // ---- done latch & index advance (T+2) ----
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            done_latched <= 1'b0;
            a_idx <= 8'h00; b_idx <= 8'h00; c_idx <= 8'h00;
        end else begin
            if (done) done_latched <= 1'b1;
            if (rise2 && (addr_r == 14'h004) && wstrb_r[0] && wdata_r[1]) done_latched <= 1'b0;

            if (rise2 && (addr_r == 14'h008)) a_idx <= wdata_r[7:0];
            else if (rise2 && (addr_r == 14'h00c)) a_idx <= a_idx + 8'd1;
            if (rise2 && (addr_r == 14'h010)) b_idx <= wdata_r[7:0];
            else if (rise2 && (addr_r == 14'h014)) b_idx <= b_idx + 8'd1;
            if (rise2 && (addr_r == 14'h018)) c_idx <= wdata_r[7:0];
            else if (rise2 && (addr_r == 14'h01c)) c_idx <= c_idx + 8'd1;
        end
    end

    // ready: combinational 1-cycle-per-transaction ack
    assign ready = valid;

    // ---- registered read data (T+1, stable at sample time T+2) ----
    logic [31:0] rdata_q;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) rdata_q <= 32'h0;
        else if (rise) begin
            unique case (addr[13:0])
                14'h000: rdata_q <= 32'h0001_0000;           // ID
                14'h004: rdata_q <= {31'h0, done_latched};   // STATUS
                14'h008: rdata_q <= {24'h0, a_idx};
                14'h010: rdata_q <= {24'h0, b_idx};
                14'h018: rdata_q <= {24'h0, c_idx};
                14'h01c: rdata_q <= c_data;                  // C[c_idx], pre-increment
                default: rdata_q <= 32'hdead_beef;
            endcase
        end
    end
    assign rdata = rdata_q;
endmodule
