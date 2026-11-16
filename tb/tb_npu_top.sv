// EDGEX NPU testbench — loads cosim vectors (+vecdir=<dir>), writes them via
// the ports, runs the tile, drains C and compares bit-exact.
// Build with: make smoke  (see ../Makefile)
// Run local:  ./obj_dir/tb_npu_top +vecdir=../vectors/case_000
`timescale 1ns/1ps

module tb_npu_top;
    logic clk = 1'b0, rst_n = 1'b0;
    logic w_we = 1'b0, a_we = 1'b0, start = 1'b0;
    logic [7:0] w_addr = '0, w_data = '0, a_addr = '0, a_data = '0, c_addr = '0;
    logic done;
    wire [31:0] c_data;

    npu_top dut (.*);

    always #5 clk = ~clk;

    logic [7:0]  a_mem   [0:255];
    logic [7:0]  b_mem   [0:255];
    logic [31:0] expected[0:255];

    reg [1023:0] vecdir;
    integer i, errors, cyc;
    logic cyc_got_done = 1'b0;

    initial begin
        if (!$value$plusargs("vecdir=%s", vecdir)) begin
            $display("[tb] ERROR: pass +vecdir=<dir>");
            $finish(1);
        end
        $readmemh({vecdir, "/a.hex"}, a_mem);
        $readmemh({vecdir, "/b.hex"}, b_mem);
        $readmemh({vecdir, "/expected_c.hex"}, expected);

        // reset
        repeat (10) @(posedge clk);
        rst_n <= 1'b1;
        @(posedge clk);

        // load B (weight) elements
        for (i = 0; i < 256; i++) begin
            @(negedge clk);
            w_we <= 1'b1; w_addr <= i[7:0]; w_data <= b_mem[i];
        end
        @(negedge clk); w_we <= 1'b0;

        // load A elements
        for (i = 0; i < 256; i++) begin
            @(negedge clk);
            a_we <= 1'b1; a_addr <= i[7:0]; a_data <= a_mem[i];
        end
        @(negedge clk); a_we <= 1'b0;

        // run
        @(negedge clk);
        start <= 1'b1;
        @(negedge clk);
        start <= 1'b0;

        // wait for drain completion (latched — done is a 1-cycle pulse)
        for (cyc = 0; cyc < 300; cyc++) begin
            @(posedge clk);
            if (done) cyc_got_done = 1;
        end
        if (!cyc_got_done) begin
            $display("[tb] ERROR: timeout waiting for done");
            $finish(1);
        end

        // drain & compare
        errors = 0;
        for (i = 0; i < 256; i++) begin
            @(negedge clk);
            c_addr <= i[7:0];
            #1;  // combinational read settles
            if (c_data !== expected[i]) begin
                if (errors < 10)
                    $display("[tb] mismatch at i=%0d exp=%08x got=%08x", i, expected[i], c_data);
                errors = errors + 1;
            end
        end

        if (errors == 0) $display("[tb] RESULT: PASS (256/256 bit-exact)");
        else             $display("[tb] RESULT: FAIL (%0d/256 mismatch)", errors);
        $finish;
    end
endmodule
