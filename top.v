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
module top(clk, rst_n, in_valid, in_num, in_time, num1, clk1, num2, clk2, num3, clk3, 
			qdbg, 
			fifo_re, ld1, ld2, ld3, busy, fifo_full, fifo_emp, fifo_num, fifo_tim, 
			dn1, dn2, dn3, dt1, dt2, dt3); // debug
    //==================== 時脈 / 重設 =========================
    input  clk;                   // 20 ns 週期 (50 MHz)
    input  rst_n;                 // 同步低有效

    //==================== 來源輸入 ============================
    input         in_valid;       // =1 時 in_num / in_time 有效
    input  [3:0]  in_num;         // 客人編號 (0 為空)
    input  [3:0]  in_time;        // 服務時間 (1~7)

    //==================== 櫃檯狀態輸出 ========================
    output [3:0]  num1;           // 櫃檯1 現正服務客人
    output [3:0]  clk1;           // 櫃檯1 剩餘時間
    output [3:0]  num2;
    output [3:0]  clk2;
    output [3:0]  num3;
    output [3:0]  clk3;

    //==================== FIFO 佇列除錯用 ====================
	// 除錯觀察用
    output [23:0] qdbg;

	//--------------------------------------------------------------
	//  內部線路宣告
	//--------------------------------------------------------------
	output        fifo_re;              // dispatcher 對 FIFO 的讀脈衝
	output        ld1, ld2, ld3;        // dispatcher -> counter 的載入
	output [2:0]  busy;                 // counters 忙碌旗標
	output        fifo_full, fifo_emp;  // FIFO 滿 / 空
	output [3:0]  fifo_num;             // queue 輸出編號
	output [3:0]  fifo_tim;             // queue 輸出時間
	output [3:0]  dn1, dn2, dn3;        // 發送至 counter 的編號
	output [3:0]  dt1, dt2, dt3;        // 發送至 counter 的時間

	//--------------------------------------------------------------
	//  模組例化
	//--------------------------------------------------------------
	//  1. 佇列 FIFO ---------------------------------------------
	// in_valid = 1，上層總是嘗試寫入，queue 內部會判斷 full
	// 深度固定為 3 (可參數化)
	queue #(3) u_queue (
		clk, rst_n, in_valid, in_num, in_time, 
		fifo_re, fifo_num, fifo_tim, fifo_full, fifo_emp, 
		qdbg); // debug

	//  2. 調度器 Dispatcher -------------------------------------
	// busy = {b3,b2,b1}
	dispatcher u_disp (
		clk, rst_n, fifo_emp, busy, fifo_num, fifo_tim, fifo_re, 
		ld1, ld2, ld3, dn1, dt1, dn2, dt2, dn3, dt3);

	//  3. 三個櫃檯 Counter --------------------------------------
	//      counter#1
	counter u_c1 (clk, rst_n, ld1, dn1, dt1, busy[0], num1, clk1);
	//      counter#2
	counter u_c2 (clk, rst_n, ld2, dn2, dt2, busy[1], num2, clk2);
	//      counter#3
	counter u_c3 (clk, rst_n, ld3, dn3, dt3, busy[2], num3, clk3);
endmodule