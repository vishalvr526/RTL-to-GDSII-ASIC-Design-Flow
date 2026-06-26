module mux_df(in,sel,out);
input [3:0] in;
input [1:0] sel;
output out;
assign out=(sel[0] & sel[1] & in[0] | sel[0] & ~sel[1] & in[1] | ~sel[0] & sel[1] & in[2] | ~sel[0] & ~sel[1] & in[3]);
endmodule
