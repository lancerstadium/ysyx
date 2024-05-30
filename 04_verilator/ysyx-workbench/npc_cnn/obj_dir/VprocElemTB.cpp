// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VprocElemTB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VprocElemTB::VprocElemTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VprocElemTB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VprocElemTB::VprocElemTB(const char* _vcname__)
    : VprocElemTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VprocElemTB::~VprocElemTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VprocElemTB___024root___eval_debug_assertions(VprocElemTB___024root* vlSelf);
#endif  // VL_DEBUG
void VprocElemTB___024root___eval_static(VprocElemTB___024root* vlSelf);
void VprocElemTB___024root___eval_initial(VprocElemTB___024root* vlSelf);
void VprocElemTB___024root___eval_settle(VprocElemTB___024root* vlSelf);
void VprocElemTB___024root___eval(VprocElemTB___024root* vlSelf);

void VprocElemTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VprocElemTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VprocElemTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VprocElemTB___024root___eval_static(&(vlSymsp->TOP));
        VprocElemTB___024root___eval_initial(&(vlSymsp->TOP));
        VprocElemTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VprocElemTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VprocElemTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VprocElemTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VprocElemTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VprocElemTB___024root___eval_final(VprocElemTB___024root* vlSelf);

VL_ATTR_COLD void VprocElemTB::final() {
    VprocElemTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VprocElemTB::hierName() const { return vlSymsp->name(); }
const char* VprocElemTB::modelName() const { return "VprocElemTB"; }
unsigned VprocElemTB::threads() const { return 1; }
void VprocElemTB::prepareClone() const { contextp()->prepareClone(); }
void VprocElemTB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VprocElemTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VprocElemTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VprocElemTB___024root__trace_init_top(VprocElemTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VprocElemTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VprocElemTB___024root*>(voidSelf);
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VprocElemTB___024root__trace_decl_types(tracep);
    VprocElemTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VprocElemTB___024root__trace_register(VprocElemTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VprocElemTB::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VprocElemTB::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VprocElemTB___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
