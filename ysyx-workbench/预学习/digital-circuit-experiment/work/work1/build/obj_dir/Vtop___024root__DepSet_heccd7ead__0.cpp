// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ top__DOT__y;
    top__DOT__y = 0;
    CData/*1:0*/ top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out;
    top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out = 0;
    // Body
    vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (3U & ((IData)(vlSelf->sw) >> 8U));
    vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (3U & ((IData)(vlSelf->sw) >> 6U));
    vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (3U & ((IData)(vlSelf->sw) >> 4U));
    vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (3U & ((IData)(vlSelf->sw) >> 2U));
    top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (IData)(vlSelf->sw)) == 
                       vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->sw)) 
                          == vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->sw)) 
                          == vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->sw)) 
                          == vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    top__DOT__y = top__DOT__u_mux4_2__DOT__i0__DOT__i0__DOT__lut_out;
    vlSelf->ledr = top__DOT__y;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wzm/YSYX/ysyx-workbench/预学习/digital-circuit-experiment/work/work1/vsrc/top.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wzm/YSYX/ysyx-workbench/预学习/digital-circuit-experiment/work/work1/vsrc/top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wzm/YSYX/ysyx-workbench/预学习/digital-circuit-experiment/work/work1/vsrc/top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
