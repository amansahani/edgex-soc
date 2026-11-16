# FAB logistics — EDGEX T1 (sky130)

Decision matrix, timeline, and action items for getting EDGEX into real silicon.
Research current as of Nov 2026 — re-verify program windows before applying.

## 1. Two paths to a real chip

| | OpenMPW (via Efabless) | Efabless ChipIgnite |
|---|---|---|
| Cost | **$0** (shuttle slot if selected) | ~**US$ 9–12k** (packaged die + Caravel breakout-ish) |
| What you get | bare die or packaged chip (program-dependent) | packaged chip + engineering support + docs flow |
| Queue | competitive selection, ~3–6 months after tapeout | usually defined MPW cycles, ~3–6 months |
| Qualification bar | MPW proposals reviewed (design completeness, honesty of DRC/LVS story) | lower bar — pay for the slot |
| Packaging | program-dependent | included (QFN/CSP) |
| Board | bring-your-own or partner Caravel dev board | vendor reference + your board design |
| Best if | budget-constrained, can afford the wait | schedule > cost |

**Recommendation:** apply to OpenMPW with the T1 design; keep ChipIgnite as the
paid fallback. A clean LibreLane DRC/LVS report + this BTTF-verified RTL history
is exactly the artifact selection committees like to see.

## 2. What the design must show to qualify

- [ ] RTL passes `verilator --lint-only -Wall` with 0 errors (currently: 3 WIDTH warnings only — clean up or suppress with `lint_off` + rationale)
- [ ] DRC/LVS clean (LibreLane signoff deck, `magic`+`netgen`)
- [ ] No antenna violations; power nets properly routed (VDD/GND/GROUND strips)
- [ ] Test insertion: JTAG or at minimum UART + GPIO for ID hashing; die ID readable on boot
- [ ] Power analysis at gate level (`orell true`-class flow with LibreLane reports)
- [ ] GDSII within the shuttle's user area (Caravel ~10 mm² if that's the vehicle)
- [ ] Top-level pinout + bondout diagram
- [ ] Design files under MIT-like open license (OpenMPW requirement for open shuttles)

## 3. Open-source flow (all present on this machine)

```bash
# toolchain
pip install librelane volare            # or Nix/docker route
volare enable --pdk sky130              # sky130 PDK (~4 GB download)

# lint
verilator --lint-only -Wall rtl/*.sv

# synth + P&R + signoff
librelane --design-name edgex_top --pdk sky130A --run-flow rtl2gds rtl/edgex_top.sv
```

`edgex_top.sv` = `picorv32` (or NEORV32) + `npu_top` + QSPI/SPI/UART/GPIO pads +
clock/reset + Caravel wrapper. User area for this design: core ~0.3 mm² +
NPU ~3–5 mm² + SRAM (OpenRAM macro or latches) — fits Caravel if SRAM ≤ 256 KB.

## 4. Timeline (from "RTL sign-off" to silicon in hand)

| Phase | Est. | Notes |
|---|---|---|
| RTL sign-off + T1 integration (this repo) | 12–16 wks | see SPEC.md |
| LibreLane: synth → P&R → DRC/LVS clean | 3–6 wks | first attempt usually fails |
| GDS + docs + shuttle application | 1–2 wks | application: 2 pages + GDS + test plan |
| Shuttle queue | 3–6 mo | OpenMPW selection ~6–10 wks to verdict |
| Fab + packaging | 8–10 wks | inside queue estimate above |
| Bring-up board + firmware flash | 2–4 wks | use PicoRV32 `firmware/*` as starting image |
| Characterization + regression on silicon | 1–2 wks | NPU vs golden model vectors (this repo) |

Engineering time to first-power-on: **~7–9 months wall clock** (excluding selection).

## 5. Immediate action items (this month)

1. Finish T1 integration: `picorv32` + `npu_top` behind a memory-mapped bridge; smoke firmware demo (`hello` → `inference`)
2. Gate-level waves through BTTF; `ASSERT_KNOWN` on NPU handshake; ≥ 80 % toggle coverage in `docs/NPU_SPEC.md` sign-off list
3. `verilator --lint-only` → get to zero warnings
4. Install `volare` + sky130 PDK; run a throwaway LibreLane build on a trivial design to learn the flow
5. Decide Caravel vs. flat padring; pick GPIO functions (JTAG > UART)
6. Write the OpenMPW application (or book ChipIgnite slot)
