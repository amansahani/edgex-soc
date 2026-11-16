# EDGEX — Edge-AI RISC-V SoC (proof of concept)

Open-PDK (sky130) prototype: PicoRV32-class RV32IMC core + 16×16 INT8 systolic
array, fully open toolchain from RTL to waves. Goal: realistic INT8 TOPS at
minimum non-recurring engineering (NRE) cost, with a reproducible verification
story baked in from day one.

**Status:** NPU RTL bit-exact against a numpy golden model (256/256 elements,
all seeds); PicoRV32 + NPU SoC demo passes end-to-end (`scripts/build_demo.sh`).
`verilator --binary --timing --trace-vcd` flow throughout; no proprietary tools.

```
edge_ai_soc/
├── SPEC.md              # project spec, TOPS/cost trade-offs, fab plan
├── docs/                # NPU_SPEC.md (microarchitecture), FAB.md (tapeout plan),
│                        #   NPU_BRINGUP_DEBUG.md (debug log)
├── rtl/                 # synthesizable SystemVerilog (pe, array, top, mmio, soc)
├── tb/                  # testbenches (Verilator binary flow)
├── golden/              # numpy golden model + cosim vector generator
├── vectors/             # generated cosim vectors (hex, row-major)
├── firmware/            # bare-metal demo firmware for the SoC
├── scripts/             # build/run helpers
└── tests/               # pytest: golden model + RTL cosim
```

## Quickstart

```bash
python3 golden/npu_model.py selftest   # sanity-check the golden model
make vectors                            # deterministic, seeded cosim vectors
make smoke                              # Verilator → run all vectors, bit-exact check
python3 -m pytest tests/ -q             # golden model + RTL cosim suite
make demo                               # full PicoRV32 + NPU SoC boot (bit-exact end-to-end)
```

## Verification strategy

RTL sims dump VCD → ingested into `waves.db` (relational store; see the BTTF
paper below) → deterministic SVA checks + agentic queries. Golden vectors are
bit-exact: RTL output must equal `vectors/*/expected_c.hex` for every seed.
Gate-level checks use `ASSERT_KNOWN` on the NPU handshake and a toggle-coverage
gate.

## Citation

The verification philosophy (waveforms-as-relational-store + agentic
verification) is directly inspired by:

Je Yang, Ivan Lobov, Thomas Karpati, *Back to the Future: Rethinking EDA
Infrastructure for Agentic Systems in Chip Design Verification*, NeurIPS 2026
Workshop (AI for Chip Design), arXiv:2610.06790.
## License

Apache-2.0 (see `LICENSE`). RISC-V core: PicoRV32 (ISC). Testbench data:
generated vectors (CC0, see `vectors/`).
