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
