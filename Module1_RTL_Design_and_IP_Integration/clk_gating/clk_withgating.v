module clk_withgating(
	input clk,
	input rst_n,
	input d,
	input enable,
	output reg q);
wire gated_clk;
assign gated_clk=enable & clk;
always @(posedge gated_clk)begin
	if(rst_n)
		q<=0;
	else
		q<=d;
end
endmodule

