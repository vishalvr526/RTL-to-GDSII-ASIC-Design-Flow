module alu(a,b,sel,result);
input [3:0] a,b;
input sel;
output reg [3:0] result;
always@(*)begin
	case(sel)
		1'b0:result=a+b;
		1'b1:result=a-b;
		default:;
	endcase
end
endmodule
