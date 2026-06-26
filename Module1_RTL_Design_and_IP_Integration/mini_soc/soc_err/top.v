module top(clk,rst,in1,in2,alu_out,tx_en,tx_done,sel);
input clk,rst,tx_en,sel;
input [3:0] in1,in2;
output [3:0] alu_out;
output tx_done;
wire [3:0] result;
alu uut(.a(in1),.b(in2),.sel(sel),.result(result));
uart dut(.clk(clk),.rst(rst),.tx_en(tx_en),.tx_data({4'b0000,result}),.tx_done(tx_done));
assign alu_out=result;
endmodule
	
