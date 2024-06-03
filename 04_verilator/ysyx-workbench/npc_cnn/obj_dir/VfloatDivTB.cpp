// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VfloatDivTB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VfloatDivTB::VfloatDivTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VfloatDivTB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VfloatDivTB::VfloatDivTB(const char* _vcname__)
    : VfloatDivTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VfloatDivTB::~VfloatDivTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VfloatDivTB___024root___eval_debug_assertions(VfloatDivTB___024root* vlSelf);
#endif  // VL_DEBUG
void VfloatDivTB___024root___eval_static(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___eval_initial(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___eval_settle(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___eval(VfloatDivTB___024root* vlSelf);

void VfloatDivTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VfloatDivTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VfloatDivTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VfloatDivTB___024root___eval_static(&(vlSymsp->TOP));
        VfloatDivTB___024root___eval_initial(&(vlSymsp->TOP));
        VfloatDivTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VfloatDivTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VfloatDivTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VfloatDivTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VfloatDivTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VfloatDivTB___024root___eval_final(VfloatDivTB___024root* vlSelf);

VL_ATTR_COLD void VfloatDivTB::final() {
    VfloatDivTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VfloatDivTB::hierName() const { return vlSymsp->name(); }
const char* VfloatDivTB::modelName() const { return "VfloatDivTB"; }
unsigned VfloatDivTB::threads() const { return 1; }
void VfloatDivTB::prepareClone() const { contextp()->prepareClone(); }
void VfloatDivTB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VfloatDivTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VfloatDivTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VfloatDivTB___024root__trace_init_top(VfloatDivTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VfloatDivTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfloatDivTB___024root*>(voidSelf);
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VfloatDivTB___024root__trace_decl_types(tracep);
    VfloatDivTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VfloatDivTB___024root__trace_register(VfloatDivTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VfloatDivTB::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VfloatDivTB::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VfloatDivTB___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
