module tb;
 reg clk = 0;
 reg rst = 0;
 reg [3:0] in1, in2;
 reg sel;
 reg tx_en;
 wire tx_done;
 wire [3:0] alu_out;
 always #5 clk <= ~clk;
 top tut (
 .clk(clk),
 .rst(rst),
 .in1(in1),
 .in2(in2),
 .sel(sel),
 .tx_en(tx_en),
 .tx_done(tx_done),
 .alu_out(alu_out)
 );
 initial begin
 $dumpfile("dump.vcd");
 $dumpvars();
 // Apply reset
 #10 rst = 1;
 // Test 1: ADD 4 + 3 = 7, expect UART to transmit 8'b00000111
 in1 = 4; in2 = 3; sel = 0; tx_en = 1;
 #10 tx_en = 0;
 // Test 2: AND 6 - 5 = 1, expect UART to transmit 8'b00000001
 #20 in1 = 6; in2 = 5; sel = 1; tx_en = 1;
 #10 tx_en = 0;
 #40 $finish;
 end
endmodule

 
