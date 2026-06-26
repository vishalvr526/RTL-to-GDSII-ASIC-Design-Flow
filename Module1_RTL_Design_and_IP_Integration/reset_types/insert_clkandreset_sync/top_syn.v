module top_syn (
 input clk, // Main clock inpu
 input async_reset, // Global asynchronous reset
 input async_signal, // CDC input from another domain
 output synced_reset, // Cleaned reset
 output synced_signal // Cleaned signal
);
 // Instantiate the reset synchronizer
 ins u_reset_sync (
 .clk(clk),
.async_reset(async_reset),
 .sync_reset(synced_reset)
 );
 
 cdc_sync u_cdc_sync (
 .clk(clk),
 .async_in(async_signal),
 .sync_out(synced_signal)
 );
endmodule
 
