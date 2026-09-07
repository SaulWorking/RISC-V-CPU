
`timescale 1ns / 1ps

`include "../../src/memory.sv"
`include "uvm_macros.svh"
import uvm_pkg::*;

module tbench_top;


    bit clk; // clock declaration
    bit reset;  // signal declaration	

    logic [31:0] addy; // final address
    logic [31:0] wd; // write data
    logic w_enable; //write enable
    logic [31:0] rd; //write data



    function check_rst();
        if(rd != 32'b0) begin
            return -1;
        end

        return 1;
    endfunction



    // clock gen
    always #5 clk = ~clk;


    //reset gen
    initial begin 

        reset = 1'b0;
        addy = 32'b0;
        wd = 32'b0;
        w_enable = 1'b0;


        #1 reset = 1;
    end 

    instruction_memory DUT(
    .clk(clk),
    .address(addy),
    .write_data(wd),
    .write_enable(w_enable),
    .rst_n(reset),
    .read_data(rd)
    );

    initial begin
        if(check_rst() == -1) begin
            $display("failure!");
        end
    end





endmodule
