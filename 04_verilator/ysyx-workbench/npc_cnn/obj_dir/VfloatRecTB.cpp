// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VfloatRecTB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VfloatRecTB::VfloatRecTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VfloatRecTB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VfloatRecTB::VfloatRecTB(const char* _vcname__)
    : VfloatRecTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VfloatRecTB::~VfloatRecTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VfloatRecTB___024root___eval_debug_assertions(VfloatRecTB___024root* vlSelf);
#endif  // VL_DEBUG
void VfloatRecTB___024root___eval_static(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___eval_initial(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___eval_settle(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___eval(VfloatRecTB___024root* vlSelf);

void VfloatRecTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VfloatRecTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VfloatRecTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VfloatRecTB___024root___eval_static(&(vlSymsp->TOP));
        VfloatRecTB___024root___eval_initial(&(vlSymsp->TOP));
        VfloatRecTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VfloatRecTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VfloatRecTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VfloatRecTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VfloatRecTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VfloatRecTB___024root___eval_final(VfloatRecTB___024root* vlSelf);

VL_ATTR_COLD void VfloatRecTB::final() {
    VfloatRecTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VfloatRecTB::hierName() const { return vlSymsp->name(); }
const char* VfloatRecTB::modelName() const { return "VfloatRecTB"; }
unsigned VfloatRecTB::threads() const { return 1; }
void VfloatRecTB::prepareClone() const { contextp()->prepareClone(); }
void VfloatRecTB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VfloatRecTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VfloatRecTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VfloatRecTB___024root__trace_init_top(VfloatRecTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VfloatRecTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfloatRecTB___024root*>(voidSelf);
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VfloatRecTB___024root__trace_decl_types(tracep);
    VfloatRecTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VfloatRecTB___024root__trace_register(VfloatRecTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VfloatRecTB::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VfloatRecTB::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VfloatRecTB___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
