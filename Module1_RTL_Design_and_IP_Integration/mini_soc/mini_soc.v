module mini_soc(
	input clk,
	input rst,
	input mux_sel,
	input alu_sel,
	output [1:0] soc_output);
wire [3:0] count;
wire [1:0] alu_out;

counter dut(.clk(clk),.rst(rst),.count(count));
alu uut(.a(count[3:2]),.b(count[1:0]),.sel(alu_sel),.result(alu_out));
mux sut(.in1(count[3:2]),.in2(alu_out),.sel(mux_sel),.y(soc_output));
endmodule

