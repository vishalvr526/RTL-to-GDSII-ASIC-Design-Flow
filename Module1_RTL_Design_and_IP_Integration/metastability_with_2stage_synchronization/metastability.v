module metastability(input clk,input async_input,output reg y);
reg stage;
always @(posedge clk) begin
	stage<=async_input;
	y<=stage;
end
endmodule

