`timescale 1ns/1ps
module queue_tb;
// ==== DUT 連接埠 ====
reg  clk, rst_n;
reg  we,  re;
reg  [3:0] dn;
reg  [3:0] dt;
wire [3:0] qn;
wire [3:0] qt;
wire full, empty;
wire [23:0] qdbg;

// ==== DUT 例化 (DEPTH=3) ====
queue #(.DEPTH(3), .PTR_W(2)) dut (
    .clk(clk), .rst_n(rst_n),
    .we(we), .dn(dn), .dt(dt),
    .re(re),
    .qn(qn), .qt(qt),
    .full(full), .empty(empty),
	.qdbg(qdbg)
);

// ==== 20 ns Clock ====
always #10 clk = ~clk;

// ==== Reset ====
initial begin
    clk = 0; rst_n = 0;
    we = 0; re = 0; dn = 0; dt = 0;
    #35 rst_n = 1;   // 釋放重設
end

// ==== 寫入 / 讀出 Tasks ====
task write(input [3:0] num, input [3:0] tim);
begin
    @(negedge clk);
    we = 1; dn = num; dt = tim;
    @(negedge clk);
    we = 0; dn = 0;   dt = 0;
end
endtask

task read_one;
begin
    @(negedge clk);
    re = 1;
    @(negedge clk);
    re = 0;
end
endtask

// ==== Stimulus ====
initial begin
    @(posedge rst_n);  // 等待 reset 結束
    // 依序寫入 4 筆 (第 4 筆應因 full 而被忽略)
    write(4'd1,4'd3);
    write(4'd2,4'd2);
    write(4'd3,4'd1);
    write(4'd4,4'd4);  // overflow 測試
    // 依序讀出 3 筆
    #40 read_one;
    #40 read_one;
    #40 read_one;
    // 嘗試對空佇列讀取
    #40 read_one;
    write(4'd5,4'd5);
    #100 $finish;
end

// ==== VCD 波形 ====
initial begin
    $dumpfile("queue_tb.vcd");
    $dumpvars(0, queue_tb);
end
endmodule
