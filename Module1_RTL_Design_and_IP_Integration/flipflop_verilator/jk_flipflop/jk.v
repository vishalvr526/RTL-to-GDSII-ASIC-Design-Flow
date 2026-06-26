module jk(j,k,clk,preset,q,qb);
input j,k,clk;
input preset;
output reg q;
output qb;
assign qb=~q;
always @(posedge clk or posedge preset)begin
	if(preset)
		q<=1'b1;
	else begin
		case({j,k})
			2'b00:q<=q;
			2'b01:q<=1'b0;
			2'b10:q<=1'b1;
			2'b11:q<=qb;
		endcase
	end
end
endmodule


