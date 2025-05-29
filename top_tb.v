`timescale 1ns / 1ps
module top_tb;

	// Inputs
	reg clk;
	reg rst_n;
	reg in_valid;
	reg [3:0] in_num;
	reg [3:0] in_time;

	// Outputs
	wire [3:0] num1;
	wire [3:0] clk1;
	wire [3:0] num2;
	wire [3:0] clk2;
	wire [3:0] num3;
	wire [3:0] clk3;
	wire [23:0] qdbg;
	
	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.in_valid(in_valid), 
		.in_num(in_num), 
		.in_time(in_time), 
		.num1(num1), 
		.clk1(clk1), 
		.num2(num2), 
		.clk2(clk2), 
		.num3(num3), 
		.clk3(clk3), 
		.qdbg(qdbg)
	);

//==== Clock : 20 ns 週期 ======================================
always #10 clk = ~clk;

//==== Reset ===================================================
initial begin
    clk = 0;
    rst_n = 0;
    in_valid = 0;
    in_num = 0;
    in_time = 0;
    #35 rst_n = 1;           // 釋放重設
end

//==== 送客人 Task =============================================
task send_cust;
    input [7:0] num;
    input [2:0] tim;
begin
    @(negedge clk);
    in_valid = 1;
    in_num   = num;
    in_time  = tim;
    @(negedge clk);
    in_valid = 0;
    in_num   = 0;
    in_time  = 0;
end
endtask

//==== Stimulus ================================================
initial begin
    @(posedge rst_n);        // 等待重設結束
    #20;

    // ── 先填滿三個櫃台 ───────────────────────────────
    send_cust(4'd1, 4'd3);
    send_cust(4'd2, 4'd2);
    send_cust(4'd3, 4'd4);

    // ── 再塞進 FIFO（深度 3）────────────────────────
    send_cust(4'd4, 4'd1);
    send_cust(4'd5, 4'd5);
    send_cust(4'd6, 4'd2);

    // ── 佇列已滿，以下客人應被丟棄 ──────────────────
    send_cust(4'd7, 4'd3);

    // ── 等待部分櫃台釋放，再送新客人 ────────────────
    #500;
    send_cust(4'd8, 4'd2);
    send_cust(4'd9, 4'd6);

    // ── 結束模擬 ───────────────────────────────────
    #1000 $finish;
end

//==== 波形輸出 (VCD) ==========================================
initial begin
    $dumpfile("top_tb.vcd");
    $dumpvars(0, top_tb);
end

endmodule
