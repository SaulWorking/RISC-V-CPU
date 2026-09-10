SIMULATOR ?= verilator
execute_flags += --binary -j 0 -Wall

tb_src = register.sv

all:
	$(SIMULATOR $(execute_flags) $(tb_src)
	./obj_dir/Vtb_register
