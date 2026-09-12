`include "../../src/register.sv"

module tb_register();

	always #1 clk =~ clk;

	// start value

	initial begin
		rst_n = 0;

		address1 = 5'b0;
		address2 = 5'b0;

	        read_data1 = 32'b0;	
		read_data2 = 32'b0;	
		
		write_enable = 0;
		write_data = 32'b0;
		address3 = 5'b0; // store write data here

		@(posedge clk);	
		rst_n = 1;
	end


	initial begin
		write_enable = 1;
		write_data = 32'hBEEFBEAD;

		@(posedge clk);	

		$display("address1: %b", address1);
		$display("address2: %b", address2);
		$display("address3: %b", address3);

		$display("read_data1: %b", read_data1);
		$display("read_data2: %b", read_data2);
				
		@(posedge clk);
	end
endmodule
