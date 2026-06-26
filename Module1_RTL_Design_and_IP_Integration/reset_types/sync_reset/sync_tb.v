module sync_tb;
reg clk,rst,d;
wire q;
sync dut(.clk(clk),.rst(rst),.d(d),.q(q));
always #5 clk<=~clk;
initial begin
	$dumpfile("sync_dump.vcd");
	$dumpvars();
	rst=0; d=1;#20;
	rst=1;d=1;#30;rst=0;#20;
	$finish;
end
endmodule
