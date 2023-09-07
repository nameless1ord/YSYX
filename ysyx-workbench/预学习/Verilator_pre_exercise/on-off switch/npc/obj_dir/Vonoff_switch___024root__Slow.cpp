// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonoff_switch.h for the primary calling header

#include "verilated.h"

#include "Vonoff_switch__Syms.h"
#include "Vonoff_switch___024root.h"

void Vonoff_switch___024root___ctor_var_reset(Vonoff_switch___024root* vlSelf);

Vonoff_switch___024root::Vonoff_switch___024root(Vonoff_switch__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vonoff_switch___024root___ctor_var_reset(this);
}

void Vonoff_switch___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vonoff_switch___024root::~Vonoff_switch___024root() {
}
