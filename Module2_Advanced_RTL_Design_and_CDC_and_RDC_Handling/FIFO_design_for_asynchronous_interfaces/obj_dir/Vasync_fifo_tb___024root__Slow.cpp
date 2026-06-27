// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasync_fifo_tb.h for the primary calling header

#include "verilated.h"

#include "Vasync_fifo_tb__Syms.h"
#include "Vasync_fifo_tb__Syms.h"
#include "Vasync_fifo_tb___024root.h"

void Vasync_fifo_tb___024root___ctor_var_reset(Vasync_fifo_tb___024root* vlSelf);

Vasync_fifo_tb___024root::Vasync_fifo_tb___024root(Vasync_fifo_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vasync_fifo_tb___024root___ctor_var_reset(this);
}

void Vasync_fifo_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vasync_fifo_tb___024root::~Vasync_fifo_tb___024root() {
}
