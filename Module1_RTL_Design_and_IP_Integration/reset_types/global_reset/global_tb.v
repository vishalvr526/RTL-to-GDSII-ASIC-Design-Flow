module global_tb;
reg clk,gb_rst,d1=1,d2=1;
wire q1,q2;
global dut(.clk(clk),.gb_rst(gb_rst),.d1(d1),.d2(d2),.q1(q1),.q2(q2));
always #5 clk<=~clk;
initial begin
	$dumpfile("global_dump.vcd");
	$dumpvars();
	#20;gb_rst=1;
	#30;gb_rst=0;
	#20 $finish;
end
endmodule

