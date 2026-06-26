`timescale 1ns/1ps
module uart #(parameter clk_per_bit=217)

(input wire clk,
input wire reset,
input wire serial_in,
output reg [7:0] data_out,
output reg data_ready
);
localparam idle=2'd0;
localparam start=2'd1;
localparam rcv=2'd2;;
localparam stop=2'd3;

reg [1:0] state;
reg [7:0] clk_count;
reg [2:0] bit_index;
reg [7:0] data_buf; //temperory storage

reg rx_meta;
reg rx_sync;


always @(posedge clk)begin
	rx_meta<=serial_in;
	rx_sync<=rx_meta;
end

always @(posedge clk)begin
	if(!reset)begin
		state<=idle;
	        clk_count<=8'd0;
		bit_index<=3'd0;
		data_buf<=8'd0;
		data_out<=8'd0;
		data_ready<=1'b0;
	end
	else begin;
	data_ready<=1'b0;
	case(state)
		idle:begin
			clk_count<=8'd0;
			bit_index<=3'd0;
			if(rx_sync==1'b0)
				state<=start;
			end
	        start:begin
			if(clk_count==(clk_per_bit>>1))begin
				clk_count<=8'd0;
				if(rx_sync==1'b0)
					state<=rcv;
				else
					state<=idle;
			end
			else begin
				clk_count<=clk_count+1'b1;
			end
		end
		rcv:begin
			if(clk_count==clk_per_bit-1)begin
				clk_count<=8'd0;				                                data_buf[bit_index]<=rx_sync;

				if(bit_index==3'd7)begin
					bit_index<=3'd0;
					state<=stop;
				end
				else begin
					bit_index<=1'b1+bit_index;
				end
			end
			else begin
				clk_count<=clk_count+1'b1;
			end
		end
		stop:begin
			if(clk_count==clk_per_bit-1)begin
				clk_count<=8'd0;
				data_out<=data_buf;
				data_ready<=1'b1;
				state<=idle;
			end
			else begin
				clk_count<=clk_count+1'b1;
			end
		end

		default:begin
			state<=idle;
		end
	endcase
end
end
endmodule






