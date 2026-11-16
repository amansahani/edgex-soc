# NPU Microarchitecture — 16×16 Weight-Stationary INT8 Systolic Array (v0.1)

Document locked 2026-11-16. RTL (`rtl/`), golden model (`golden/`) and cosim vectors must match this document.

## 1. Function

Compute `C = A × B` with `A, B ∈ int8[-128, 127]`, accumulate in int32:

```
C[i][j] = Σ_{k=0..15} A[i][k] · B[k][j]
```

One tile = 16×16×16 MACs (4096 MACs).

## 2. Dataflow (systolic, diagonal-wave)

- **Weight stationary**: at load time each PE(i=`k`, j) stores `W[k][j] = B[k][j]`.
- **Activations flow horizontally**, fed into column 0 with per-row skew (row k starts at t=k).
- **Partial sums flow vertically**, row → row-neighbor, column lists `j` unchanged.
- **Output**: bottom row (k=15) drains `C[i][j]` after the last stage of the wave passes.
- Row `k` at cycle `t` carries activation `A[t-k][k]`. Diagonal wave visits every cell exactly once per tile.
- Full tile: **16 + 15 = 31 cycles** of array time. Peak utilization ≈ 4096/31/256 ≈ 52 % of 256 MACs/cycle.
  Drain adds ~16 cycles for C readout (overlapped with next tile in v1).

## 3. Array organization

- 16×16 PE grid (`npu_array.sv`), one accumulator (32b) and one a-stage register (8b) per PE.
- Row input port: 128-bit (16 × int8) feed from the activation feeder (part of `npu_top`), one value per row per cycle.
- Weight matrix written element-wise (`w_we/w_addr/w_data`, 8-bit) before the run.
- Activation tile written element-wise (`a_we/a_addr/a_data`, 8-bit, 256 elements).

## 4. MMIO-ish port map (npu_top)

| Signal | Dir | Width | Meaning |
|---|---|---|---|
| clk, rst_n | in | 1 | |
| w_we, w_addr, w_data | in | 1/8/8 | write B element (addr = k*16+j) |
| a_we, a_addr, a_data | in | 1/8/8 | write A element (addr = i*16+k) |
| start | in | 1 | begin tile (self-clears) |
| done | out | 1 | tile complete + drain complete |
| c_addr, c_data | in/out | 8/32 | read C element (i*16+j) after done |

PCIe/AXI/DMA wrapping happens in a later revision (`npu_soc_wrap.sv`) — v0 keeps this flat port list so the testbench and future AXI bridge use the same contract.

## 5. Control FSM (npu_top)

```
IDLE → LOAD (implicit, via w/a ports) → start → RUN (31 cycles) → DRAIN (16 cycles) → DONE
```

`done` pulses once. Restart allowed from DONE.

## 6. Numeric semantics

- `a`, `b` as `int8` (two's complement); product `int16`; accumulation into `int32` (wraps, matching C/numpy int32).
- No saturation, no rounding — caller must pre-scale activations (TFLM convention: quantize outside the array).
- v0 does not detect overflow of int32 — 4096 worst-case adds of ±2¹⁴ = ±2²⁶, far from int32 limit.

## 7. Sign-off plan

- Golden model (`golden/npu_model.py`): `run_tile(A, B) -> C` + cycle count estimator.
- Cosim vectors (`golden/cosim.py`): seeded random A/B, expected = int32 matmul.
- RTL testbench (`tb/tb_npu_top.sv`): loads vectors, compares bit-exact, `$finish(1)` on mismatch.
- Continuous: `ASSERT_KNOWN(npu handshake)` in BTTF on every dump; toggle-coverage gate ≥ 80 %.

## 8. Deferred to v1/v2

- Skewed activation re-use across tiles (row broadcast instead of MMIO writes) — target ≥ 75 % util.
- Weight double-buffering; C double buffer.
- AXI4-lite wrapper, DMA descriptor engine, interrupt on done.
- SRAM macros (sky130 OpenRAM) replacing inferred arrays.
- Multi-tile channels (2 arrays for 2 output planes).
