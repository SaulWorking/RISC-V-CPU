//memory.sv

module memory #(
	parameter WORDS = 64
) (
	input logic clk,
	input logic [31:0] address,
	input logic [31:0] write_data,
	input logic write_enable,
	input logic rst_n,

	output logic [31:0] read_data
);


/*
 the memory declaration below is byte addressed
 no support for mis-aligned write nor reads.
*/ 
reg [31:0] mem [WORDS-1:0]; //memory array of 64 words, 32  bits.

//num of bits needed to index memory (6 bits)
localparam INDEX_BITS = $clog2(WORDS);

always @ (posedge clk) begin
	//reset logic
	if(rst_n == 1'b0) begin
		for(int i =0; i< WORDS; i++) begin
			mem[i] <= 32'b0;
		end
	end
	else if(write_enable) begin
		//ensure address is aligned to word boundary
		//else, ignore the write
		
		if(address[1:0] == 2'b00) begin
			//force truncate

			/* verilator lint_off WIDTHTRUNC */ 
			mem[address[31:2]] <= write_data;
		end
	end
end

//read logic
always_comb begin
	//here, address[31:2] is the word index/
	
	/* verilator lint_off WIDTHTRUNC */
	read_data = mem[address[31:2]];
end

endmodule

