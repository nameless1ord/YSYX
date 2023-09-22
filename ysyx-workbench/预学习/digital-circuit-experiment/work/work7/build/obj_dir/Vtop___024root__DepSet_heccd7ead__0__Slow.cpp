// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
    vlSelf->__Vtrigrprev__TOP__top__DOT__reg_en = vlSelf->top__DOT__reg_en;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ top__DOT__KeyboardLUT0__DOT__unnamedblk1__DOT__i;
    top__DOT__KeyboardLUT0__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->top__DOT__mu_seg__DOT__segs[0U] = 0xfdU;
    vlSelf->top__DOT__mu_seg__DOT__segs[1U] = 0x60U;
    vlSelf->top__DOT__mu_seg__DOT__segs[2U] = 0xdaU;
    vlSelf->top__DOT__mu_seg__DOT__segs[3U] = 0xf2U;
    vlSelf->top__DOT__mu_seg__DOT__segs[4U] = 0x66U;
    vlSelf->top__DOT__mu_seg__DOT__segs[5U] = 0xb6U;
    vlSelf->top__DOT__mu_seg__DOT__segs[6U] = 0xbeU;
    vlSelf->top__DOT__mu_seg__DOT__segs[7U] = 0xe0U;
    vlSelf->top__DOT__mu_seg__DOT__segs[8U] = 0xfeU;
    vlSelf->top__DOT__mu_seg__DOT__segs[9U] = 0xf6U;
    vlSelf->top__DOT__mu_seg__DOT__segs[0xaU] = 0xeeU;
    vlSelf->top__DOT__mu_seg__DOT__segs[0xbU] = 0x3eU;
    vlSelf->top__DOT__mu_seg__DOT__segs[0xcU] = 0x9cU;
    vlSelf->top__DOT__mu_seg__DOT__segs[0xdU] = 0xfcU;
    vlSelf->top__DOT__mu_seg__DOT__segs[0xeU] = 0x9eU;
    vlSelf->top__DOT__mu_seg__DOT__segs[0xfU] = 0x8eU;
    vlSelf->top__DOT__mu_seg__DOT__segs[0x10U] = 0U;
    top__DOT__KeyboardLUT0__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, top__DOT__KeyboardLUT0__DOT__unnamedblk1__DOT__i)) {
        vlSelf->top__DOT__KeyboardLUT0__DOT__lut[(0xffU 
                                                  & top__DOT__KeyboardLUT0__DOT__unnamedblk1__DOT__i)] = 0U;
        top__DOT__KeyboardLUT0__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + top__DOT__KeyboardLUT0__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1cU] = 0x61U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1dU] = 0x62U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1eU] = 0x63U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1fU] = 0x64U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x20U] = 0x65U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x21U] = 0x66U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x22U] = 0x67U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x23U] = 0x68U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x24U] = 0x69U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x25U] = 0x6aU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x26U] = 0x6bU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x27U] = 0x6cU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x28U] = 0x6dU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x29U] = 0x6eU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x2aU] = 0x6fU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x2bU] = 0x70U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x2cU] = 0x71U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x2dU] = 0x72U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x2eU] = 0x73U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x2fU] = 0x74U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x30U] = 0x75U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x31U] = 0x76U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x32U] = 0x77U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x33U] = 0x78U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x34U] = 0x79U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x35U] = 0x7aU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x39U] = 0x20U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1aU] = 0x5bU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1bU] = 0x5dU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x27U] = 0x27U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x28U] = 0x3bU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x29U] = 0x27U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x2bU] = 0x5cU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x33U] = 0x2cU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x34U] = 0x2eU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x35U] = 0x2fU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x27U] = 0x60U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1aU] = 0x7bU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1bU] = 0x7dU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x2bU] = 0x7cU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x33U] = 0x3cU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x34U] = 0x3eU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x35U] = 0x3fU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0xeU] = 8U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0xfU] = 9U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1cU] = 0xaU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[1U] = 0x1bU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x3aU] = 0U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x45U] = 0U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1cU] = 0xaU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x1dU] = 0x1bU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x35U] = 0x2fU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x37U] = 0x2aU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x47U] = 0x7fU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x48U] = 0x1cU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x49U] = 8U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x4bU] = 0x1dU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x4dU] = 0x1bU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x4fU] = 4U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x50U] = 0xaU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x51U] = 2U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x52U] = 0U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x53U] = 0x7fU;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x47U] = 0x37U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x48U] = 0x38U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x49U] = 0x39U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x4bU] = 0x34U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x4cU] = 0x35U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x4dU] = 0x36U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x4fU] = 0x31U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x50U] = 0x32U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x51U] = 0x33U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x52U] = 0x30U;
    vlSelf->top__DOT__KeyboardLUT0__DOT__lut[0x53U] = 0x2eU;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/wzm/YSYX/ysyx-workbench/预学习/digital-circuit-experiment/work/work7/vsrc/top.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->seg6 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [(0xfU & (IData)(vlSelf->top__DOT__count_num))]));
    vlSelf->seg7 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                             [(0xfU & ((IData)(vlSelf->top__DOT__count_num) 
                                       >> 4U))]));
    vlSelf->top__DOT__asciiCode = vlSelf->top__DOT__KeyboardLUT0__DOT__lut
        [vlSelf->top__DOT__to_reg];
    if ((0xf0U == (IData)(vlSelf->top__DOT__last2_reg_in))) {
        vlSelf->seg0 = 0xffU;
        vlSelf->seg1 = 0xffU;
        vlSelf->seg2 = 0xffU;
        vlSelf->seg3 = 0xffU;
        vlSelf->seg4 = 0xffU;
    } else {
        vlSelf->seg0 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                                 [(0xfU & (IData)(vlSelf->top__DOT__to_reg))]));
        vlSelf->seg1 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                                 [(0xfU & ((IData)(vlSelf->top__DOT__to_reg) 
                                           >> 4U))]));
        vlSelf->seg2 = 2U;
        vlSelf->seg3 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                                 [(0xfU & (IData)(vlSelf->top__DOT__asciiCode))]));
        vlSelf->seg4 = (0xffU & (~ vlSelf->top__DOT__mu_seg__DOT__segs
                                 [(0xfU & ((IData)(vlSelf->top__DOT__asciiCode) 
                                           >> 4U))]));
    }
    vlSelf->seg5 = vlSelf->seg2;
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst or posedge top.reg_en)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst or posedge top.reg_en)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->sw = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->BTN = 0;
    vlSelf->ledr = 0;
    vlSelf->VGA_CLK = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_BLANK_N = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
    vlSelf->seg0 = 0;
    vlSelf->seg1 = 0;
    vlSelf->seg2 = 0;
    vlSelf->seg3 = 0;
    vlSelf->seg4 = 0;
    vlSelf->seg5 = 0;
    vlSelf->seg6 = 0;
    vlSelf->seg7 = 0;
    vlSelf->top__DOT__reg_en = 0;
    vlSelf->top__DOT__count_num = 0;
    vlSelf->top__DOT__to_reg = 0;
    vlSelf->top__DOT__last2_reg_in = 0;
    vlSelf->top__DOT__asciiCode = 0;
    vlSelf->top__DOT__my_keyboard__DOT__buffer = 0;
    vlSelf->top__DOT__my_keyboard__DOT__count = 0;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 = 0;
    vlSelf->top__DOT__counter0__DOT__last_reg_in = 0;
    vlSelf->top__DOT__counter0__DOT__inv = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__KeyboardLUT0__DOT__lut[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->top__DOT__mu_seg__DOT__segs[__Vi0] = 0;
    }
    vlSelf->__Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    vlSelf->__Vdly__top__DOT__my_keyboard__DOT__count = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__reg_en = 0;
}
