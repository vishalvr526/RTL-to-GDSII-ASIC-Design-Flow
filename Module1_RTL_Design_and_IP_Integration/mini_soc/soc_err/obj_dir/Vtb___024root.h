// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*0:0*/ tb__DOT__rst;
    CData/*3:0*/ tb__DOT__in1;
    CData/*3:0*/ tb__DOT__in2;
    CData/*0:0*/ tb__DOT__sel;
    CData/*0:0*/ tb__DOT__tx_en;
    CData/*0:0*/ tb__DOT__tx_done;
    CData/*3:0*/ tb__DOT__tut__DOT__result;
    CData/*0:0*/ __Vdlyvval__tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
