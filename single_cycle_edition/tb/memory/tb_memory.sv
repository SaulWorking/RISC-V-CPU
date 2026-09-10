// `include "uvm_macros.svh"
// import uvm_pkg::*;
`timescale 1s/1ms

`include "../../src/memory.sv"

module tb_memory();

    bit clk; // clock declaration
    bit reset;  // signal declaration	

    logic [31:0] addy; // final address
    logic [31:0] wd; // write data
    logic w_enable; // write enable
/* verilator lint_off UNUSEDSIGNAL */
    logic [31:0] rd; // read data


    always #1 clk =~ clk;

    //reset gen
    initial begin 
        reset = 1'b0;
        addy = 32'b0;
        wd = 32'b0;
        w_enable = 1'b0;
        
        @(posedge clk);
        reset = 1'b1;
        @(posedge clk);
    end 

    memory DUT(
    .clk(clk),
    .address(addy),
    .write_data(wd),
    .write_enable(w_enable),
    .rst_n(reset),
    .read_data(rd)
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

        @(posedge reset);
        @(posedge clk);

        if(rd == 32'b0) begin
            $display("START, SUCCESS");        
        end else begin
            $display("START, FAIL: rd = %b", rd);
            disable main;
        end


        for(int i = 0; i<sizeByte; i++) begin        
            @(posedge clk);
            addy    = 32'(i*sizeByte);
            wd      = test_data[i];
            w_enable = 1;

            @(posedge clk);
            w_enable = 1'b0;

            @(posedge clk);
            $display("rd: %h", rd);

            if(rd == test_data[i])
                $display("WRITE/READ SUCCESS");
            else
                $display("WRITE/READ FAIL: rd = %h", rd);
        end


    
        for(int i = 0; i<sizeByte; i++) begin        
            addy    = 32'(i*sizeByte);
            wd      = i + 100;
            w_enable = 1;
            $display("WRITING %d to %b!",wd, addy);
            @(posedge clk);
        end

            w_enable = 0;

        for(int i = 0; i<sizeByte; i++) begin        
            addy    = 32'(i*sizeByte);
            @(posedge clk);
            if(rd == i + 100) begin
                $display("READ/WRITE SUCESSS: %d", rd);
            end else begin
                $display("READ/WRITE FAIL: %d", rd);
            end
        end

    end

endmodule
