module test_reverse_hex_genvar(cin, cout);
    parameter SIZE = 16;    // 資料量，預設 4 個 hex，16 bits

    input  [0:SIZE-1] cin;  // 輸入一維資料
    output [0:SIZE-1] cout; // 反向資料輸出
    genvar i;
    
	generate
        for(i = 0; i < SIZE/4; i = i + 1) begin : g_reverse
            assign cout[i*4 : i*4+3] = cin[SIZE-(i+1)*4 : SIZE-(i+1)*4+3];
        end
	endgenerate
endmodule
