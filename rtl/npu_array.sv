// EDGEX NPU — 16×16 systolic array (weights stationary, activations flow L→R,
// partial sums flow T→B). Fed one activation per row per cycle by npu_top's
// skewed feeder; see docs/NPU_SPEC.md §2.
//
// Row k at cycle t carries A[t-k][k]. Cell (k,j) at t sees a with j-stage skew.
// psum chain: cell(k,j) at t = m+k+j for A[m][k]; row-15 (k=15) drains C[m][j]
// at t = m+15+j.
`timescale 1ns/1ps

module npu_array #(
    parameter N = 16
) (
    input  logic               clk,
    input  logic               rst_n,
    input  logic               en,
    input  logic               wload,
    input  logic [N*8-1:0]     a_row_in,   // row k ← a_row_in[k*8 +: 8]
    input  logic [N*8-1:0]     w_col_in,   // weights for the column being loaded (element k = row's weight)
    input  logic [3:0]         w_col,      // which column is being loaded
    output logic [N*32-1:0]    psum_bottom // cell (N-1,j) psum out
);
    logic [7:0]  a_wire   [N][N];
    logic [31:0] psum_wire[N][N];

    generate
        for (genvar k = 0; k < N; k++) begin : g_row
            for (genvar j = 0; j < N; j++) begin : g_col
                npu_pe pe_u (
                    .clk     (clk),
                    .rst_n   (rst_n),
                    .en      (en),
                    .wload   (wload && (w_col == 4'(j))),
                    .a_in    (j == 0 ? a_row_in[k*8 +: 8] : a_wire[k][j-1]),
                    .w_in    (w_col_in[k*8 +: 8]),
                    .psum_in (k == 0 ? 32'h0 : psum_wire[k-1][j]),
                    .a_out   (a_wire[k][j]),
                    .psum_out(psum_wire[k][j])
                );
            end
        end
    endgenerate

    always_comb begin
        for (int j = 0; j < N; j++) psum_bottom[j*32 +: 32] = psum_wire[N-1][j];
    end
endmodule
