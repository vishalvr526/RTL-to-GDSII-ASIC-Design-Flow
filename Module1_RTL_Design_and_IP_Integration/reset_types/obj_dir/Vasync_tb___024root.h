// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vasync_tb.h for the primary calling header

#ifndef VERILATED_VASYNC_TB___024ROOT_H_
#define VERILATED_VASYNC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vasync_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vasync_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ async_tb__DOT__clk;
    CData/*0:0*/ async_tb__DOT__rst_n;
    CData/*0:0*/ async_tb__DOT__d;
    CData/*0:0*/ async_tb__DOT__q;
    CData/*0:0*/ __Vdlyvval__async_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__async_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__async_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__async_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vasync_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vasync_tb___024root(Vasync_tb__Syms* symsp, const char* v__name);
    ~Vasync_tb___024root();
    VL_UNCOPYABLE(Vasync_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
