// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vonoff_switch.h for the primary calling header

#ifndef VERILATED_VONOFF_SWITCH___024ROOT_H_
#define VERILATED_VONOFF_SWITCH___024ROOT_H_  // guard

#include "verilated.h"

class Vonoff_switch__Syms;

class Vonoff_switch___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vonoff_switch__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vonoff_switch___024root(Vonoff_switch__Syms* symsp, const char* v__name);
    ~Vonoff_switch___024root();
    VL_UNCOPYABLE(Vonoff_switch___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
