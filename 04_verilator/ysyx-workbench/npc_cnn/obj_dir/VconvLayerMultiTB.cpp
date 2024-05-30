// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VconvLayerMultiTB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VconvLayerMultiTB::VconvLayerMultiTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VconvLayerMultiTB__Syms(contextp(), _vcname__, this)}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU}
    , __PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU{vlSymsp->TOP.__PVT__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VconvLayerMultiTB::VconvLayerMultiTB(const char* _vcname__)
    : VconvLayerMultiTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VconvLayerMultiTB::~VconvLayerMultiTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VconvLayerMultiTB___024root___eval_debug_assertions(VconvLayerMultiTB___024root* vlSelf);
#endif  // VL_DEBUG
void VconvLayerMultiTB___024root___eval_static(VconvLayerMultiTB___024root* vlSelf);
void VconvLayerMultiTB___024root___eval_initial(VconvLayerMultiTB___024root* vlSelf);
void VconvLayerMultiTB___024root___eval_settle(VconvLayerMultiTB___024root* vlSelf);
void VconvLayerMultiTB___024root___eval(VconvLayerMultiTB___024root* vlSelf);

void VconvLayerMultiTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VconvLayerMultiTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VconvLayerMultiTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VconvLayerMultiTB___024root___eval_static(&(vlSymsp->TOP));
        VconvLayerMultiTB___024root___eval_initial(&(vlSymsp->TOP));
        VconvLayerMultiTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VconvLayerMultiTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VconvLayerMultiTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VconvLayerMultiTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VconvLayerMultiTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VconvLayerMultiTB___024root___eval_final(VconvLayerMultiTB___024root* vlSelf);

VL_ATTR_COLD void VconvLayerMultiTB::final() {
    VconvLayerMultiTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VconvLayerMultiTB::hierName() const { return vlSymsp->name(); }
const char* VconvLayerMultiTB::modelName() const { return "VconvLayerMultiTB"; }
unsigned VconvLayerMultiTB::threads() const { return 1; }
void VconvLayerMultiTB::prepareClone() const { contextp()->prepareClone(); }
void VconvLayerMultiTB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VconvLayerMultiTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VconvLayerMultiTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VconvLayerMultiTB___024root__trace_init_top(VconvLayerMultiTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VconvLayerMultiTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerMultiTB___024root*>(voidSelf);
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerMultiTB___024root__trace_decl_types(tracep);
    VconvLayerMultiTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerMultiTB___024root__trace_register(VconvLayerMultiTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VconvLayerMultiTB::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VconvLayerMultiTB::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VconvLayerMultiTB___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
