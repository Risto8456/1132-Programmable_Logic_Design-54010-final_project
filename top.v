//--------------------------------------------------------------
//  top.v  -  Queue / Dispatcher / Counter 整合測試平台
//           (針對 ISE Design Suite 14.7 產生)
//--------------------------------------------------------------
//  系統概要：
//  -----------------------------------------------------------
//  1. 來源：外部會以 in_valid=1 送入 {客人編號 in_num[3:0], 服務時間 in_time[3:0]}
//  2. 流程：
//      2-1. queue   : 尚無櫃檯可用時，資料先進 FIFO (深度=3)
//      2-2. dispatcher : 偵測空櫃檯，從 queue 取值派發 (固定優先權 櫃檯1->2->3)
//      2-3. counter : 櫃檯內部倒數；完成後自動 idle
//  3. 輸出：
//      num1/clk1 ... num3/clk3   : 各櫃檯現正服務客人編號 / 剩餘倒數
//      queue                     : FIFO 內容除錯觀察 (24-bit)
//--------------------------------------------------------------
module top(clk, rst_n, in_valid, in_num, in_time, 
			// num1, clk1, num2, clk2, num3, clk3, 
			num_bus, clk_bus, 
			qdbg
			// , fifo_re, ld, busy, fifo_full, fifo_emp, fifo_num, fifo_tim, dn, dt // debug
			);
    parameter DT_SZ = 4;		  // 資料大小，預設 4 bits
    parameter DEPTH = 3;		  // queue 佇列深度，預設 3 個客人 (24 bits)
    parameter PTR_W = 2;          // PTR_W = (int)(log2(DEPTH))+1
    parameter CNTER = 3;          // 櫃台數量

    //==================== 時脈 / 重設 =========================
    input  clk;                   // 20 ns 週期 (50 MHz)
    input  rst_n;                 // 同步低有效

    //==================== 來源輸入 ============================
    input               in_valid; // =1 時 in_num / in_time 有效
    input  [DT_SZ-1:0]  in_num;   // 客人編號 (0 為空)
    input  [DT_SZ-1:0]  in_time;  // 服務時間 (1~15)

    //==================== 櫃檯狀態輸出 ========================
	output [CNTER*DT_SZ-1:0] num_bus;   // {numN-1, …, num0}
	output [CNTER*DT_SZ-1:0] clk_bus;   // {clkN-1, …, clk0}
    // output [DT_SZ-1:0]  num1;     // 櫃檯1 現正服務客人
    // output [DT_SZ-1:0]  clk1;     // 櫃檯1 剩餘時間
    // output [DT_SZ-1:0]  num2;
    // output [DT_SZ-1:0]  clk2;
    // output [DT_SZ-1:0]  num3;
    // output [DT_SZ-1:0]  clk3;

    //==================== FIFO 佇列除錯用 ====================
	// 觀察用
    output [DEPTH*2*DT_SZ-1:0] qdbg;

	//--------------------------------------------------------------
	//  內部線路宣告
	//--------------------------------------------------------------
	wire              fifo_re;              // dispatcher 對 FIFO 的讀脈衝
	wire [CNTER-1:0]  ld;                   // dispatcher -> counter 的載入
	wire [CNTER-1:0]  busy;                 // counters 忙碌旗標
	wire        	  fifo_full, fifo_emp;  // FIFO 滿 / 空
	wire [DT_SZ-1:0]  fifo_num;             // queue 輸出編號
	wire [DT_SZ-1:0]  fifo_tim;             // queue 輸出時間
	wire [DT_SZ-1:0]  dn;        	        // 發送至 counter 的編號
	wire [DT_SZ-1:0]  dt;        	        // 發送至 counter 的時間

	//--------------------------------------------------------------
	//  模組例化
	//--------------------------------------------------------------
	//  1. 佇列 FIFO ---------------------------------------------
	// in_valid = 1，上層總是嘗試寫入，queue 內部會判斷 full
	// 深度固定為 3 (可參數化)
	queue #(DT_SZ, DEPTH, PTR_W) u_queue (
		clk, rst_n, in_valid, in_num, in_time, 
		fifo_re, fifo_num, fifo_tim, fifo_full, fifo_emp, qdbg);

	//  2. 調度器 Dispatcher -------------------------------------
	// busy = {b3,b2,b1}
	dispatcher #(DT_SZ, CNTER) u_disp (
		clk, rst_n, fifo_emp, busy, fifo_num, fifo_tim, fifo_re, ld, dn, dt);

	//  3. 多個櫃檯 Counter --------------------------------------
	genvar i;
	generate
		for (i = 0; i < CNTER; i = i + 1) begin : g_counter
			counter #(DT_SZ) u_c (
				clk, rst_n, ld[i], dn, dt, busy[i], 
				num_bus[i*DT_SZ + DT_SZ-1 : i*DT_SZ], 
				clk_bus[i*DT_SZ + DT_SZ-1 : i*DT_SZ]
			);
		end
	endgenerate

	// //      counter#1
	// counter #(DT_SZ) u_c1 (clk, rst_n, ld[0], dn, dt, busy[0], num1, clk1);
	// //      counter#2
	// counter #(DT_SZ) u_c2 (clk, rst_n, ld[1], dn, dt, busy[1], num2, clk2);
	// //      counter#3
	// counter #(DT_SZ) u_c3 (clk, rst_n, ld[2], dn, dt, busy[2], num3, clk3);
endmodule