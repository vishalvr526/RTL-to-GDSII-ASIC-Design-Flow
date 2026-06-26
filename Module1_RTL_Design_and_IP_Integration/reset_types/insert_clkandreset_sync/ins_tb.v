module ins_tb;
 reg clk = 0; // System clock
 reg async_reset = 1; // Start with reset active
 reg async_signal = 0; // Default async input
 wire synced_reset;
 wire synced_signal;
 // Generate clock
 always #5 clk <= ~clk;
 // Instantiate DUT
 top_syn dut (
 .clk(clk),
.async_reset(async_reset),
 .async_signal(async_signal),
 .synced_reset(synced_reset),
 .synced_signal(synced_signal)
 );
 initial begin
 $dumpfile("ins_dump.vcd");
 $dumpvars(0, sync_tb);
 // Deassert reset after some time
 #12 async_reset = 0;
 // Inject asynchronous signal pulses
 #15 async_signal = 1;
 #3 async_signal = 0;
 #20 async_signal = 1;
 #2 async_signal = 0;
 #40 $finish;
 end
endmodule
 
