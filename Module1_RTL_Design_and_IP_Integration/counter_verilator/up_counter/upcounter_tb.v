module upcounter_tb;
reg clk,preset;
wire [3:0] count;
upcounter dut(.clk(clk),.preset(preset),.count(count));
always #5 clk<=~clk;
initial begin
	$monitor("time=%t|preset=%b|count=%b",$time,preset,count);
end
initial begin
	clk=0;
	preset=0;#10;
	preset=1;#5;
	preset=0;#150;
	$finish;
end
initial begin
	$dumpfile("upcounter_dump.vcd");
	$dumpvars();
end
endmodule

