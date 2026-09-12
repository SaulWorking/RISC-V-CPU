// `include "uvm_macros.svh"
// import uvm_pkg::*;
`timescale 1s/1ms

`include "../../src/memory.sv"

module tb_memory();

    bit clk; // clock declaration
    bit rst_n;  // signal declaration	

    logic [31:0] address; // final address
    logic [31:0] write_data; // write data
    logic write_enable; // write enable
    logic [31:0] read_data; // read data

/*verilator lint_off BLKSEQ*/
    always #1 clk = ~clk;

    //rst_n gen
    initial begin 
        rst_n = 1'b0;
        address = 32'b0;
        write_data = 32'b0;
        write_enable = 1'b0;
        
        @(posedge clk);
        rst_n = 1'b1;
        @(posedge clk);
    end 

    memory DUT(
    .clk(clk),
    .address(address),
    .write_data(write_data),
    .write_enable(write_enable),
    .rst_n(rst_n),
    .read_data(read_data)
    );

    const int sizeByte = 4;
    logic [31:0] test_data [3:0] = '{32'hDEADBEEF, 32'hCAFECAFE, 32'h12345678, 32'h67676767};


    initial begin : main

        $display("     .---------.     ");
        $display("    /   _____   \\   ");
        $display("   |   /     \\  |   ");
        $display("   |  |  (o)  |  |   ");
        $display("   |   \\_____/  |   ");
        $display("   |             |   ");
        $display("   |   ___   ___ |   ");
        $display("   |  |   | |   ||   ");
        $display("   `__`   `_`   `_`  ");
        $display("");
        $display("    SUSPECTED...     ");

        @(posedge rst_n);
        @(posedge clk);

        if(read_data == 32'b0) begin
            $display("START, SUCCESS");        
        end else begin
            $display("START, FAIL: read_data = %b", read_data);
            disable main;
        end


        for(int i = 0; i<sizeByte; i++) begin        
            @(posedge clk);
            address    = 32'(i*sizeByte);
            write_data      = test_data[i];
            write_enable = 1;

            @(posedge clk);

            write_enable = 1'b0;

            @(posedge clk);

            $display("read_data: %h", read_data);

            if(read_data == test_data[i])
                $display("WRITE/READ SUCCESS");
            else
                $display("WRITE/READ FAIL: read_data = %h", read_data);

        end


    
            write_enable = 1;

	// write to memory with bounds size
        for(int i = 0; i<sizeByte; i++) begin        
            address = 32'(i*sizeByte);
            write_data = i + 100;

            $display("WRITING %d to %b!",write_data, address);

            @(posedge clk);
        end

            write_enable = 0;

	// reading test
        for(int i = 0; i<sizeByte; i++) begin        
            address = 32'(i*sizeByte);

            @(posedge clk);

            if(read_data == i + 100) begin
                $display("READ/WRITE SUCESSS: %d", read_data);
            end else begin
                $display("READ/WRITE FAIL: %d", read_data);
            end

        end

	// intentional write failure
	write_enable = 1;

	address = 32'(13);
	write_data = 167;


        $display("WRITING %d to %b!",write_data, address);
	@(posedge clk);

    	if(read_data == 167) begin
		$display("READ SUCESSS: %d", read_data);
    	end else begin
		$display("READ FAIL: %d", read_data);
    	end

		
    end

endmodule
