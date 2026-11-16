# EDGEX — Edge-AI RISC-V SoC

Open-PDK (sky130) prototype: PicoRV32-class RV32IMC core + 16×16 INT8 systolic NPU.
Goal: highest realistic INT8 TOPS at minimum NRE cost, fully open toolchain, real fab at the end.

**Status:** NPU RTL skeleton works — 16×16 INT8 systolic, bit-exact vs the numpy golden model (256/256 elements, 16/16 seeds). See `docs/NPU_BRINGUP_DEBUG.md` for the bring-up debug log.

```
edge_ai_soc/
├── SPEC.md              # project spec & plan (T1 tier)
├── docs/                # NPU_SPEC.md (microarchitecture), FAB.md (tapeout plan), NPU_BRINGUP_DEBUG.md
├── rtl/                 # synthesizable SystemVerilog (NPU: npu_pe, npu_array, npu_top)
├── tb/                  # testbench (Verilator binary flow) — prints RESULT: PASS/FAIL
├── golden/              # numpy golden model + cosim vector generator
├── scripts/             # build/run helpers (verilator build, vector gen, bttf queries)
├── tests/               # pytest: golden model + RTL cosim (skips if verilator missing)
└── vectors/             # generated cosim vectors + expected outputs (git-ignored blobs)
```

## Quickstart

```bash
# 1. golden model — check it standalone
python3 golden/npu_model.py selftest

# 2. generate cosim vectors (deterministic, seeded)
python3 golden/cosim.py --seed 1 --n-tests 20

# 3. build & run the RTL skeleton against them (requires verilator)
make smoke

# 4. full pytest suite
python3 -m pytest tests/ -q
```

## Verification strategy

RTL sims dump VCD → ingested by **BTTF** (`../bttf`) into `waves.db` → deterministic
SVA + agentic queries. Golden vectors are bit-exact: RTL output must equal
`vectors/*/expected.hex` for every seed. Coverage gate: ≥ 80 % toggle coverage
(`get_scope_toggle_coverage`), `ASSERT_KNOWN` on NPU handshake.

## Reproduce from clean checkout

```bash
git clone <this-repo> edge_ai_soc && cd edge_ai_soc
/Users/amansahani/Desktop/personal/pyprojects/bin/pip install -e .  # (not required: no package)
make smoke && python3 -m pytest tests/ -q
```
