module mux(input [1:0]in1,input [1:0]in2,input sel,output [1:0] y);
assign out = sel ? in1 : in0;
endmodule
