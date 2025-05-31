`timescale 1ns/1ps
module dispatcher_tb;
parameter DT_SZ = 4;        // 資料大小，預設 4 bits
parameter CNTER = 3;        // 櫃台數量
// ==== DUT 連接埠 ====
reg  clk, rst_n;
reg  empty;
reg  [DT_SZ-1:0] qn;
reg  [DT_SZ-1:0] qt;
reg  [CNTER-1:0] busy;

wire re;
wire [CNTER-1:0] ld;
wire [DT_SZ-1:0] dn;
wire [DT_SZ-1:0] dt;

// ==== DUT 例化 ====
dispatcher #(.DT_SZ(DT_SZ), .CNTER(CNTER)) dut (
    .clk(clk), .rst_n(rst_n),
    .empty(empty), .qn(qn), .qt(qt),
    .busy(busy),
    .re(re),
    .ld(ld),
    .dn(dn),
    .dt(dt)
);

// ==== Clock ====
always #10 clk = ~clk;

// ==== Reset ====
initial begin
    clk = 0; rst_n = 0;
    empty = 1; qn = 0; qt = 0; busy = 3'b111;
    #35 rst_n = 1;
end

// ==== Stimulus ====
initial begin
    @(posedge rst_n);

    // 場景 1：所有櫃檯忙碌 → 不派發
    load_data(4'd10,4'd3,3'b111);

    // 場景 2：櫃檯1 空 → 派到櫃檯1
    load_data(4'd11,4'd2,3'b110);

    // 場景 3：櫃檯2 空 → 派到櫃檯2
    load_data(4'd12,4'd4,3'b101);

    // 場景 4：櫃檯3 空 → 派到櫃檯3
    load_data(4'd13,4'd1,3'b011);

    #100 $finish;
end

// ==== task : 餵一筆資料，並設定 busy 狀態 ====
task load_data(
    input [DT_SZ-1:0] num, 
    input [DT_SZ-1:0] tim, 
    input [CNTER-1:0] busy_state
);
begin
    @(negedge clk);
    empty = 0; qn = num; qt = tim; busy = busy_state;
    @(negedge clk);          // 觀察 re / ld?
    @(negedge clk);          // 將 empty 拉高，模擬 FIFO 已被讀走
    empty = 1;
end
endtask

// ==== VCD ====
initial begin
    $dumpfile("dispatcher_tb.vcd");
    $dumpvars(0, dispatcher_tb);
end
endmodule
