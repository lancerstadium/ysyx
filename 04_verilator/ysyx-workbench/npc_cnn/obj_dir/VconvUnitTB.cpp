// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VconvUnitTB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VconvUnitTB::VconvUnitTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VconvUnitTB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VconvUnitTB::VconvUnitTB(const char* _vcname__)
    : VconvUnitTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VconvUnitTB::~VconvUnitTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VconvUnitTB___024root___eval_debug_assertions(VconvUnitTB___024root* vlSelf);
#endif  // VL_DEBUG
void VconvUnitTB___024root___eval_static(VconvUnitTB___024root* vlSelf);
void VconvUnitTB___024root___eval_initial(VconvUnitTB___024root* vlSelf);
void VconvUnitTB___024root___eval_settle(VconvUnitTB___024root* vlSelf);
void VconvUnitTB___024root___eval(VconvUnitTB___024root* vlSelf);

void VconvUnitTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VconvUnitTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VconvUnitTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VconvUnitTB___024root___eval_static(&(vlSymsp->TOP));
        VconvUnitTB___024root___eval_initial(&(vlSymsp->TOP));
        VconvUnitTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VconvUnitTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VconvUnitTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VconvUnitTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VconvUnitTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VconvUnitTB___024root___eval_final(VconvUnitTB___024root* vlSelf);

VL_ATTR_COLD void VconvUnitTB::final() {
    VconvUnitTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VconvUnitTB::hierName() const { return vlSymsp->name(); }
const char* VconvUnitTB::modelName() const { return "VconvUnitTB"; }
unsigned VconvUnitTB::threads() const { return 1; }
void VconvUnitTB::prepareClone() const { contextp()->prepareClone(); }
void VconvUnitTB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VconvUnitTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VconvUnitTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VconvUnitTB___024root__trace_init_top(VconvUnitTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VconvUnitTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvUnitTB___024root*>(voidSelf);
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VconvUnitTB___024root__trace_decl_types(tracep);
    VconvUnitTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvUnitTB___024root__trace_register(VconvUnitTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VconvUnitTB::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VconvUnitTB::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VconvUnitTB___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
