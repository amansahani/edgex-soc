// EDGEX SoC testbench — boots firmware/demo.hex into SRAM, runs, dumps VCD.
//   +vcd        : write testbench.vcd
//   +timeout=N  : finish after N posedges (default 200000)
`timescale 1ns/1ps

module tb_edgex_top;
    reg clk = 1, resetn = 0;
    always #5 clk = ~clk;

    wire trap, tests_passed;
    edgex_top dut (.clk(clk), .resetn(resetn), .trap(trap), .tests_passed(tests_passed));

    integer i;
    integer timeout_cycles = 200000;
    integer done = 0;

    initial begin
        if (!$value$plusargs("timeout=%d", timeout_cycles)) timeout_cycles = 200000;
        if ($test$plusargs("vcd")) begin
            $dumpfile("testbench.vcd");
            $dumpvars(0, tb_edgex_top);
        end
        $readmemh("firmware/demo.hex", dut.ram);
        repeat (20) @(posedge clk);
        resetn <= 1;

        for (i = 0; i < timeout_cycles; i++) begin
            @(posedge clk);
            if (trap) begin
                $display("TRAP after %0d clock cycles", i);
                done = 1;
                if (tests_passed) begin
                    $display("ALL TESTS PASSED.");
                    $finish;
                end else begin
                    $display("ERROR!");
                    $finish(1);
                end
            end
        end
        if (!done) begin
            $display("TIMEOUT after %0d cycles", timeout_cycles);
            $finish(1);
        end
    end
endmodule
