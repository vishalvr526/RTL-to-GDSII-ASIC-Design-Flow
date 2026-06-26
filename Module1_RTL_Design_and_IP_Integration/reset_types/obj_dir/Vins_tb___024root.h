// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vins_tb.h for the primary calling header

#ifndef VERILATED_VINS_TB___024ROOT_H_
#define VERILATED_VINS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vins_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vins_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ins_tb__DOT__clk;
    CData/*0:0*/ ins_tb__DOT__async_reset;
    CData/*0:0*/ ins_tb__DOT__async_signal;
    CData/*0:0*/ ins_tb__DOT__synced_reset;
    CData/*0:0*/ ins_tb__DOT__synced_signal;
    CData/*0:0*/ ins_tb__DOT__dut__DOT__u_reset_sync__DOT__sync_ff1;
    CData/*0:0*/ ins_tb__DOT__dut__DOT__u_cdc_sync__DOT__stage1;
    CData/*0:0*/ __Vdlyvval__ins_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__ins_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ins_tb__DOT__async_reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ins_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vins_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vins_tb___024root(Vins_tb__Syms* symsp, const char* v__name);
    ~Vins_tb___024root();
    VL_UNCOPYABLE(Vins_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
