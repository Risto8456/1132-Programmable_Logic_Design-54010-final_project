module test_reverse_hex(cin, cout);
    parameter SIZE = 16;                // 資料量，預設 4 個 hex，16 bits

    input  [0:SIZE-1] cin;              // 輸入一維資料
    reg    [0:3]      hex [0:SIZE/4-1]; // hex 資料暫存
    output reg [0:SIZE-1] cout;         // 反向資料輸出
    integer i, j;
    
    always @(*) begin
        for(i = 0; i < SIZE/4; i = i + 1) begin
            for(j = 0; j < 4; j = j + 1) begin
                hex[i][j] = cin[SIZE-(i+1)*4+j];
            end
            cout = {cout, hex[i]};
        end
    end
endmodule
