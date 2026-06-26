// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vglobal_tb.h for the primary calling header

#include "verilated.h"

#include "Vglobal_tb__Syms.h"
#include "Vglobal_tb__Syms.h"
#include "Vglobal_tb___024root.h"

void Vglobal_tb___024root___ctor_var_reset(Vglobal_tb___024root* vlSelf);

Vglobal_tb___024root::Vglobal_tb___024root(Vglobal_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vglobal_tb___024root___ctor_var_reset(this);
}

void Vglobal_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vglobal_tb___024root::~Vglobal_tb___024root() {
}
