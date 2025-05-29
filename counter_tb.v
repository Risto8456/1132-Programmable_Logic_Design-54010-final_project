`timescale 1ns/1ps
module counter_tb;
// ==== DUT 連接埠 ====
reg  clk, rst_n;
reg  ld;
reg  [3:0] dn;
reg  [3:0] dt;

wire busy;
wire [3:0] num;
wire [3:0] rem;

// ==== DUT 例化 ====
counter dut (
    .clk(clk), .rst_n(rst_n),
    .ld(ld), .dn(dn), .dt(dt),
    .busy(busy), .num(num), .rem(rem)
);

// ==== Clock ====
always #10 clk = ~clk;

// ==== Reset ====
initial begin
    clk = 0; rst_n = 0;
    ld = 0; dn = 0; dt = 0;
    #35 rst_n = 1;
end

// ==== Stimulus ====
initial begin
    @(posedge rst_n);

    // 載入第一位客人 (3 拍)
    load_cust(4'd1,4'd3);
    // 等待櫃檯釋放
    wait(!busy);

    // 載入第二位客人 (6 拍)
    load_cust(4'd2,4'd6);
    wait(!busy);

    #100 $finish;
end

task load_cust(
    input [3:0] num, input [3:0] tim
);
begin
    @(negedge clk);
    ld = 1; dn = num; dt = tim;
    @(negedge clk);
    ld = 0; dn = 0; dt = 0;
end
endtask

// ==== VCD ====
initial begin
    $dumpfile("counter_tb.vcd");
    $dumpvars(0, counter_tb);
end
endmodule
