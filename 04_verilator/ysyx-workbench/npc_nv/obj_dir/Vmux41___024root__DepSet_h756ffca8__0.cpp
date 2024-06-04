// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41.h for the primary calling header

#include "Vmux41__pch.h"
#include "Vmux41___024root.h"

void Vmux41___024root___ico_sequent__TOP__0(Vmux41___024root* vlSelf);

void Vmux41___024root___eval_ico(Vmux41___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmux41___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vmux41__ConstPool__TABLE_h3af4a976_0;

VL_INLINE_OPT void Vmux41___024root___ico_sequent__TOP__0(Vmux41___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->a) << 2U) | (IData)(vlSelf->s));
    vlSelf->y = Vmux41__ConstPool__TABLE_h3af4a976_0
        [__Vtableidx1];
}

void Vmux41___024root___eval_triggers__ico(Vmux41___024root* vlSelf);

bool Vmux41___024root___eval_phase__ico(Vmux41___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmux41___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vmux41___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmux41___024root___eval_act(Vmux41___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_act\n"); );
}

void Vmux41___024root___eval_nba(Vmux41___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_nba\n"); );
}

void Vmux41___024root___eval_triggers__act(Vmux41___024root* vlSelf);

bool Vmux41___024root___eval_phase__act(Vmux41___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmux41___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmux41___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmux41___024root___eval_phase__nba(Vmux41___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmux41___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41___024root___dump_triggers__ico(Vmux41___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41___024root___dump_triggers__nba(Vmux41___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41___024root___dump_triggers__act(Vmux41___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux41___024root___eval(Vmux41___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vmux41___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/mux41.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmux41___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmux41___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/mux41.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmux41___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/mux41.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmux41___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmux41___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmux41___024root___eval_debug_assertions(Vmux41___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->s & 0xfcU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
