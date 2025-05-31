module test_output_2darray(cin, cout);
    parameter ROWS = 4;			                // 列，預設  4 bits
    parameter COLS = 12;			            // 行，預設 12 bits

    input  [0:COLS-1]      cin;                 // 一維資料
	reg    [0:COLS-1]      data [0:ROWS-1];     // 二維資料暫存
    output [0:ROWS*COLS-1] cout;                // 二維資料輸出
    
	integer i, j;

	always @(*) begin
        for(i = 0; i < ROWS; i = i + 1) begin
            for(j = 0; j < COLS; j = j + 1) begin
                data[i][j] = cin[(COLS+i+j)%COLS];
            end
        end
    end

    assign cout = {data[0], data[1], data[2], data[3]};
endmodule
