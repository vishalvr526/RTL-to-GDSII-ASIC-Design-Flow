module uart(
	input clk,input rst,input tx_en,input [7:0] tx_data,output reg tx_done);
always @(posedge clk or negedge rst)begin
	if(!rst)
		tx_done<=0;
	else
		if(tx_en)
			tx_done<=1;
		else
			tx_done<=0;
	end
endmodule




