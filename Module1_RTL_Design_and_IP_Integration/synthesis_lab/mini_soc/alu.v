module alu(input [1:0] a,input [1:0] b,sel,output reg [1:0]result);
always @(*) begin
	case(sel)
		1'b0:result=a+b;
		1'b1:result=a-b;
		default:;
	endcase
end
endmodule
