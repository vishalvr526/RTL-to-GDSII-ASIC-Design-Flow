module sync_stage(input wire clk, input wire async_in,output reg sync_out);
reg ff1,ff2;
always@(posedge clk)begin
	ff1<=async_in;
	ff2<=ff1;
	sync_out<=ff2;
end
endmodule
