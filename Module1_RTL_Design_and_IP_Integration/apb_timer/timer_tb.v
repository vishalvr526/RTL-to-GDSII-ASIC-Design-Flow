`timescale 1ns/1ps
module timer_tb;
reg clk,rst,start;
reg [7:0] load_val;
wire done;
timer #(.width(8)) uut(.clk(clk),.rst(rst),.start(start),.load_val(load_val),.done(done));
always #5 clk<=~clk;
initial begin
	$dumpfile("timer_dump.vcd");
	$dumpvars();
	#10 rst=0;
	#5 load_val=8'd5;
	start=1;
	#10 start=0;
	#100
	#5 load_val=8'd3;
	start=1;
	#10 start=0;
	#50 $finish;
end
endmodule

