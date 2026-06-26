module jk_tb;
reg clk,j,k,preset;
wire q,qb;
jk dut(.clk(clk),.preset(preset),.j(j),.k(k),.q(q),.qb(qb));	
always #5 clk<=~clk;
initial begin
	$monitor("time=%0t|preset=%b|j=%b|k=%b|q=%b|qb=%b",$time,preset,j,k,q,qb);
end
initial begin
	clk=0;
	preset=1;
	j=0;k=0;#7;
	preset=0;
	j=0;k=0;#10;
	j=0;k=1;#10;
	j=1;k=0;#10;
	j=1;k=1;
	#3 preset=1;
	#4 preset=0;
	#20;
	$finish;
end
initial begin 
	$dumpfile("jk_dump.vcd");
	$dumpvars();
end
endmodule



