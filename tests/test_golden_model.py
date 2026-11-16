"""Pure-Python unit tests for the EDGEX golden model — no EDA tools needed."""

from __future__ import annotations

import sys
from pathlib import Path

import numpy as np
import pytest

sys.path.insert(0, str(Path(__file__).resolve().parent.parent / "golden"))

import npu_model  # noqa: E402

N = 16


def test_run_tile_matches_matmul_wrapped():
    rng = np.random.default_rng(42)
    for _ in range(50):
        a = rng.integers(-128, 128, (N, N), dtype=np.int8)
        b = rng.integers(-128, 128, (N, N), dtype=np.int8)
        exact = a.astype(np.int64) @ b.astype(np.int64)
        wrapped = ((exact + 2**31) % 2**32) - 2**31
        got = npu_model.run_tile(a, b).astype(np.int64)
        assert np.array_equal(got, wrapped)


def test_run_tile_additive_fills():
    a = np.zeros((N, N), dtype=np.int8)
    b = np.zeros((N, N), dtype=np.int8)
    a[0, 0] = 5
    b[0, 0] = 7
    assert npu_model.run_tile(a, b)[0, 0] == 35


def test_negative_values():
    a = np.full((N, N), -1, dtype=np.int8)
    b = np.full((N, N), -2, dtype=np.int8)
    c = npu_model.run_tile(a, b)
    assert (c == (a.astype(np.int32) @ b.astype(np.int32))).all()


def test_cycles_per_tile_and_utilization():
    assert npu_model.cycles_per_tile() == 47
    assert 0.0 < npu_model.utilization() < 1.0
    assert npu_model.mac_per_cycle() > 0
