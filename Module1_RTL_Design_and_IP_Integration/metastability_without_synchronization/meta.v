module meta(input clk,input async_input,output reg y);
always @(posedge clk) begin
	y<=async_input;
end
endmodule

