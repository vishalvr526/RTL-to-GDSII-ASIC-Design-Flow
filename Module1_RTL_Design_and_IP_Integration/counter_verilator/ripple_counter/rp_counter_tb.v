module rp_counter_tb;
reg clk,reset;
wire [3:0] q;
rp_counter dut(.clk(clk),.reset(reset),.q(q));
always #5 clk<=~clk;
initial begin
	clk=0;
	reset=1;
	$display("time | q | reset");
        $monitor("time=%t | q=%b | reset=%b",$time,q,reset);
	#10;reset=0;#150;
	$finish;
end
initial begin
	$dumpfile("rp_counter_dum.vcd");
	$dumpvars();
end
endmodule
        

