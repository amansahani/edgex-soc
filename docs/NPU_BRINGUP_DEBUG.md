# NPU bring-up — debug log

Recorded 2026-11-16 for the benefit of the next engineer to touch this.
Symptom history, layer by layer ("scientifically, from the bottom up"):

| # | Symptom | Layer found | Root cause |
|---|---|---|---|
| 1 | `TRAP after N cycles` immediately | sim flow | firmware built with `COMPRESSED_ISA` but TB didn't set `-DCOMPRESSED_ISA` (picorv32 lesson, same family) |
| 2 | `timeout waiting for done` | TB | `logic done` read pre-NBA at a 1-cycle pulse; `done` actually fired — TB missed it. Fixed: latch pulse over N cycles (`cyc_got_done`) |
| 3 | `psum` and fed values all zero | RTL: npu_array | always_comb drove a port (multi-driver conflict). Fixed: inline ternaries, ports only in generate |
| 4 | `c_mem[..][..]` reads 0 | RTL: npu_top `a_row_in` | **`logic en = (state == S_RUN)` — a declaration with initializer initializes once at t=0, it is NOT a continuous assignment.** `en` stuck at 0; PEs never worked; drains captured zeros. Same for `wl`. Fixed: `wire en = …` |
| 5 | `a_row_in` holds stale 88 | RTL: npu_top `g_feed` | **`int idx = run_cnt - k` — initializes idx to `run_cnt-k` at time 0 and never re-assigns; Verilator left it static at 0.** The whole array computed A[0][·] forever. Fixed: `int idx; idx = run_cnt - k;` (blocking assign every eval) |
| 6 | `C[0][0]` wrong cycle | RTL: capture schedule | Drain window assumed cell's result published pre-edge; off-by-one. Fixed: `m = run_cnt - 16 - j`, verified `pe15,0.pout = 000009e4` at t=15 (matches expected_c.hex) |

Meta-rules distilled (all three are the same SV-vs-types trap):

1. **`logic x = expr` initializes ONCE; `wire x = expr` re-evaluates.** Use `wire` (or uninitialized `logic` + `always_comb`) for any function of live signals.
2. **No initializer on declarations inside procedural blocks** — if the value changes during the block, it needs a blocking assignment each evaluation (`int idx; idx = …`).
3. **Ports of the array are fine, but dynamic part-selects into packed vectors fed by always_comb get optimized to zero** in some paths — restructured the feeder as per-lane generate loops with genvar-constant slices.

End state: 16/16 cosim vectors, 256/256 elements bit-exact, `pytest` green, ~76 s to rebuild `waves.db` for a 193 MB VCD via BTTF.

## SoC integration — bugs found raising the NPU into PicoRV32

Recorded after `scripts/build_demo.sh` turned green (`ALL TESTS PASSED`, cycle 24,800):

| # | Symptom | Layer found | Root cause |
|---|---|---|---|
| 7 | First access to any address returns the *previous* address's data | memory pipeline | `ram_rdata <= ram[addr]` — registered read lags addr by 1 cycle; CPU samples rdata at mem_ready. Fixed: **async read** (`wire ram_rdata = ram[...]`) |
| 8 | Each OUT char / NPU byte write fired **twice** | SoC bus handshake | `mem_valid` stays high 2 cycles (valid held until `mem_ready`) — side effects must be **rising-edge**: `wire v_rise = valid && !valid_d` |
| 9 | NPU result garbage; `A_IDX`/`B_IDX` stuck at 0 | MMIO bridge | Off-by-one chain: side effects fired on the same edge the CPU sampled — the NPU's a_we/w_we hit after the idx had already been incremented. Fixed: **registered command latch** (`addr_r/wdata_r/wstrb_r` latched on `rise`; side effects on `rise1`; indices on `rise2`) |
| 10 | C readback returned the *next* element | MMIO read path | `c_idx` incremented on the same edge the CPU sampled `rdata`. Fixed by the registered-latch pipeline + registered `rdata_q` (CPU samples the pre-increment value) |
| 11 | `TRAP` never seen by testbench | SoC port map | `wire trap` existed internally but was **not exported as a port** — the TB's `trap` floated at 0. Fixed: export `trap` and `tests_passed` (also made them chip-level debug pins) |
| 12 | `TIMEOUT` printed after `ALL TESTS PASSED` | testbench | `$finish` doesn't stop flow in Verilator's timing mode — needed an explicit `done` flag and a post-loop guard |

A further timing rule crystallized here:

1. **A 2-cycle `valid` window means every side effect must be rising-edge.**
2. **Registered reads lag the address by one cycle — anything sampling them must wait.**
3. **When in doubt about issue order, pipeline the command instead of arguing order** — the registered-latch shape eliminates the whole class of "who fires first at the edge" questions.
