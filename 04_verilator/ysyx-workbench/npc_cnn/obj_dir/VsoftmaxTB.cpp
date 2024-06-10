// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsoftmaxTB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsoftmaxTB::VsoftmaxTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsoftmaxTB__Syms(contextp(), _vcname__, this)}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp}
    , __PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp{vlSymsp->TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VsoftmaxTB::VsoftmaxTB(const char* _vcname__)
    : VsoftmaxTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsoftmaxTB::~VsoftmaxTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsoftmaxTB___024root___eval_debug_assertions(VsoftmaxTB___024root* vlSelf);
#endif  // VL_DEBUG
void VsoftmaxTB___024root___eval_static(VsoftmaxTB___024root* vlSelf);
void VsoftmaxTB___024root___eval_initial(VsoftmaxTB___024root* vlSelf);
void VsoftmaxTB___024root___eval_settle(VsoftmaxTB___024root* vlSelf);
void VsoftmaxTB___024root___eval(VsoftmaxTB___024root* vlSelf);

void VsoftmaxTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsoftmaxTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsoftmaxTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsoftmaxTB___024root___eval_static(&(vlSymsp->TOP));
        VsoftmaxTB___024root___eval_initial(&(vlSymsp->TOP));
        VsoftmaxTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsoftmaxTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsoftmaxTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VsoftmaxTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VsoftmaxTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsoftmaxTB___024root___eval_final(VsoftmaxTB___024root* vlSelf);

VL_ATTR_COLD void VsoftmaxTB::final() {
    VsoftmaxTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsoftmaxTB::hierName() const { return vlSymsp->name(); }
const char* VsoftmaxTB::modelName() const { return "VsoftmaxTB"; }
unsigned VsoftmaxTB::threads() const { return 1; }
void VsoftmaxTB::prepareClone() const { contextp()->prepareClone(); }
void VsoftmaxTB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsoftmaxTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsoftmaxTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VsoftmaxTB___024root__trace_init_top(VsoftmaxTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsoftmaxTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsoftmaxTB___024root*>(voidSelf);
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsoftmaxTB___024root__trace_decl_types(tracep);
    VsoftmaxTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsoftmaxTB___024root__trace_register(VsoftmaxTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsoftmaxTB::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsoftmaxTB::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsoftmaxTB___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
