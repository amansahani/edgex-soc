#!/usr/bin/env bash
# Build firmware/demo.c -> demo.bin -> demo.hex, compile the SoC with Verilator, run.
# Requires: riscv64-elf-gcc (or set TOOLCHAIN_PREFIX), verilator, this repo root.
set -euo pipefail
cd "$(dirname "$0")/.."

TOOLCHAIN_PREFIX="${TOOLCHAIN_PREFIX:-riscv64-elf-}"

echo "== firmware =="
"${TOOLCHAIN_PREFIX}gcc" -Os -mabi=ilp32 -march=rv32imc -ffreestanding -nostdlib \
    -T firmware/sections.lds -Wl,--build-id=none -o firmware/demo.elf \
    firmware/start.S firmware/demo.c
"${TOOLCHAIN_PREFIX}objcopy" -O binary firmware/demo.elf firmware/demo.bin
python3 - <<'EOF'
data = open('firmware/demo.bin', 'rb').read()
print(f"firmware.bin: {len(data)} bytes")
# pad to 4 bytes and write little-endian words as $readmemh lines
padded = data + b'\x00' * ((4 - len(data) % 4) % 4)
with open('firmware/demo.hex', 'w') as f:
    for i in range(0, len(padded), 4):
        f.write("%08x\n" % int.from_bytes(padded[i:i+4], 'little'))
EOF

echo "== verilate =="
verilator --binary --timing --trace-vcd --top-module tb_edgex_top \
    -Wno-fatal tb/tb_edgex_top.v rtl/edgex_top.sv rtl/npu_top.sv rtl/npu_array.sv rtl/npu_pe.sv rtl/npu_mmio.sv \
    /private/var/folders/yr/_5_dfhhn2z1_l9fhtfzk_s000000gn/T/opencode/picorv32/picorv32.v \
    -o tb_edgex_top

echo "== run =="
./obj_dir/tb_edgex_top +vcd
