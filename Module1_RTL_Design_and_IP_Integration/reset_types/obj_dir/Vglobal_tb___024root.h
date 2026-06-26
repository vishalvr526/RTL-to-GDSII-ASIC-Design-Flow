// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vglobal_tb.h for the primary calling header

#ifndef VERILATED_VGLOBAL_TB___024ROOT_H_
#define VERILATED_VGLOBAL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vglobal_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vglobal_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ global_tb__DOT__clk;
    CData/*0:0*/ global_tb__DOT__gb_rst;
    CData/*0:0*/ global_tb__DOT__q1;
    CData/*0:0*/ global_tb__DOT__q2;
    CData/*0:0*/ __Vdlyvval__global_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__global_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__global_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vglobal_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vglobal_tb___024root(Vglobal_tb__Syms* symsp, const char* v__name);
    ~Vglobal_tb___024root();
    VL_UNCOPYABLE(Vglobal_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
