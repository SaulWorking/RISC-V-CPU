'''
SIMULATOR ?= verilator
execute_flags += --binary -j 0 -Wall

tb_src = "tb_memory.sv"

all:
        $(SIMULATOR) $(execute_flags) $(tb_src)
        ./obj_dir/Vtb_memory
'''

import sys
import os

if len(sys.argv) < 2:
	print("too few arguments")
	sys.exit(1)

print(sys.argv[1])
testBench = sys.argv[1]

file = open("Makefile", "w")
file.writelines(["SIMULATOR ?= verilator\n", 
	         "execute_flags += --binary -j 0 -Wall\n\n",
	         "tb_src = " + "\"" + testBench + ".sv\"" + "\n\n",
 		       "all:\n" + "\t$(SIMULATOR $(execute_flags) $(tb_src)\n",
		        "\t./obj_dir/Vtb_" + testBench
		])
file.close()

endDir = "tb/" + testBench
if os.path.isdir(endDir):
 print("makefile created")
	os.rename("Makefile", endDir + '/' + "Makefile");
else:
	print("ayo sus!! directory + makefile created")
	os.mkdir(endDir)
	os.rename("Makefile", endDir + '/' + "Makefile");
