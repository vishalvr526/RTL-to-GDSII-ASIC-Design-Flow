// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vds_tb.h for the primary calling header

#ifndef VERILATED_VDS_TB___024ROOT_H_
#define VERILATED_VDS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vds_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vds_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ds_tb__DOT__clk1;
    CData/*0:0*/ ds_tb__DOT__clk2;
    CData/*0:0*/ ds_tb__DOT__rst1;
    CData/*0:0*/ ds_tb__DOT__rst2;
    CData/*0:0*/ ds_tb__DOT__q1;
    CData/*0:0*/ ds_tb__DOT__q2;
    CData/*0:0*/ __Vdlyvval__ds_tb__DOT__clk2__v0;
    CData/*0:0*/ __Vdlyvset__ds_tb__DOT__clk2__v0;
    CData/*0:0*/ __Vdlyvval__ds_tb__DOT__clk1__v0;
    CData/*0:0*/ __Vdlyvset__ds_tb__DOT__clk1__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ds_tb__DOT__clk1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ds_tb__DOT__clk2__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vds_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vds_tb___024root(Vds_tb__Syms* symsp, const char* v__name);
    ~Vds_tb___024root();
    VL_UNCOPYABLE(Vds_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
