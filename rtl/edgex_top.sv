// EDGEX SoC — PicoRV32 (RV32IMC) + on-chip SRAM + UART-ish OUT + magic reg + NPU.
// Memory map:
//   0x0000_0000 .. 0x0000_FFFF   64 KiB SRAM (firmware + data)
//   0x1000_0000                  OUT register: write = print char (like picorv32 testbench)
//   0x2000_0000                  MAGIC register: write 123456789 = pass, else = fail
//   0x4000_0000 .. 0x4000_3FFF   NPU MMIO (see npu_mmio.sv)
// PicoRV32 uses its native memory interface (no AXI): mem_valid/mem_instr/mem_ready.
`timescale 1ns/1ps

module edgex_top (
    input  logic clk,
    input  logic resetn,
    output logic trap,
    output logic tests_passed
);
    // ------------------------------------------------------------------
    // PicoRV32 (RV32IMC, native mem)
    // ------------------------------------------------------------------
    wire cpu_trap;
    wire mem_valid, mem_instr;
    wire ready_mem;
    wire [31:0] mem_addr;
    wire [31:0] mem_wdata;
    wire [3:0]  mem_wstrb;
    wire [31:0] mem_rdata;

    picorv32 #(
        .ENABLE_REGS_DUALPORT(1),
        .ENABLE_MUL(1),
        .ENABLE_DIV(1),
        .ENABLE_IRQ(0),
        .ENABLE_TRACE(0),
        .COMPRESSED_ISA(1)
    ) u_cpu (
        .clk       (clk),
        .resetn    (resetn),
        .trap      (cpu_trap),
        .mem_valid (mem_valid),
        .mem_instr (mem_instr),
        .mem_ready (ready_mem),
        .mem_addr  (mem_addr),
        .mem_wdata (mem_wdata),
        .mem_wstrb (mem_wstrb),
        .mem_rdata (mem_rdata),
        .irq       (32'h0)
    );

    // ------------------------------------------------------------------
    // On-chip SRAM (64 KiB), async read (CPU samples rdata at mem_ready), sync write
    // --- async read path: rdata must be valid the same cycle addr is valid ---
    reg [31:0] ram [0:16383];      // 64 KB / 4
    wire [31:0] ram_rdata = ram[mem_addr[15:2]];
    wire        ram_hit = mem_addr[31:16] == 16'h0000;

    always @(posedge clk) begin
        if (mem_valid && mem_wstrb[0] && ram_hit) ram[mem_addr[15:2]][ 7: 0] <= mem_wdata[ 7: 0];
        if (mem_valid && mem_wstrb[1] && ram_hit) ram[mem_addr[15:2]][15: 8] <= mem_wdata[15: 8];
        if (mem_valid && mem_wstrb[2] && ram_hit) ram[mem_addr[15:2]][23:16] <= mem_wdata[23:16];
        if (mem_valid && mem_wstrb[3] && ram_hit) ram[mem_addr[15:2]][31:24] <= mem_wdata[31:24];
    end

    // ------------------------------------------------------------------
    // OUT (print char) and MAGIC (pass/fail) registers
    // ------------------------------------------------------------------
    logic       tests_passed_r;

    // rising-edge strobe for single-cycle side effects
    reg  valid_d;
    wire v_rise = mem_valid && !valid_d;
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) valid_d <= 1'b0;
        else         valid_d <= mem_valid;
    end

    wire out_hit   = (mem_addr == 32'h1000_0000);
    wire magic_hit = (mem_addr == 32'h2000_0000);

    always_ff @(posedge clk) begin
        if (v_rise && (mem_wstrb != 4'b0)) begin
            if (out_hit)        $write("%c", mem_wdata[7:0]);
            else if (magic_hit) tests_passed_r <= (mem_wdata == 32'd123456789);
        end
    end

    // ------------------------------------------------------------------
    // NPU MMIO
    // ------------------------------------------------------------------
    wire npu_hit = (mem_addr[31:28] == 4'h4);   // 0x4000_0000 .. 0x4FFF_FFFF
    wire        npu_valid;
    wire        npu_ready;
    wire [31:0] npu_rdata;

    npu_mmio u_npu_mmio (
        .clk   (clk),
        .rst_n (resetn),
        .valid (v_rise && npu_hit),
        .ready (npu_ready),
        .addr  (mem_addr),
        .wstrb (mem_wstrb),
        .wdata (mem_wdata),
        .rdata (npu_rdata)
    );

    // expose CPU trap and pass/fail flag for the testbench
    assign trap = cpu_trap;
    assign tests_passed = tests_passed_r;

    // ------------------------------------------------------------------
    // Memory decode → mem_rdata / mem_ready
    // ------------------------------------------------------------------
    wire [31:0] npu_rdata_mux = npu_hit ? npu_rdata : ram_rdata;

    logic [31:0] mem_rdata_c;
    always_comb begin
        if (out_hit || magic_hit)      mem_rdata_c = 32'h0;
        else if (npu_hit)              mem_rdata_c = npu_rdata_mux;
        else                           mem_rdata_c = ram_rdata;
    end
    assign mem_rdata = mem_rdata_c;

    // mem_ready pulses one cycle after valid (matches picorv32's native mem model)
    reg ready_r;
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) ready_r <= 1'b0;
        else         ready_r <= mem_valid;
    end
    assign ready_mem = ready_r;
endmodule

// expose internal pass/fail flag as a chip pin for the testbench
