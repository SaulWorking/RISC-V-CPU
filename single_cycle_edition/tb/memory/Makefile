SIMULATOR ?= verilator
execute_flags += --binary --timing -j 0 -Wall --language 1800-2017

dut_src = "../../src/memory.sv"
tb_src = "tb_memory.sv"

all:
	$(SIMULATOR) $(execute_flags) $(tb_src) 
	./obj_dir/Vtb_memory 

