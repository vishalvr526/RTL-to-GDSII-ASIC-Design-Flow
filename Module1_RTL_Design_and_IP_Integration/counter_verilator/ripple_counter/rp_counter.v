module rp_counter(clk,reset,q);
input clk,reset;
output [3:0] q;
wire q_out0,q_out1,q_out2,q_out3;
assign q={q_out3,q_out2,q_out1,q_out0};
tff tff0(.q(q_out0),.clk(clk),.reset(reset));
tff tff1(.q(q_out1),.clk(~q_out0),.reset(reset));
tff tff2(.q(q_out2),.clk(~q_out1),.reset(reset));
tff tff3(.q(q_out3),.clk(~q_out2),.reset(reset));
endmodule

