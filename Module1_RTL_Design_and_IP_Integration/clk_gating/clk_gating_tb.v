module clk_gating_tb;
reg clk=0,rst_n=0,d=0,enable=0;
wire q_nogate,q_gate;
clk_gating dut(.clk(clk),.rst_n(rst_n),.d(d),.q(q_nogate));
clk_withgating uut(.clk(clk),.rst_n(rst_n),.d(d),.q(q_gate),.enable(enable));
always #5 clk<=~clk;
initial begin
	$dumpfile("clk_gating_dump.vcd");
	$dumpvars();
	rst_n=1; d=0; enable=0; #10
	rst_n=0; d=1;#20
	enable=1;
	#30;
	$finish;
end
endmodule

