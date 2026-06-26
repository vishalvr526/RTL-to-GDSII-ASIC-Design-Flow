module top(
	 input clk,
 input rst,
 input alu_sel,
 input mux_sel,
 output [1:0] soc_out
);
 wire [3:0] count;
 wire [1:0] alu_out;
 
 counter u_counter (.clk(clk), .rst(rst),.count(count));
 alu u_alu (.a(count[3:2]),.b(count[1:0]),.sel(alu_sel),
.result(alu_out));
 mux u_mux (.in1(count[3:2]), .in2(alu_out),.sel(mux_sel),
.y(soc_out));
endmodule
