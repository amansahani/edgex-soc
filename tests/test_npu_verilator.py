"""RTL smoke test: build tb_npu_top with Verilator, run all cosim vectors,
assert bit-exact RESULT: PASS on every case. Skipped if verilator is missing."""

from __future__ import annotations

import shutil
import subprocess
from pathlib import Path

import pytest

ROOT = Path(__file__).resolve().parent.parent
TB_DIR = ROOT / "tb"
VECTORS = ROOT / "vectors"

VERILATOR = shutil.which("verilator")
pytestmark = pytest.mark.skipif(VERILATOR is None, reason="verilator not installed")


@pytest.fixture(scope="module")
def tb_bin(tmp_path_factory):
    build_dir = TB_DIR / "obj_dir"
    proc = subprocess.run(
        [VERILATOR, "--binary", "--timing", "--trace-vcd", "-Wno-fatal",
         "--top-module", "tb_npu_top", "--Mdir", str(build_dir),
         "../rtl/npu_top.sv", "../rtl/npu_array.sv", "../rtl/npu_pe.sv",
         "tb_npu_top.sv", "-o", "tb_npu_top"],
        cwd=TB_DIR, capture_output=True, text=True,
    )
    assert proc.returncode == 0, proc.stdout + proc.stderr
    return build_dir / "tb_npu_top"


def _ensure_vectors() -> list[Path]:
    cases = sorted(VECTORS.glob("case_*"))
    if not cases:
        proc = subprocess.run(
            ["python3", "golden/cosim.py", "--seed", "1", "--n-tests", "4"],
            cwd=ROOT, capture_output=True, text=True,
        )
        assert proc.returncode == 0
        cases = sorted(VECTORS.glob("case_*"))
    return cases


@pytest.mark.parametrize("case_dir", _ensure_vectors())
def test_case_bit_exact(tb_bin, case_dir: Path):
    proc = subprocess.run(
        [str(tb_bin), f"+vecdir={case_dir}"],
        capture_output=True, text=True, timeout=60,
    )
    assert "RESULT: PASS" in proc.stdout, proc.stdout
