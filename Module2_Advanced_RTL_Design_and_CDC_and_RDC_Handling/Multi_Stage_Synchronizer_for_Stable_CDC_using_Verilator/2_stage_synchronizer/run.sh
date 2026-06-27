#!/bin/bash
verilator --binary -j 0 -Wall -Wno-UNUSEDSIGNAL sync_stage.v sync_stage_tb.v --top sync_stage_tb --timing --CFLAGS "-std=c++20" --trace
cd obj_dir
./Vsync_stage_tb
gtkwave dump.vcd

