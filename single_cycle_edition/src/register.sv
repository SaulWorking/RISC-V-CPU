
// this consists
module register(

	// size of addresses are 5 bits wide
	// to include all 32 registers in RISC-V	
	//
	// do not write to the ZERO (x0) register because
	// we want it to be a default valu
	
	input logic clk;
	input logic rst_n;

	input logic [4:0] address1;
	input logic [4:0] address2;

	output logic [31:0] read_data1;
	output logic [31:0] read_data2;

	input logic write_enable;
	input logic [31:0] write_data;
	input logic [4:0] address3; // store all data here
);


int sizeReg = 32;
reg [31:0] registers [0:sizeReg - 1];

always @(posedge clk) begin

	if(rst_n = 1'b0) begin
		for(int i = 0; i < sizeReg; i++) begin
			registers[i] = 32'b0;
		end
	end else if(write_enable == 1'b0 && address3 != 0)begin
			registers[address3] <= write_data;	
	end
end
		

// generic reading logic
// if address1 || address2 change then update

always_comb begin : readLogic
	read_data1 = registers[address1];
	read_data2 = registers[address2];
end

endmodule
);
