module and_tb;
reg a,b;
wire y;
and_gate dut(.a(a),.b(b),.y(y));
initial begin
	$monitor("time=%t a=%0b|b=%0b |y=%b",$time,a,b,y);
	#10;
	a=1'b0;b=1'b0;#10;
        a=1'b0;b=1'b1;#10;
	a=1'b1;b=1'b0;#10;
	a=1'b1;b=1'b1;#10;
	$finish;
end
initial begin
	$dumpfile("and_gate_dump.vcd");
	$dumpvars();
end
endmodule
