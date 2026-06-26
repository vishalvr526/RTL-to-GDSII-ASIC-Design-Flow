module ds_tb;
reg clk1,clk2,rst1,rst2,d1=1,d2=1;
wire q1,q2;
ds dut(.clk1(clk1),.clk2(clk2),.rst1(rst1),.rst2(rst2),.d1(d1),.d2(d2),.q1(q1),.q2(q2));
always #5 clk1<=~clk1;
always #7 clk2<=~clk2;
initial begin
	$dumpfile("ds_dump.vcd");
	$dumpvars();

	#10 rst1=1;#10;rst1=0;
	#10 rst2=0;#10;rst2=1;#50;
	$finish;
end
endmodule


