SIMULATOR ?= verilator
execute_flags += --binary --timing -j 0 -Wall

tb_src = "tb_memory.sv"

all:
	$(SIMULATOR) $(execute_flags) $(tb_src) 
	./obj_dir/Vtb_memory 

