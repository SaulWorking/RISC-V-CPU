module memory #(
    parameter WORDS = 64
) (
    // little endian notation
    input logic clk, // main clock of cpu
    input logic [31:0] address, // data final destination
    input logic [31:0] write_data, // start data
    input logic write_enable, // write check
    input logic rst_n, // reset check

    output logic [31:0] read_data // end data
);

/*
* memory is byte addressed for our particular cases
*   - each memory address is 8 bits of data
* currently, there is no solution for mis-aligned write + read
*/


// WORD is 4 bytes word

reg [31:0] mem [0:WORDS-1]; // array of WORDS, of size WORD 


//sequential logic, use non-blocking <=
always @(posedge clk) begin

    if (rst_n == 1'b0) begin

        for(int i = 0; i < WORDS; i++) begin
            mem[i] <= 32'b0;
        end

    end
    else if (write_enable) begin

        // align address to word boundary
        // last 2 bits of word means it is divisible by 4

        if (address[1:0] == 2'b00) begin
            //we index memory by [31:2]
            mem[address[31:2]] <= write_data;
        end
    end
end


//mem[address[31:2]] added to sensitivity list

//@ t=0, read_data = x

always_comb begin
    read_data = mem[address[31:2]];
end

endmodule
