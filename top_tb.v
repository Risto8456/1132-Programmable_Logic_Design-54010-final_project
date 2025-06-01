`timescale 1ns / 1ps
module top_tb;
    parameter DT_SZ = 4;        // 資料位元數 (4 bits)
    parameter DEPTH = 3;        // FIFO 深度 (3 筆資料)
    parameter PTR_W = 2;        // PTR_W = ceil(log2(DEPTH+1))
    parameter CNTER = 3;        // 櫃檯數量

    //==== Inputs ================================================
    reg                     clk;
    reg                     rst_n;
    reg                     in_valid;
    reg  [DT_SZ-1:0]        in_num;
    reg  [DT_SZ-1:0]        in_time;

    //==== Outputs (改為向量) ====================================
    wire [CNTER*DT_SZ-1:0]  num_bus;   // {num2, num1, num0}
    wire [CNTER*DT_SZ-1:0]  clk_bus;   // {clk2, clk1, clk0}
    wire [DEPTH*2*DT_SZ-1:0] qdbg;     // FIFO 除錯觀察

    //==== (Optional) 別名切片，方便觀察，可做擴充 =================
    wire [DT_SZ-1:0] num1 = num_bus[ 1*DT_SZ-1 : 0 ];
    wire [DT_SZ-1:0] clk1 = clk_bus[ 1*DT_SZ-1 : 0 ];
    wire [DT_SZ-1:0] num2 = num_bus[ 2*DT_SZ-1 : 1*DT_SZ ];
    wire [DT_SZ-1:0] clk2 = clk_bus[ 2*DT_SZ-1 : 1*DT_SZ ];
    wire [DT_SZ-1:0] num3 = num_bus[ 3*DT_SZ-1 : 2*DT_SZ ];
    wire [DT_SZ-1:0] clk3 = clk_bus[ 3*DT_SZ-1 : 2*DT_SZ ];
    // wire [DT_SZ-1:0] num4 = num_bus[ 4*DT_SZ-1 : 3*DT_SZ ];
    // wire [DT_SZ-1:0] clk4 = clk_bus[ 4*DT_SZ-1 : 3*DT_SZ ];
	// ...

    //==== Instantiate the Unit Under Test (UUT) =================
    top #(
        .DT_SZ  (DT_SZ),
        .DEPTH  (DEPTH),
        .PTR_W  (PTR_W),
        .CNTER  (CNTER)
    ) uut (
        .clk      (clk),
        .rst_n    (rst_n),
        .in_valid (in_valid),
        .in_num   (in_num),
        .in_time  (in_time),
        .num_bus  (num_bus),
        .clk_bus  (clk_bus),
        .qdbg     (qdbg)
    );

    //==== Clock : 20 ns 週期 ======================================
    always #10 clk = ~clk;

    //==== Reset ===================================================
    initial begin
        clk      = 0;
        rst_n    = 0;
        in_valid = 0;
        in_num   = 0;
        in_time  = 0;
        #25 rst_n = 1;     // 在 t=25ns 釋放 reset
    end

    //==== 送客人 Task =============================================
    task send_cust;
        input [DT_SZ-1:0] num;
        input [DT_SZ-1:0] tim;
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
        @(posedge rst_n);    // 等待 reset 釋放
        #20;

        // ── 先填滿三個櫃檯 ───────────────────────────────
        send_cust(4'd1, 4'd8);
        send_cust(4'd2, 4'd8);
        send_cust(4'd3, 4'd8);

        // ── 再塞進 FIFO（深度 3）────────────────────────
        send_cust(4'd4, 4'd1);
        send_cust(4'd5, 4'd5);
        send_cust(4'd6, 4'd2);

        // ── 佇列已滿，以下客人應被丟棄 ──────────────────
        send_cust(4'd7, 4'd3);

        // ── 等待部分櫃檯釋放，再送新客人 ────────────────
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
