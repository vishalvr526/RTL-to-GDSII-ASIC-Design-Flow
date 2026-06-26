module upcounter(clk,preset,count);
input clk,preset;
output reg [3:0] count;
always @(posedge clk or posedge preset)begin
	if(preset)
		count<=4'b0000;
	else
		count<=1+count;
end
endmodule
