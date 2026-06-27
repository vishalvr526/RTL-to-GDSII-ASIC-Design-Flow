module sync_stage(input wire clk,input wire async_in, output reg sync_out);
reg sync_ff1;
always @(posedge clk)begin
	sync_ff1<=async_in;//stage 1
	sync_out<=sync_ff1;//stage 2
end
endmodule
