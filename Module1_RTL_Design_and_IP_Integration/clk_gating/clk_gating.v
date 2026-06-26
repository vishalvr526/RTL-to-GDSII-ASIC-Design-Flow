module clk_gating(
	input clk,
	input rst_n,
	input d,
	output reg q);
always @(posedge clk ) begin
	if(rst_n)
		q<=1'b0;
	else
		q<=d;
end
endmodule
