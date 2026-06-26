module downcounter(clk,preset,count);
input clk,preset;
output reg [3:0] count;
always @(posedge clk or posedge preset)begin 
	if(preset)
		count<=4'b1111;
	else
		count<=count-1;
end
endmodule
