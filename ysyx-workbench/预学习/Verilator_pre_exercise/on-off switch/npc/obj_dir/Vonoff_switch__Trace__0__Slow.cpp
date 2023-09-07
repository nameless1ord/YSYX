// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vonoff_switch__Syms.h"


VL_ATTR_COLD void Vonoff_switch___024root__trace_init_sub__TOP__0(Vonoff_switch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff_switch___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->pushNamePrefix("onoff_switch ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vonoff_switch___024root__trace_init_top(Vonoff_switch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff_switch___024root__trace_init_top\n"); );
    // Body
    Vonoff_switch___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vonoff_switch___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vonoff_switch___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vonoff_switch___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vonoff_switch___024root__trace_register(Vonoff_switch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff_switch___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vonoff_switch___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vonoff_switch___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vonoff_switch___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vonoff_switch___024root__trace_full_sub_0(Vonoff_switch___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vonoff_switch___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff_switch___024root__trace_full_top_0\n"); );
    // Init
    Vonoff_switch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vonoff_switch___024root*>(voidSelf);
    Vonoff_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vonoff_switch___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vonoff_switch___024root__trace_full_sub_0(Vonoff_switch___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff_switch___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->a));
    bufp->fullBit(oldp+2,(vlSelf->b));
    bufp->fullBit(oldp+3,(vlSelf->f));
}
