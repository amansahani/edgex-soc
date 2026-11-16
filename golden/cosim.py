"""Generate deterministic cosim vectors: seeded random A/B -> expected int32 C.

Output layout: vectors/<tag>/a.hex, b.hex, expected_c.hex + vectors/manifest.txt
a.hex/b.hex: one 8-bit element per line, row-major ($readmemh into byte array).
expected_c.hex: one 32-bit word per line, row-major.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import sys
from pathlib import Path

import numpy as np

N = 16
HERE = Path(__file__).resolve().parent.parent


def gen_vectors(seed: int, n_tests: int, out_dir: Path) -> list[dict]:
    out_dir.mkdir(parents=True, exist_ok=True)
    manifest = []
    for i in range(n_tests):
        case_seed = int(hashlib.sha256(f"{seed}:{i}".encode()).hexdigest(), 16) % (2**64)
        rng = np.random.default_rng(case_seed)
        a = rng.integers(-128, 128, (N, N), dtype=np.int8)
        b = rng.integers(-128, 128, (N, N), dtype=np.int8)
        c = (a.astype(np.int32) @ b.astype(np.int32)).astype(np.int32)

        tag = f"case_{i:03d}"
        case_dir = out_dir / tag
        case_dir.mkdir(exist_ok=True)

        def write_bytes(name, m):
            (case_dir / name).write_text("\n".join(f"{(int(v) & 0xFF):02x}" for v in m.reshape(-1)) + "\n")

        def write_words(name, m):
            (case_dir / name).write_text(
                "\n".join(f"{(int(v) & 0xFFFFFFFF):08x}" for v in m.reshape(-1)) + "\n")

        write_bytes("a.hex", a)
        write_bytes("b.hex", b)
        write_words("expected_c.hex", c)

        manifest.append({"tag": tag, "case_seed": case_seed,
                         "a_sha": hashlib.sha256((case_dir / "a.hex").read_bytes()).hexdigest()})
    (out_dir / "manifest.json").write_text(json.dumps(manifest, indent=2))
    return manifest


def main() -> int:
    ap = argparse.ArgumentParser(description="Generate EDGEX cosim vectors")
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--n-tests", type=int, default=16)
    ap.add_argument("--out", type=Path, default=HERE / "vectors")
    args = ap.parse_args()
    manifest = gen_vectors(args.seed, args.n_tests, args.out)
    print(f"generated {len(manifest)} cases in {args.out} (seed={args.seed})")
    return 0


if __name__ == "__main__":
    sys.exit(main())
