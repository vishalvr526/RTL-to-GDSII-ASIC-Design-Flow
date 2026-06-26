`timescale 1ns/1ps
module mux4x1_gatelevel_tb1;
reg [3:0] in;
reg [1:0] sel;
wire out;

mux4x1_gatelevel dut(.in(in), .sel(sel), .out(out));
initial begin
       $display("sel|in|out");       
        in=4'b1101;
	sel=2'b00;#10 $display("%b|%b|%b",sel,in,out);
	sel=2'b01;#10 $display("%b|%b|%b",sel,in,out);	
	sel=2'b10;#10;$display("%b|%b|%b",sel,in,out);
	sel=2'b11;#10;$display("%b|%b|%b",sel,in,out);
	$finish;
end
initial begin
	$dumpfile("mux4x1_gatelevel_dump.vcd");
	$dumpvars();
end
endmodule
