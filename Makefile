# EDGEX build helpers. Requires: verilator, python3 (numpy), ../bttf for waves.db queries.

BTTF_BIN ?= /Users/amansahani/Desktop/personal/pyprojects/bin/bttf
PYTHON   ?= python3
NPU_TOP  := npu_top

.PHONY: selftest vectors smoke pytest clean

selftest:
	$(PYTHON) golden/npu_model.py selftest

vectors:
	$(PYTHON) golden/cosim.py --seed 1 --n-tests 16

smoke: vectors
	cd tb && verilator --binary --timing --trace-vcd --top-module tb_npu_top \
	  -Wno-fatal ../rtl/npu_top.sv ../rtl/npu_array.sv ../rtl/npu_pe.sv tb_npu_top.sv -o tb_npu_top
	@fail=0; for d in vectors/case_*; do \
		echo "== $$d =="; \
		out=$$(./tb/obj_dir/tb_npu_top +vecdir=$$d); echo "$$out" | tail -1; \
		echo "$$out" | grep -q 'RESULT: PASS' || fail=1; \
	done; \
	[ $$fail -eq 0 ] && echo "smoke: all vectors bit-exact" || { echo "smoke: FAILURES FOUND"; exit 1; }

pytest:
	$(PYTHON) -m pytest tests/ -q

clean:
	rm -rf tb/obj_dir tb/*.vcd tb/waves.db vectors/*.hex vectors/report.txt
