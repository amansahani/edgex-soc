// Isolated NPU MMIO testbench — drives the bridge exactly like the CPU would.
//   +vecdir=<dir> with case_000 vectors; compares C against expected_c.hex.
//   prints RESULT: PASS/FAIL.
`timescale 1ns/1ps
module tb_npu_mmio;
    logic clk = 1'b0, rst_n = 1'b0;
    logic valid = 1'b0;
    logic [31:0] addr = 0, wdata = 0;
    logic [3:0]  wstrb = 0;
    logic ready;
    wire  [31:0] rdata;

    npu_mmio u_dut (.*);

    always #5 clk = ~clk;

    logic [7:0]  a_mem   [0:255];
    logic [7:0]  b_mem   [0:255];
    logic [31:0] expected[0:255];
    reg [1023:0] vecdir;
    integer i, errors;
    reg [31:0] v;

    task automatic mmio_write(input [31:0] a, input [31:0] d, input [3:0] stb = 4'b1111);
        @(negedge clk); valid <= 1; addr <= a; wdata <= d; wstrb <= stb;
        @(negedge clk); valid <= 0; addr <= 0; wdata <= 0; wstrb <= 0;
    endtask

    task automatic mmio_read(input [31:0] a, output [31:0] d);
        @(negedge clk); valid <= 1; addr <= a; wstrb <= 0; wdata <= 0;
        @(negedge clk); d = rdata;
        @(negedge clk); valid <= 0;
    endtask

    initial begin
        if (!$value$plusargs("vecdir=%s", vecdir)) begin
            $display("[tb] ERROR: vecdir"); $finish(1);
        end
        $readmemh({vecdir, "/a.hex"}, a_mem);
        $readmemh({vecdir, "/b.hex"}, b_mem);
        $readmemh({vecdir, "/expected_c.hex"}, expected);

        repeat (10) @(posedge clk);
        rst_n <= 1;
        mmio_read(32'h4000_0000, v);
        $display("[tb] NPU_ID = %08x (expect 00010000)", v);

        // A writes
        mmio_write(32'h4000_0008, 0);            // A_IDX = 0
        for (i = 0; i < 256; i++) mmio_write(32'h4000_000c, a_mem[i]);
        // B writes
        mmio_write(32'h4000_0010, 0);            // B_IDX = 0
        for (i = 0; i < 256; i++) mmio_write(32'h4000_0014, b_mem[i]);
        // start
        mmio_read(32'h4000_0008, v);
        $display("[tb] A_IDX after A writes = %0d (expect 0 after wrap)", v);
        mmio_read(32'h4000_0010, v);
        $display("[tb] B_IDX after B writes = %0d (expect 0 after wrap)", v);
        mmio_write(32'h4000_0004, 1);
        mmio_read(32'h4000_0004, v);
        $display("[tb] STATUS right after CTRL write = %08x", v);
        mmio_read(32'h4000_0004, v);
        $display("[tb] STATUS one more read = %08x", v);

        // poll done (same pattern as firmware)
        for (i = 0; i < 10000; i++) begin
            mmio_read(32'h4000_0004, v);
            if (v & 1) begin $display("[tb] done after %0d polls", i); i = 1000000; end
        end

        // read C and compare
        errors = 0;
        mmio_write(32'h4000_0018, 0);            // C_IDX = 0
        for (i = 0; i < 256; i++) begin
            mmio_read(32'h4000_001c, v);
            if (i < 8) $display("[tb] C[%0d] got=%08x exp=%08x", i, v, expected[i]);
            if (v !== expected[i]) errors = errors + 1;
        end
        if (errors == 0) $display("[tb] RESULT: PASS (256/256 bit-exact)");
        else             $display("[tb] RESULT: FAIL (%0d/256 mismatch)", errors);
        $finish;
    end
endmodule
