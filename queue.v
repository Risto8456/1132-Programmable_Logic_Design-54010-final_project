//--------------------------------------------------------------
//  queue.v  -  簡易參數化 FIFO（深度 DEPTH，預設 3）
//  - 用於暫存尚未被派發到櫃檯的客人資料
//  - 每筆資料包含 {客人編號 4-bit, 服務時間 4-bit}
//--------------------------------------------------------------
module queue(clk, rst_n, we, dn, dt, re, qn, qt, full, empty, 
			qdbg); // debug
    parameter DEPTH = 3;					// 佇列深度
    parameter PTR_W = 2;          			// PTR_W = (int)(log2(DEPTH))+1
	// DEPTH = 3 時，PTR_W 固定 2 bit

    input  clk;                          	// 系統時脈
    input  rst_n;                        	// 同步低有效重設

    // 寫入端 (enqueue)
    input         we;                       // we=1 且 ~full 時寫入
    input  [3:0]  dn;                       // data-num  : 客人編號
    input  [3:0]  dt;                       // data-time : 服務時間
    
	// 讀出端 (dequeue)
    input         re;                       // re=1 且 ~empty 時讀出
    output [3:0]  qn;                       // queue-num  : 佇列首端客人編號
    output [3:0]  qt;                       // queue-time : 佇列首端服務時間
    
	// 狀態旗標
    output        full;                     // 佇列已滿
    output        empty;                    // 佇列為空
    
	// 除錯觀察用
    output [23:0] qdbg;

	//--------------------------------------------------------------
	//  內部儲存結構
	//--------------------------------------------------------------
	reg [3:0] nm [0:DEPTH-1];   // 編號暫存
	reg [3:0] tm [0:DEPTH-1];   // 時間暫存

	reg [PTR_W-1:0] hd;   // head 讀指標
	reg [PTR_W-1:0] tl;   // tail 寫指標
	reg [PTR_W-1:0] ct;   // 佇列目前元素數 (0-DEPTH)

	//--------------------------------------------------------------
	//  即時輸出
	//--------------------------------------------------------------
	assign qn    = nm[hd];               // 讀指標指向的資料
	assign qt    = tm[hd];
	assign full  = (ct == DEPTH);        // 已填滿
	assign empty = (ct == 0);            // 沒有資料

	// 串接前三筆資料供波形觀察：{num0,time0,num1,time1,num2,time2}

	assign qdbg = {nm[0],tm[0],nm[1],tm[1],nm[2],tm[2]};
	
	// 給 reset 時的 for 迴圈用
	integer i;

	//--------------------------------------------------------------
	//  寫入 / 讀出 控制邏輯
	//--------------------------------------------------------------
	always @(posedge clk or negedge rst_n) begin
		if (!rst_n) begin
			hd <= 0;
			tl <= 0;
			ct <= 0;
			for (i = 0; i < DEPTH; i = i + 1) begin
				nm[i] <= 4'd0;      // 編號清 0
				tm[i] <= 4'd0;      // 時間清 0
        	end
		end
		else begin
			// 寫入動作 ------------------------------------------------
			if (we && !full) begin
				nm[tl] <= dn;
				tm[tl] <= dt;
				tl <= (tl == DEPTH-1) ? 0 : tl + 1;   // 環形遞增
			end

			// 讀出動作 ------------------------------------------------
			if (re && !empty) begin
				hd <= (hd == DEPTH-1) ? 0 : hd + 1;   // 環形遞增
			end

			// 元素計數器 --------------------------------------------
			case ({we && !full, re && !empty})
				2'b10: ct <= ct + 1;   // 只有寫入
				2'b01: ct <= ct - 1;   // 只有讀出
				default: ;            // 其餘情況 ct 不變
			endcase
		end
	end
endmodule
