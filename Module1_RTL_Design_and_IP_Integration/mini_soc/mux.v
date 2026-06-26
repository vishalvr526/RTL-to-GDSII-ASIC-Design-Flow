module mux(
	input [1:0] in1,
	input [1:0] in2,
	input sel,
	output [1:0] y);
assign y=sel?in1:in2;
endmodule
