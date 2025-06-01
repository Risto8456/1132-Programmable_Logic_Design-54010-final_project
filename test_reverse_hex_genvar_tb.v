`timescale 1ns / 1ps

module test_reverse_hex_genvar_tb;
    parameter SIZE = 16; // 資料量，預設 4 個 hex，16 bits

	// Inputs
	reg [0:SIZE-1] cin;

	// Outputs
	wire [0:SIZE-1] cout;

	// Instantiate the Unit Under Test (UUT)
	test_reverse_hex_genvar #(.SIZE(SIZE)) uut (
		.cin(cin), 
		.cout(cout)
	);

	task load_data(input [0:SIZE-1] num);
		begin
			cin = num;  #100
			cin = {SIZE{1'b0}}; 
		end
	endtask

	initial begin
	    load_data(16'habcd);
		#100
	    load_data(16'hacef);
	end
      
endmodule

