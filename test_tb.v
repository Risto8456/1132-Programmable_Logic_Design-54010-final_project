`timescale 1ns / 1ps

module test_tb;

    parameter ROWS = 4;			                // 列，預設  4 bits
    parameter COLS = 12;			            // 行，預設 12 bits

	// Inputs
	reg [0:COLS-1] cin;

	// Outputs
	wire [0:ROWS*COLS-1] cout;

	// Instantiate the Unit Under Test (UUT)
	test_output_2darray #(.ROWS(ROWS), .COLS(COLS)) uut (
		.cin(cin), 
		.cout(cout)
	);

	task load_data(input [0:COLS-1] num);
		begin
			cin = num;  #100
			cin = {COLS{1'b0}}; 
		end
	endtask

	initial begin
	    load_data(12'habc);
		#100
	    load_data(12'hacf);
	end
      
endmodule

