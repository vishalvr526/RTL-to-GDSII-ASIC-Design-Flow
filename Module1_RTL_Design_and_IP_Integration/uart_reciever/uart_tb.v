`timescale 1ns/1ps
module uart_tb;
localparam clk_period=40;
localparam clk_per_bit=217;
localparam bit_time=clk_period*clk_per_bit;

reg clk;
reg reset;
reg serial_in;
wire [7:0] data_out;
wire data_ready;
integer rx_count;
uart #(.clk_per_bit(clk_per_bit)) dut(.clk(clk),.reset(reset),.data_out(data_out),.serial_in(serial_in),.data_ready(data_ready));
always #(clk_period/2) clk<=~clk;
task send_uart_frame(input [7:0] payload);
	integer i;
	begin
		serial_in=1'b0; #(bit_time);
		for (i=0;i<8;i=i+1)begin
			serial_in=payload[i];
			#(bit_time);
		end
		serial_in=1'b1; #(bit_time);
                end


	endtask

always @(posedge clk)begin
	if(data_ready)begin
		rx_count<=rx_count+1;
		$display("RX[%0d] @%0t ns=%h",rx_count,$time,data_out);
	end
end

initial begin
	clk=1'b0;
	reset=1'b0;
	serial_in=1'b1;
	rx_count=0;


	#(10*clk_period);
	reset=1'b1;
	#(5*clk_period);
	send_uart_frame(8'h3C);
	#(bit_time);
        send_uart_frame(8'h2F);
	#(3*bit_time);
	$display("final data_out=%h",data_out);
	if(rx_count==2)
		$display("pass:two bytes recieved successfully");
	else
		$display("fail:bytes not recieved",rx_count);
	# (5* bit_time);
	$finish;
end
initial begin
	$dumpfile("uart_rcv_dump.vcd");
	$dumpvars();
end
endmodule
