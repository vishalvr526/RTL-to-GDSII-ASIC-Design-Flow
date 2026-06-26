module meta_tb;
reg clk,async_input;
wire y;
meta dut(.clk(clk),.async_input(async_input),.y(y));
always #5 clk<=~clk;initial begin
	$dumpfile("meta_dump.vcd");
	$dumpvars();
	#10 async_input=1;
	#5 async_input=0;
	#8 async_input=1;
	#9 async_input=0;
	#50 $finish;
end
endmodule
