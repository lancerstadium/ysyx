// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VexponentTB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VexponentTB::VexponentTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VexponentTB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VexponentTB::VexponentTB(const char* _vcname__)
    : VexponentTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VexponentTB::~VexponentTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VexponentTB___024root___eval_debug_assertions(VexponentTB___024root* vlSelf);
#endif  // VL_DEBUG
void VexponentTB___024root___eval_static(VexponentTB___024root* vlSelf);
void VexponentTB___024root___eval_initial(VexponentTB___024root* vlSelf);
void VexponentTB___024root___eval_settle(VexponentTB___024root* vlSelf);
void VexponentTB___024root___eval(VexponentTB___024root* vlSelf);

void VexponentTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VexponentTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VexponentTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VexponentTB___024root___eval_static(&(vlSymsp->TOP));
        VexponentTB___024root___eval_initial(&(vlSymsp->TOP));
        VexponentTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VexponentTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VexponentTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VexponentTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VexponentTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VexponentTB___024root___eval_final(VexponentTB___024root* vlSelf);

VL_ATTR_COLD void VexponentTB::final() {
    VexponentTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VexponentTB::hierName() const { return vlSymsp->name(); }
const char* VexponentTB::modelName() const { return "VexponentTB"; }
unsigned VexponentTB::threads() const { return 1; }
void VexponentTB::prepareClone() const { contextp()->prepareClone(); }
void VexponentTB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VexponentTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VexponentTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VexponentTB___024root__trace_init_top(VexponentTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VexponentTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VexponentTB___024root*>(voidSelf);
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VexponentTB___024root__trace_decl_types(tracep);
    VexponentTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VexponentTB___024root__trace_register(VexponentTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VexponentTB::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VexponentTB::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VexponentTB___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
