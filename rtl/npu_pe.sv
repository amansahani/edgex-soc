// EDGEX NPU — one processing element of the systolic array.
// weight-stationary: w_q holds one int8 weight; a flows left→right, psum flows top→bottom.
`timescale 1ns/1ps

module npu_pe (
    input  logic       clk,
    input  logic       rst_n,
    input  logic       en,      // advance pipeline (a/*psum* stage valid)
    input  logic       wload,   // load w_q from w_in
    input  logic [7:0] a_in,
    input  logic [7:0] w_in,
    input  logic [31:0] psum_in,
    output logic [7:0]  a_out,
    output logic [31:0] psum_out
);
    logic signed [7:0] w_q;
    wire signed [7:0]  a_s  = a_in;
    wire signed [7:0]  w_s  = w_q;
    wire signed [15:0] prod = a_s * w_s;              // |prod| <= 127*128 < 2^15
    wire signed [31:0] prod32 = {{16{prod[15]}}, prod};

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            w_q      <= '0;
            a_out    <= '0;
            psum_out <= '0;
        end else begin
            if (wload) w_q <= w_in;
            if (en) begin
                a_out    <= a_in;
                psum_out <= psum_in + prod32;
            end else begin
                a_out    <= '0;
                psum_out <= '0;
            end
        end
    end
endmodule
