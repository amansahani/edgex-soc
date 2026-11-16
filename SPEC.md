# EDGEX — Edge-AI RISC-V SoC Prototype

**Status:** spec v0.1 (draft for review) — candidate for open-PDK tapeout
**Date:** 2026-11-16
**Goal:** maximum realistic INT8 TOPS at minimum silicon + NRE cost, open toolchain end-to-end.
**Verification fabric:** BTTF (waves.db + agentic debug) on every gate-level dump.

---

## 1. Why an SoC at all (and not just an NPU IP block)

An edge-AI chip that is only a MAC array still needs *control* (DMA, descriptors,
interrupts, cache/SPM arbitration). On a research prototype the cheapest correct
control plane is a small RV32 core running bare-metal firmware — the same
architecture class as Google Edge TPU ( Coral: ~4 TOPS INT8 ), GreenWave GAP8, and
Kendryte K210. PicoRV32 is the reference core we have **already simulated, ingested,
and queried successfully** (ALL TESTS PASSED @ 474,600 cycles; 314 nets, 15.8 M
changes, 971 MB waves.db built in ~76 s).

## 2. Candidate architectures (choose one)

| Tier | Core | NPU | Clock | TOPS (INT8) | Die est. | Shuttle fits? | Est. TOPS/W |
|---|---|---|---|---|---|---|---|
| T0 — learning | PicoRV32 @ 100 MHz | none (PCPI MAC opcode only) | 100 MHz | ~0.001 | 1–2 mm² | trivially | n/a |
| **T1 — recommended prototype** | PicoRV32 / NEORV32 @ 200 MHz | 16×16 systolic, 256 MAC/cyc | 200 MHz | **0.1 TOPS** | 4–6 mm² | yes (Caravel ~10 mm²) | ~0.2–0.5 |
| T2 — performance prototype | NEORV32 / CVA6-class @ 250 MHz | 32×32 systolic, 1024 MAC/cyc | 250 MHz | **0.5 TOPS** | 7–12 mm² | tight / ChipIgnite | ~0.3–0.8 |
| T3 — production target | RV64 + 4-cluster NPU | 64×64, 4096 MAC/cyc | 400–800 MHz (FinFET) | 3–8 TOPS | custom | no (28 nm +) | 2–10 |

**Recommendation: T1 first, T2 if the shuttle slot allows.** TOPS above are
algorithmic (2 ops per MAC). Real sustained TOPS on T1/T2 will be 50–70 % of peak
once DMA-feed and activation-fetch are accounted for.

## 3. T1 spec (locked candidate)

| Parameter | Spec |
|---|---|
| ISA | RV32IMC + PCPI custom MAC (or MMIO-mapped NPU) |
| NPU | INT8, weight-stationary 16×16 systolic array; 256 MAC/cycle; INT32 accum |
| TOPS | 0.102 peak INT8 TOPS (0.05–0.07 sustained) |
| Workloads | MobileNetV1/V2-class, TinyML (keyword spotting, gesture), 128×128 face detector |
| SRAM | 512 KB (weights SPM 384 KB + activation 128 KB), single-port, sky130 HD macros or latch array |
| Flash | QSPI nor-flash execute-in-place (or shadow), ≤ 16 MB |
| IO | UART, SPI, I2C, 24× GPIO + 8× PWM (sensors/actuators), JTAG |
| Bus | AXI4-lite (control) + AXI4-128b (NPU DMA) |
| Clock | 200 MHz core / 200 MHz NPU; single PLL (or external clock, no PLL needed) |
| Interrupts | 32-bit PLIC-lite, timer + 8 external |
| Sleep | clock-gated domains, retention register file, ~100 µA idle |
| Debug | trace port (HTIF/UART), JTAG bring-up |
| Signoff | DRC/LVS clean (magic/netgen), antenna clean, CTS, hold-fixed |
| Process | **Skywater 130 nm** (open PDK) |
| Shuttle | OpenMPW (free, cooperative) or Efabless ChipIgnite (~US$9–10 k, packaged + board) |
| Power | ≤ 300 mW @ 1.8 V digital |
| Package | Caravel QFN-64 (if OpenMPW) or WLCSP (ChipIgnite) |

### Non-goals (v0.1)

- No floating point (INT8-only), no transformer, no Wi-Fi/BLE radio, no DDR PHY, no
  analog (sky130 shuttle digital projects), no security island.

## 4. Toolchain (all open source, $0 EDA)

RTL: SystemVerilog → **Verilator** (fast 2-state) + **Icarus** (4-state, X-prop)
Testbench: **cocotb** (Python) + hand SV where useful
Sims: functional, gate-level (with SDF later), and power (`yosys`+`opensta` / `librespot` is not yet complete — accept estimate)
Formal: **Yosys + SymbiYosys + smtbmc** (32-bit control safety properties)
ASIC P&R: **OpenLane 2 / LibreLane** (Yosys → OpenROAD → magic → netgen), PDK = sky130A
Debug: **BTTF** — waves.db queries, ASSERT_KNOWN on NPU handshake, toggle-coverage gates
Language firmware: bare-metal C, `riscv64-elf-gcc -march=rv32imc` (done, working), TinyML via TFLM
Memory compiler: sky130 `sram_*` macros from OpenRAM (or 32×8 latch array if macros too big)

## 5. Development plan, estimates, and costs

Team assumption: **1 senior + 0.5 firmware** (or 2 total part-time), BTTF accelerating debug ~30 %.

| Phase | Work | Est. | Trials / sims | Exit criteria |
|---|---|---|---|---|
| P0 | Foundations: BTTF + PicoRV32 ALL TESTS PASSED (done) | 1–2 wk | 1 full boot, 474 k cycles | green VCD → waves.db |
| P1 | Microarch spec: array, DMA, descriptors, interrupts | 2–3 wk | — | paper + cycle model |
| P2 | Golden model (numpy/C) + cosim harness | 2 wk | 1e6+ MAC checks, 100 random vectors | bit-true vs model |
| P3 | NPU RTL: MAC array, SRAM ports, DMA, AXI | 6–8 wk | ≥ 500 targeted sims, seed sweeps | cosim clean |
| P4 | Integration: core + NPU + firmware driver | 2–3 wk | 50+ boot cycles | inference < 50 ms mobile net |
| P5 | Verification: cocotb, coverage, formal | 4–6 wk | ≥ 90 % RTL toggle coverage; ≥ 10 SymbiYosys properties proven | LINT=0, coverage hit |
| P6 | Physical design: synth → P&R → DRC/LVS | 4–8 wk | 2–3 full P&R attempts typical first-pass fails | DRC/LVS clean, GDS |
| P7 | Tapeout logistics: OpenMPW slot application / ChipIgnite order | 1–2 wk | 12 supplier documents | GDS out |
| P8 | **Fab** (shuttle queue) | **3–6 mo** | — | dies arrive |
| P9 | Bring-up: power, clock, UART, NPU smoke test | 2–4 wk | 1 board rev | hello-world + inference on silicon |
| P10 | Characterization: TOPS, TOPS/W, accuracy delta vs golden | 2 wk | 100-epoch sweep | report |

**Engineering total: ≈ 24–33 weeks (6–8 months)** of focused work; **wall clock ≈ 9–15 months** incl. fab queue.

### Cost table (rough)

| Item | USD |
|---|---|
| EDA / PDK | 0 |
| Shuttle (OpenMPW, if accepted) | 0 |
| Shuttle (ChipIgnite, packaged, ~5 mm²) | ~9–12 k |
| Dev board / breakout / probes | 1–2 k |
| Misc (adapters, PMIC, flash) | 0.5–1 k |
| **Cash total (T1, ChipIgnite)** | **≈ 11–16 k** |
| **Cash total (T1, OpenMPW free slot)** | **≈ 2–4 k** |
| Engineering (2 people × 7 mo @ $8 k/mo loaded) | ~112 k (or sweat equity) |

### Risks / honest notes

- sky130 is **130 nm**: don't expect TOPS/W to compete with 28 nm+ Edge TPU. The
  prototype proves the *architecture and verification flow*, not market efficiency.
- SRAM macro availability via OpenRAM is the usual critical path; fallback = latches.
- P&R first-pass failure is normal; hold 2 extra weeks.
- OpenMPW acceptance is competitive; ChipIgnite is the paid-fast path.
- X-prop issues gate-level sims will be worse than RTL; budget iverilog + BTTF.

## 6. Role of BTTF in EDGEX

- At gate level this boot produces 100–300 MB VCD; `ingest` ≈ 60–90 s wall.
- Standing queries per milestone: `cpu_state` trace audit, DMA illegal-strobe
  checks (`ASSERT_NEVER`), unknown-state detection (`ASSERT_KNOWN` on NPU valid/ready),
  toggle-coverage gate ≥ 80 %, peak-activity windows for power hotspots.
- Golden answers annotated → regression CI.
