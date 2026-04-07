# makefile
#
# default
SIM ?= verilator
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(PWD)/../../src/control.sv
#use VHDL_SOURCES dir for VHDL files

#TOPLEVEL is name of toplevel module in Verilog/VHDL file
TOPLEVEL = control

#module is name of python test file
MODULE = test_control

#include cocotb's make rules to tkae care of simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim
