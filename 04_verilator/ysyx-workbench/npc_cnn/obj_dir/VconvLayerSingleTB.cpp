// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VconvLayerSingleTB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VconvLayerSingleTB::VconvLayerSingleTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VconvLayerSingleTB__Syms(contextp(), _vcname__, this)}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU}
    , __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VconvLayerSingleTB::VconvLayerSingleTB(const char* _vcname__)
    : VconvLayerSingleTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VconvLayerSingleTB::~VconvLayerSingleTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VconvLayerSingleTB___024root___eval_debug_assertions(VconvLayerSingleTB___024root* vlSelf);
#endif  // VL_DEBUG
void VconvLayerSingleTB___024root___eval_static(VconvLayerSingleTB___024root* vlSelf);
void VconvLayerSingleTB___024root___eval_initial(VconvLayerSingleTB___024root* vlSelf);
void VconvLayerSingleTB___024root___eval_settle(VconvLayerSingleTB___024root* vlSelf);
void VconvLayerSingleTB___024root___eval(VconvLayerSingleTB___024root* vlSelf);

void VconvLayerSingleTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VconvLayerSingleTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VconvLayerSingleTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VconvLayerSingleTB___024root___eval_static(&(vlSymsp->TOP));
        VconvLayerSingleTB___024root___eval_initial(&(vlSymsp->TOP));
        VconvLayerSingleTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VconvLayerSingleTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VconvLayerSingleTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VconvLayerSingleTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VconvLayerSingleTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VconvLayerSingleTB___024root___eval_final(VconvLayerSingleTB___024root* vlSelf);

VL_ATTR_COLD void VconvLayerSingleTB::final() {
    VconvLayerSingleTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VconvLayerSingleTB::hierName() const { return vlSymsp->name(); }
const char* VconvLayerSingleTB::modelName() const { return "VconvLayerSingleTB"; }
unsigned VconvLayerSingleTB::threads() const { return 1; }
void VconvLayerSingleTB::prepareClone() const { contextp()->prepareClone(); }
void VconvLayerSingleTB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VconvLayerSingleTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VconvLayerSingleTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VconvLayerSingleTB___024root__trace_init_top(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VconvLayerSingleTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerSingleTB___024root*>(voidSelf);
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_decl_types(tracep);
    VconvLayerSingleTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_register(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VconvLayerSingleTB::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VconvLayerSingleTB::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VconvLayerSingleTB___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}