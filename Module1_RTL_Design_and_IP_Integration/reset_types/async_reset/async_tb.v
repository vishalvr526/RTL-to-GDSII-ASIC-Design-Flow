module async_tb;
reg clk,rst_n,d;
wire q;
async dut(.clk(clk),.rst_n(rst_n),.d(d),.q(q));
always #5 clk<=~clk;
initial begin
	$dumpfile("async_dump.vcd");
	$dumpvars();
	rst_n=0; d=0;#20;
	rst_n=1;d=1;#30;rst_n=0;#20;
	$finish;
end
endmodule
