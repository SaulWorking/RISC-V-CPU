SIMULATOR ?= verilator
execute_flags += --binary -j 0 -Wall --language 1800-2017

tb_src = "tb_register.sv"

all:
	$(SIMULATOR) $(execute_flags) $(tb_src)
	./obj_dir/Vtb_register
