#!/bin/bash
verilator --binary -j 0 -Wall -Wno-UNUSEDSIGNAL async_fifo.v async_fifo_tb.v --top async_fifo_tb --timing --CFLAGS "-std=c++20" --trace
cd obj_dir
./Vasync_fifo_tb
gtkwave dump.vcd
