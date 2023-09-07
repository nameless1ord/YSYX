// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vonoff_switch.h"
#include "Vonoff_switch__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vonoff_switch::Vonoff_switch(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vonoff_switch__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vonoff_switch::Vonoff_switch(const char* _vcname__)
    : Vonoff_switch(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vonoff_switch::~Vonoff_switch() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vonoff_switch___024root___eval_debug_assertions(Vonoff_switch___024root* vlSelf);
#endif  // VL_DEBUG
void Vonoff_switch___024root___eval_static(Vonoff_switch___024root* vlSelf);
void Vonoff_switch___024root___eval_initial(Vonoff_switch___024root* vlSelf);
void Vonoff_switch___024root___eval_settle(Vonoff_switch___024root* vlSelf);
void Vonoff_switch___024root___eval(Vonoff_switch___024root* vlSelf);

void Vonoff_switch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vonoff_switch::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vonoff_switch___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vonoff_switch___024root___eval_static(&(vlSymsp->TOP));
        Vonoff_switch___024root___eval_initial(&(vlSymsp->TOP));
        Vonoff_switch___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vonoff_switch___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vonoff_switch::eventsPending() { return false; }

uint64_t Vonoff_switch::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vonoff_switch::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vonoff_switch___024root___eval_final(Vonoff_switch___024root* vlSelf);

VL_ATTR_COLD void Vonoff_switch::final() {
    Vonoff_switch___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vonoff_switch::hierName() const { return vlSymsp->name(); }
const char* Vonoff_switch::modelName() const { return "Vonoff_switch"; }
unsigned Vonoff_switch::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vonoff_switch::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vonoff_switch___024root__trace_init_top(Vonoff_switch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vonoff_switch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vonoff_switch___024root*>(voidSelf);
    Vonoff_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vonoff_switch___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vonoff_switch___024root__trace_register(Vonoff_switch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vonoff_switch::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vonoff_switch::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vonoff_switch___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
