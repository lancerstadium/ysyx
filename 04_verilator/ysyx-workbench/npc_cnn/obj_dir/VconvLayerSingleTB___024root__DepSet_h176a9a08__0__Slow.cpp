// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerSingleTB.h for the primary calling header

#include "VconvLayerSingleTB__pch.h"
#include "VconvLayerSingleTB___024root.h"

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_static(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_initial__TOP(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__i = 3U;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__k = 1U;
}

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_final(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__stl(VconvLayerSingleTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VconvLayerSingleTB___024root___eval_phase__stl(VconvLayerSingleTB___024root* vlSelf);

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_settle(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VconvLayerSingleTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/conv/convLayerSingleTB.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VconvLayerSingleTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__stl(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvLayerSingleTB___024root___stl_sequent__TOP__0(VconvLayerSingleTB___024root* vlSelf);

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_stl(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VconvLayerSingleTB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VconvLayerSingleTB___024root___stl_sequent__TOP__0(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0;
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0 = 0;
    // Body
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes;
    if ((0x8fU >= (0xffU & ((IData)(0x80U) - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt, 4U))))) {
        VL_ASSIGNSEL_WI(144,16,(0xffU & ((IData)(0x80U) 
                                         - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt, 4U))), vlSelf->convLayerSingleTB__DOT__res, convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0);
    }
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address = 0U;
    if ((0U == (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel))) {
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c = 1U;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x50U) 
                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x50U) 
                                                                * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x50U) 
                                                  * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x50U) 
                                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x50U) 
                                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x50U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x50U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x50U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x50U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x50U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x50U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0xa0U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0xa0U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0xa0U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xa0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0xa0U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0xa0U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xa0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0xa0U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xa0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
    } else {
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c = 3U;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x10U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x10U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x10U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x10U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x10U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x10U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x10U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x10U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x60U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x60U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x60U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x60U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x60U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x60U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x60U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x60U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x60U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0xb0U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0xb0U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0xb0U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xb0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0xb0U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0xb0U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xb0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0xb0U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xb0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x20U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x20U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x20U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x20U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x20U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x20U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x70U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x70U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x70U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x70U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x70U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x70U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x70U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x70U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x70U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0xc0U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0xc0U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0xc0U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xc0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0xc0U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0xc0U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xc0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0xc0U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xc0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
    }
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed 
        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed), (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed)));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__mulC 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__mulC;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed 
        = (0xffffU & ((IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed) 
                      + (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed)));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__addC 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed;
}

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_triggers__stl(VconvLayerSingleTB___024root* vlSelf);

VL_ATTR_COLD bool VconvLayerSingleTB___024root___eval_phase__stl(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VconvLayerSingleTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VconvLayerSingleTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__act(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge convLayerSingleTB.clk or posedge convLayerSingleTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge convLayerSingleTB.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge convLayerSingleTB.UUT.gRst or posedge convLayerSingleTB.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__nba(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge convLayerSingleTB.clk or posedge convLayerSingleTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge convLayerSingleTB.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge convLayerSingleTB.UUT.gRst or posedge convLayerSingleTB.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvLayerSingleTB___024root___ctor_var_reset(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->convLayerSingleTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->convLayerSingleTB__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(400, vlSelf->convLayerSingleTB__DOT__img);
    VL_RAND_RESET_W(144, vlSelf->convLayerSingleTB__DOT__fit);
    vlSelf->convLayerSingleTB__DOT__tmp = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(144, vlSelf->convLayerSingleTB__DOT__res);
    vlSelf->convLayerSingleTB__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__clkCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(144, vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst = VL_RAND_RESET_I(1);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum = VL_RAND_RESET_I(6);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel = VL_RAND_RESET_I(6);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0 = VL_RAND_RESET_Q(48);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 = VL_RAND_RESET_Q(48);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__UUT__DOT__gRst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
