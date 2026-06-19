- source : https://docs.riscv.org/reference/isa/v20260120/unpriv/rv32.html

# Registers:
- RISC-32VI has 40 unique instructions
- ![[note.png]]
- Register -> x0 is hardwired with all bits equal to 0
- Registers x1 -> x32 are General Purpose Registers
	- may contain:
		-  Boolean values
		-  two complements signed binary integers
		-  unsigned binary integers
- Register -> __pc__ 
	- pc is the program counter, holding the current instruction's address
- # fun fact:
	- there is no Dedicated stack pointer
		- any register can be used for that purpose
	- HOWEVER!
		- the standard calling convention uses x2
- standard software calling convention uses register x1 (to hold return address for a call)
	- register x5 is available as an alternate link register