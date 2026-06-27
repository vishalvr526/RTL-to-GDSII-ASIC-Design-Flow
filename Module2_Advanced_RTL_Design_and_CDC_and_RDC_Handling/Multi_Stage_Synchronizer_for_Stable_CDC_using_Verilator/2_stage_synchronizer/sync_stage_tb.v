module sync_stage_tb;
reg clk,async_in;
wire sync_out;
sync_stage dut(.clk(clk),.async_in(async_in),.sync_out(sync_out));

always #5 clk<=~clk;
initial begin
	$dumpfile("dump.vcd");
	$dumpvars();
	#5 async_in=1;
	#5 async_in=0;
	#7 async_in=1;
	#50 $finish;
end
endmodule




