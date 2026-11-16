"""EDGEX golden model — bit-exact reference for the 16×16 systolic NPU.

Matches docs/NPU_SPEC.md:
  C[i][j] = sum_k A[i][k] * B[k][j];  A, B int8;  C int32 (wraps).
"""

from __future__ import annotations

import argparse
import sys

import numpy as np

N = 16
CYCLES_PER_TILE = 2 * N - 1 + N  # 31 array cycles + drain


def run_tile(a: np.ndarray, b: np.ndarray) -> np.ndarray:
    """Return int32 C = A @ B (wraps like hardware). Inputs must be int8."""
    assert a.shape == (N, N) and b.shape == (N, N)
    assert a.dtype == np.int8 and b.dtype == np.int8
    return (a.astype(np.int32) @ b.astype(np.int32)).astype(np.int32)


def cycles_per_tile() -> int:
    """Estimator from the skewed wave schedule (see NPU_SPEC.md §2)."""
    return 2 * N - 1 + N


def utilization() -> float:
    return (N * N * N) / (cycles_per_tile() * N * N)


def mac_per_cycle() -> float:
    return (N * N * N) / cycles_per_tile()


def serialize_matrix(m: np.ndarray) -> str:
    """One 32-bit hex word per line (row-major), for $readmemh."""
    flat = m.reshape(-1)
    if m.dtype == np.int8:
        words = [(int(v) & 0xFF) for v in flat]
    else:  # int32 C
        words = [int(v) & 0xFFFFFFFF for v in flat]
    return "\n".join(f"{w:08x}" for w in words)


def _selftest() -> int:
    rng = np.random.default_rng(20261116)
    for i in range(200):
        a = rng.integers(-128, 128, (N, N), dtype=np.int8)
        b = rng.integers(-128, 128, (N, N), dtype=np.int8)
        c64 = a.astype(np.int64) @ b.astype(np.int64)
        c_model = run_tile(a, b).astype(np.int64)
        wrapped = ((c64 + 2**31) % 2**32) - 2**31          # int32 wrap of the exact result
        assert np.array_equal(wrapped, c_model), f"mismatch on tile {i}"
    print("selftest: 200 random tiles, bit-exact vs int32-wrapped matmul — OK")
    print(f"cycles/tile={cycles_per_tile()}  util={utilization():.1%}  mac/cycle={mac_per_cycle():.1f}")
    return 0


def main() -> int:
    ap = argparse.ArgumentParser(description="EDGEX golden NPU model")
    ap.add_argument("cmd", nargs="?", default="selftest", choices=["selftest"])
    args = ap.parse_args()
    return _selftest()


if __name__ == "__main__":
    sys.exit(main())
