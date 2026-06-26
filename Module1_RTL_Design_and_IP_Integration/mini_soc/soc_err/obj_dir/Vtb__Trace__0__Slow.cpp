// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP__0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+2,"in1", false,-1, 3,0);
    tracep->declBus(c+3,"in2", false,-1, 3,0);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBit(c+5,"tx_en", false,-1);
    tracep->declBit(c+7,"tx_done", false,-1);
    tracep->declBus(c+8,"alu_out", false,-1, 3,0);
    tracep->pushNamePrefix("tut ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+5,"tx_en", false,-1);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBus(c+2,"in1", false,-1, 3,0);
    tracep->declBus(c+3,"in2", false,-1, 3,0);
    tracep->declBus(c+8,"alu_out", false,-1, 3,0);
    tracep->declBit(c+7,"tx_done", false,-1);
    tracep->declBus(c+8,"result", false,-1, 3,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+5,"tx_en", false,-1);
    tracep->declBus(c+9,"tx_data", false,-1, 7,0);
    tracep->declBit(c+7,"tx_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uut ");
    tracep->declBus(c+2,"a", false,-1, 3,0);
    tracep->declBus(c+3,"b", false,-1, 3,0);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBus(c+8,"result", false,-1, 3,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb___024root__trace_full_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_top_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb__DOT__rst));
    bufp->fullCData(oldp+2,(vlSelf->tb__DOT__in1),4);
    bufp->fullCData(oldp+3,(vlSelf->tb__DOT__in2),4);
    bufp->fullBit(oldp+4,(vlSelf->tb__DOT__sel));
    bufp->fullBit(oldp+5,(vlSelf->tb__DOT__tx_en));
    bufp->fullBit(oldp+6,(vlSelf->tb__DOT__clk));
    bufp->fullBit(oldp+7,(vlSelf->tb__DOT__tx_done));
    bufp->fullCData(oldp+8,(vlSelf->tb__DOT__tut__DOT__result),4);
    bufp->fullCData(oldp+9,(vlSelf->tb__DOT__tut__DOT__result),8);
}
