// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_stage_tb.h for the primary calling header

#include "verilated.h"

#include "Vsync_stage_tb__Syms.h"
#include "Vsync_stage_tb__Syms.h"
#include "Vsync_stage_tb___024root.h"

void Vsync_stage_tb___024root___ctor_var_reset(Vsync_stage_tb___024root* vlSelf);

Vsync_stage_tb___024root::Vsync_stage_tb___024root(Vsync_stage_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsync_stage_tb___024root___ctor_var_reset(this);
}

void Vsync_stage_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsync_stage_tb___024root::~Vsync_stage_tb___024root() {
}
