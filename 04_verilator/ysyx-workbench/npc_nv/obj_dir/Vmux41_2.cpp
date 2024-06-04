// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux41_2__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux41_2::Vmux41_2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux41_2__Syms(contextp(), _vcname__, this)}
    , x0{vlSymsp->TOP.x0}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , x3{vlSymsp->TOP.x3}
    , y{vlSymsp->TOP.y}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmux41_2::Vmux41_2(const char* _vcname__)
    : Vmux41_2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux41_2::~Vmux41_2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux41_2___024root___eval_debug_assertions(Vmux41_2___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41_2___024root___eval_static(Vmux41_2___024root* vlSelf);
void Vmux41_2___024root___eval_initial(Vmux41_2___024root* vlSelf);
void Vmux41_2___024root___eval_settle(Vmux41_2___024root* vlSelf);
void Vmux41_2___024root___eval(Vmux41_2___024root* vlSelf);

void Vmux41_2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux41_2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux41_2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux41_2___024root___eval_static(&(vlSymsp->TOP));
        Vmux41_2___024root___eval_initial(&(vlSymsp->TOP));
        Vmux41_2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux41_2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux41_2::eventsPending() { return false; }

uint64_t Vmux41_2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux41_2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux41_2___024root___eval_final(Vmux41_2___024root* vlSelf);

VL_ATTR_COLD void Vmux41_2::final() {
    Vmux41_2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux41_2::hierName() const { return vlSymsp->name(); }
const char* Vmux41_2::modelName() const { return "Vmux41_2"; }
unsigned Vmux41_2::threads() const { return 1; }
void Vmux41_2::prepareClone() const { contextp()->prepareClone(); }
void Vmux41_2::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmux41_2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmux41_2___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmux41_2___024root__trace_init_top(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux41_2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41_2___024root*>(voidSelf);
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmux41_2___024root__trace_decl_types(tracep);
    Vmux41_2___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux41_2___024root__trace_register(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux41_2::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmux41_2::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux41_2___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
