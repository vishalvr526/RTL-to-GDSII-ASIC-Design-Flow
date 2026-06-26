module mini_soc_tb;
reg clk,rst,alu_sel,mux_sel;
wire [1:0] soc_output;
mini_soc but(.clk(clk),.rst(rst),.alu_sel(alu_sel),.mux_sel(mux_sel),.soc_output(soc_output));
always #5 clk<=~clk;
initial begin
	$dumpfile("soc_dump.vcd");
	$dumpvars();

	#10 rst=0;
	#20 alu_sel=1;
	#30 mux_sel=0;
	#10 alu_sel=1;
	#20 mux_sel=0;
	#50 $finish;
end
endmodule

