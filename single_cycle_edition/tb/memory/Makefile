SIMULATOR ?= verilator
execute_flags += -Wno-fatal --binary -j 



dut_src = "../../src/memory.sv"

all:
	$(SIMULATOR) $(execute_flags) \
        --top-module tbench_top \
        +incdir+$(UVM_HOME) \
        +define+UVM_NO_DPI \
        +incdir+. \
        $(UVM_HOME)/uvm_pkg.sv \
        $(dut_src) \
        tb_memory.sv \
