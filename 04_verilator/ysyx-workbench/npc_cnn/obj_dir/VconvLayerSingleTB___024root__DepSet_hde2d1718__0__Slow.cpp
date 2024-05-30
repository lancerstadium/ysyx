// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerSingleTB.h for the primary calling header

#include "VconvLayerSingleTB__pch.h"
#include "VconvLayerSingleTB__Syms.h"
#include "VconvLayerSingleTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__stl(VconvLayerSingleTB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_triggers__stl(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VconvLayerSingleTB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VconvLayerSingleTB___024root___stl_sequent__TOP__0(VconvLayerSingleTB___024root* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf);

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
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU));
        VconvLayerSingleTB_convUnit__D10___stl_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0((&vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU));
    }
}

VL_ATTR_COLD void VconvLayerSingleTB___024root___stl_sequent__TOP__0(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0;
    VL_ZERO_W(224, convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0);
    // Body
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address = 0U;
    if ((0U == (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel))) {
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c = 0xeU;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x200U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x200U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x200U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x200U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x200U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x200U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x200U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x200U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x200U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x200U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x200U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x200U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x200U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x200U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x200U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x400U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x400U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x400U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x400U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x400U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x400U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x400U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x400U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x400U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x400U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x400U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x400U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x400U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x400U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x400U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x600U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x600U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x600U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x600U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x600U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x600U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x600U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x600U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x600U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x600U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x600U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x600U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x600U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x600U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x600U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x800U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x800U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x800U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x800U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x800U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x800U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x800U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x800U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x800U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x800U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x800U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x800U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x800U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x800U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x800U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x10U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x10U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x10U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x10U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x10U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x10U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x10U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x10U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x10U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x10U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x210U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x210U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x210U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x210U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x210U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x210U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x210U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x210U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x210U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x210U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x210U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x210U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x210U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x210U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x210U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x410U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x410U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x410U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x410U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x410U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x410U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x410U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x410U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x410U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x410U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x410U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x410U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x410U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x410U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x410U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x610U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x610U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x610U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x610U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x610U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x610U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x610U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x610U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x610U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x610U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x610U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x610U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x610U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x610U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x610U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x810U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x810U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x810U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x810U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x810U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x810U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x810U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x810U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x810U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x810U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x810U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x810U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x810U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x810U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x810U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x20U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x20U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x20U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x20U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x20U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x20U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x20U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x20U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x20U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x20U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x20U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x20U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x220U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x220U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x220U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x220U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x220U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x220U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x220U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x220U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x220U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x220U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x220U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x220U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x220U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x220U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x220U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x420U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x420U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x420U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x420U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x420U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x420U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x420U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x420U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x420U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x420U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x420U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x420U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x420U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x420U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x420U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x620U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x620U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x620U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x620U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x620U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x620U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x620U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x620U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x620U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x620U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x620U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x620U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x620U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x620U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x620U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x820U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x820U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x820U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x820U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x820U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x820U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x820U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x820U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x820U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x820U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x820U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x820U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x820U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x820U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x820U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x30U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x30U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x30U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x30U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x30U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x30U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x30U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x30U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x30U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x30U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x30U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x30U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x230U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x230U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x230U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x230U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x230U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x230U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x230U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x230U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x230U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x230U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x230U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x230U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x230U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x230U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x230U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x430U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x430U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x430U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x430U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x430U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x430U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x430U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x430U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x430U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x430U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x430U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x430U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x430U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x430U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x430U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x630U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x630U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x630U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x630U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x630U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x630U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x630U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x630U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x630U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x630U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x630U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x630U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x630U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x630U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x630U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x830U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x830U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x830U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x830U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x830U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x830U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x830U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x830U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x830U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x830U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x830U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x830U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x830U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x830U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x830U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x40U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x40U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x40U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x40U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x40U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x40U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x40U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x40U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x40U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x40U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x40U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x40U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x40U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x40U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x40U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x240U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x240U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x240U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x240U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x240U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x240U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x240U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x240U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x240U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x240U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x240U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x240U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x240U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x240U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x240U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x440U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x440U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x440U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x440U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x440U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x440U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x440U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x440U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x440U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x440U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x440U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x440U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x440U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x440U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x440U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x640U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x640U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x640U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x640U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x640U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x640U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x640U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x640U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x640U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x640U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x640U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x640U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x640U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x640U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x640U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x840U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x840U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x840U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x840U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x840U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x840U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x840U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x840U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x840U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x840U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x840U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x840U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x840U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x840U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x840U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x50U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x50U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x50U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x50U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x50U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x50U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x50U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x50U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x50U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x50U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x50U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x50U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x50U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x50U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x50U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x250U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x250U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x250U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x250U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x250U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x250U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x250U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x250U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x250U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x250U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x250U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x250U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x250U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x250U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x250U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x450U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x450U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x450U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x450U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x450U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x450U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x450U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x450U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x450U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x450U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x450U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x450U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x450U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x450U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x450U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x650U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x650U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x650U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x650U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x650U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x650U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x650U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x650U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x650U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x650U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x650U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x650U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x650U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x650U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x650U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x850U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x850U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x850U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x850U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x850U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x850U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x850U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x850U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x850U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x850U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x850U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x850U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x850U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x850U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x850U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x60U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x60U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x60U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x60U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x60U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x60U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x60U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x60U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x60U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x60U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x60U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x60U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x60U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x60U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x60U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x260U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x260U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x260U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x260U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x260U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x260U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x260U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x260U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x260U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x260U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x260U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x260U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x260U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x260U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x260U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x460U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x460U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x460U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x460U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x460U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x460U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x460U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x460U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x460U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x460U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x460U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x460U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x460U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x460U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x460U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x660U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x660U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x660U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x660U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x660U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x660U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x660U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x660U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x660U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x660U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x660U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x660U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x660U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x660U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x660U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x860U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x860U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x860U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x860U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x860U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x860U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x860U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x860U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x860U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x860U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x860U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x860U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x860U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x860U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x860U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x70U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x70U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x70U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x70U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x70U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x70U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x70U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x70U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x70U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x70U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x70U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x70U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x70U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x70U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x70U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x270U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x270U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x270U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x270U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x270U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x270U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x270U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x270U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x270U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x270U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x270U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x270U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x270U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x270U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x270U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x470U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x470U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x470U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x470U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x470U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x470U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x470U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x470U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x470U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x470U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x470U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x470U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x470U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x470U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x470U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x670U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x670U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x670U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x670U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x670U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x670U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x670U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x670U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x670U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x670U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x670U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x670U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x670U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x670U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x670U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x870U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x870U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x870U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x870U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x870U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x870U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x870U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x870U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x870U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x870U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x870U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x870U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x870U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x870U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x870U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x80U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x80U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x80U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x80U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x80U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x80U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x80U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x80U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x80U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x80U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x80U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x80U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x80U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x80U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x80U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x280U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x280U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x280U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x280U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x280U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x280U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x280U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x280U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x280U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x280U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x280U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x280U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x280U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x280U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x280U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x480U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x480U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x480U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x480U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x480U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x480U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x480U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x480U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x480U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x480U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x480U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x480U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x480U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x480U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x480U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x680U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x680U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x680U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x680U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x680U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x680U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x680U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x680U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x680U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x680U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x680U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x680U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x680U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x680U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x680U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x880U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x880U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x880U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x880U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x880U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x880U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x880U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x880U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x880U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x880U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x880U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x880U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x880U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x880U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x880U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x90U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x90U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x90U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x90U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x90U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x90U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x90U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x90U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x90U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x90U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x90U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x90U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x90U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x90U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x90U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x290U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x290U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x290U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x290U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x290U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x290U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x290U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x290U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x290U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x290U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x290U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x290U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x290U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x290U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x290U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x490U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x490U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x490U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x490U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x490U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x490U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x490U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x490U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x490U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x490U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x490U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x490U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x490U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x490U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x490U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x690U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x690U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x690U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x690U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x690U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x690U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x690U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x690U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x690U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x690U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x690U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x690U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x690U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x690U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x690U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x890U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x890U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x890U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x890U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x890U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x890U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x890U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x890U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x890U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x890U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x890U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x890U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x890U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x890U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x890U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xa0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xa0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xa0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0xa0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0xa0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xa0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xa0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xa0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0xa0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0xa0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0xa0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xa0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0xa0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xa0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0xa0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x2a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x2a0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x2a0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x2a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x2a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x2a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x2a0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x4a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x4a0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x4a0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x4a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x4a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x4a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x4a0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x6a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x6a0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x6a0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x6a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x6a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x6a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x6a0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x8a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x8a0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x8a0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x8a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x8a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x8a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x8a0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xb0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xb0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xb0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0xb0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0xb0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xb0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xb0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xb0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0xb0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0xb0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0xb0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xb0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0xb0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xb0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0xb0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x2b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x2b0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x2b0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x2b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x2b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x2b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x2b0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x4b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x4b0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x4b0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x4b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x4b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x4b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x4b0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x6b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x6b0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x6b0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x6b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x6b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x6b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x6b0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x8b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x8b0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x8b0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x8b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x8b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x8b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x8b0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xc0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xc0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xc0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0xc0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0xc0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xc0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xc0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xc0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0xc0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0xc0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0xc0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xc0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0xc0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xc0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0xc0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2c0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2c0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x2c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x2c0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2c0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2c0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x2c0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x2c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x2c0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x2c0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x2c0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4c0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4c0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x4c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x4c0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4c0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4c0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x4c0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x4c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x4c0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x4c0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x4c0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6c0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6c0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x6c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x6c0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6c0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6c0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x6c0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x6c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x6c0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x6c0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x6c0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8c0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8c0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x8c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x8c0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8c0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8c0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x8c0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x8c0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x8c0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x8c0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8c0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x8c0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xd0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xd0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xd0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0xd0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0xd0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xd0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xd0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xd0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0xd0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0xd0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0xd0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xd0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0xd0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xd0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0xd0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2d0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2d0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x2d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x2d0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2d0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2d0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x2d0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x2d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x2d0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x2d0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x2d0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4d0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4d0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x4d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x4d0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4d0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4d0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x4d0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x4d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x4d0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x4d0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x4d0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6d0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6d0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x6d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x6d0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6d0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6d0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x6d0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x6d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x6d0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x6d0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x6d0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8d0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8d0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x8d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x8d0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8d0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8d0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x8d0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x8d0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x8d0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x8d0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8d0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x8d0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
    } else {
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c = 0x1cU;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xe0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xe0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xe0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0xe0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0xe0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xe0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xe0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xe0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0xe0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0xe0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0xe0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xe0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0xe0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xe0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0xe0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2e0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2e0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x2e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x2e0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2e0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2e0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x2e0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x2e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x2e0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x2e0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x2e0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4e0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4e0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x4e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x4e0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4e0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4e0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x4e0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x4e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x4e0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x4e0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x4e0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6e0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6e0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x6e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x6e0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6e0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6e0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x6e0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x6e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x6e0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x6e0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x6e0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8e0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8e0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x8e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x8e0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8e0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8e0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x8e0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x8e0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x8e0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x8e0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8e0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x8e0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xf0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xf0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xf0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0xf0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0xf0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0xf0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0xf0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0xf0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0xf0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0xf0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0xf0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xf0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0xf0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0xf0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0xf0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2f0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2f0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x2f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x2f0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x2f0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x2f0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x2f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x2f0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x2f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x2f0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x2f0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x2f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x2f0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4f0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4f0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x4f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x4f0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x4f0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x4f0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x4f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x4f0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x4f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x4f0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x4f0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x4f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x4f0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6f0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6f0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x6f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x6f0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x6f0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x6f0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x6f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x6f0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x6f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x6f0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x6f0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x6f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x6f0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8f0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8f0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x8f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x8f0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x8f0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x8f0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x8f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x8f0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x8f0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x8f0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x8f0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x8f0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x8f0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x100U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x100U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x100U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x100U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x100U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x100U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x100U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x100U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x100U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x100U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x100U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x100U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x100U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x100U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x100U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x300U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x300U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x300U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x300U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x300U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x300U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x300U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x300U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x300U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x300U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x300U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x300U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x300U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x300U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x300U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x500U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x500U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x500U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x500U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x500U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x500U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x500U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x500U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x500U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x500U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x500U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x500U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x500U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x500U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x500U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x700U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x700U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x700U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x700U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x700U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x700U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x700U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x700U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x700U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x700U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x700U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x700U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x700U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x700U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x700U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x900U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x900U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x900U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x900U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x900U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x900U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x900U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x900U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x900U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x900U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x900U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x900U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x900U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x900U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x900U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x110U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x110U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x110U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x110U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x110U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x110U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x110U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x110U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x110U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x110U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x110U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x110U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x110U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x110U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x110U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x310U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x310U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x310U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x310U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x310U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x310U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x310U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x310U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x310U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x310U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x310U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x310U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x310U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x310U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x310U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x510U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x510U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x510U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x510U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x510U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x510U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x510U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x510U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x510U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x510U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x510U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x510U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x510U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x510U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x510U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x710U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x710U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x710U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x710U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x710U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x710U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x710U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x710U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x710U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x710U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x710U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x710U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x710U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x710U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x710U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x910U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x910U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x910U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x910U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x910U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x910U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x910U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x910U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x910U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x910U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x910U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x910U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x910U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x910U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x910U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x120U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x120U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x120U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x120U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x120U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x120U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x120U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x120U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x120U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x120U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x120U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x120U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x120U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x120U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x120U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x320U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x320U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x320U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x320U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x320U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x320U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x320U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x320U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x320U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x320U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x320U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x320U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x320U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x320U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x320U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x520U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x520U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x520U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x520U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x520U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x520U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x520U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x520U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x520U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x520U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x520U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x520U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x520U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x520U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x520U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x720U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x720U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x720U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x720U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x720U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x720U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x720U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x720U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x720U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x720U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x720U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x720U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x720U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x720U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x720U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x920U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x920U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x920U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x920U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x920U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x920U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x920U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x920U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x920U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x920U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x920U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x920U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x920U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x920U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x920U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x130U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x130U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x130U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x130U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x130U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x130U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x130U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x130U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x130U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x130U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x130U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x130U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x130U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x130U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x130U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x330U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x330U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x330U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x330U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x330U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x330U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x330U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x330U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x330U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x330U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x330U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x330U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x330U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x330U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x330U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x530U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x530U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x530U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x530U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x530U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x530U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x530U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x530U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x530U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x530U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x530U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x530U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x530U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x530U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x530U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x730U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x730U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x730U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x730U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x730U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x730U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x730U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x730U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x730U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x730U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x730U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x730U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x730U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x730U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x730U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x930U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x930U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x930U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x930U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x930U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x930U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x930U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x930U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x930U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x930U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x930U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x930U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x930U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x930U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x930U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x140U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x140U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x140U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x140U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x140U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x140U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x140U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x140U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x140U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x140U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x140U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x140U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x140U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x140U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x140U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x340U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x340U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x340U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x340U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x340U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x340U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x340U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x340U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x340U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x340U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x340U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x340U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x340U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x340U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x340U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x540U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x540U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x540U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x540U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x540U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x540U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x540U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x540U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x540U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x540U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x540U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x540U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x540U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x540U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x540U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x740U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x740U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x740U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x740U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x740U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x740U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x740U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x740U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x740U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x740U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x740U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x740U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x740U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x740U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x740U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x940U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x940U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x940U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x940U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x940U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x940U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x940U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x940U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x940U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x940U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x940U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x940U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x940U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x940U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x940U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x150U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x150U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x150U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x150U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x150U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x150U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x150U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x150U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x150U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x150U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x150U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x150U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x150U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x150U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x150U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x350U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x350U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x350U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x350U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x350U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x350U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x350U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x350U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x350U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x350U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x350U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x350U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x350U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x350U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x350U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x550U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x550U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x550U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x550U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x550U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x550U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x550U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x550U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x550U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x550U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x550U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x550U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x550U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x550U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x550U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x750U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x750U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x750U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x750U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x750U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x750U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x750U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x750U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x750U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x750U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x750U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x750U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x750U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x750U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x750U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x950U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x950U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x950U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x950U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x950U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x950U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x950U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x950U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x950U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x950U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x950U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x950U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x950U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x950U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x950U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x160U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x160U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x160U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x160U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x160U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x160U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x160U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x160U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x160U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x160U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x160U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x160U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x160U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x160U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x160U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x360U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x360U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x360U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x360U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x360U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x360U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x360U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x360U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x360U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x360U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x360U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x360U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x360U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x360U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x360U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x560U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x560U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x560U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x560U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x560U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x560U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x560U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x560U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x560U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x560U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x560U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x560U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x560U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x560U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x560U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x760U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x760U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x760U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x760U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x760U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x760U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x760U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x760U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x760U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x760U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x760U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x760U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x760U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x760U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x760U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x960U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x960U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x960U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x960U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x960U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x960U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x960U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x960U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x960U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x960U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x960U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x960U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x960U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x960U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x960U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x170U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x170U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x170U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x170U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x170U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x170U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x170U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x170U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x170U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x170U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x170U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x170U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x170U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x170U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x170U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x370U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x370U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x370U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x370U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x370U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x370U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x370U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x370U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x370U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x370U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x370U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x370U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x370U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x370U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x370U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x570U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x570U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x570U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x570U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x570U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x570U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x570U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x570U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x570U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x570U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x570U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x570U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x570U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x570U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x570U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x770U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x770U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x770U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x770U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x770U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x770U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x770U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x770U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x770U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x770U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x770U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x770U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x770U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x770U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x770U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x970U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x970U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x970U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x970U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x970U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x970U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x970U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x970U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x970U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x970U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x970U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x970U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x970U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x970U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x970U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x180U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x180U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x180U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x180U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x180U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x180U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x180U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x180U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x180U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x180U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x180U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x180U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x180U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x180U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x180U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x380U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x380U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x380U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x380U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x380U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x380U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x380U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x380U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x380U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x380U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x380U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x380U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x380U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x380U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x380U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x580U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x580U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x580U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x580U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x580U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x580U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x580U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x580U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x580U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x580U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x580U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x580U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x580U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x580U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x580U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x780U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x780U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x780U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x780U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x780U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x780U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x780U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x780U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x780U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x780U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x780U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x780U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x780U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x780U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x780U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x980U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x980U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x980U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x980U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x980U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x980U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x980U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x980U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x980U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x980U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x980U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x980U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x980U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x980U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x980U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x190U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x190U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x190U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x190U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x190U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x190U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x190U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x190U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x190U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x190U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x190U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x190U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x190U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x190U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x190U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x390U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x390U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x390U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x390U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x390U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x390U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x390U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x390U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x390U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x390U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x390U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x390U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x390U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x390U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x390U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x590U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x590U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x590U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x590U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x590U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x590U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x590U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x590U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x590U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x590U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x590U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x590U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x590U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x590U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x590U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x790U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x790U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x790U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x790U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x790U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x790U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x790U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x790U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x790U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x790U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x790U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x790U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x790U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x790U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x790U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x990U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x990U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x990U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x990U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x990U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x990U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x990U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x990U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x990U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x990U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x990U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x990U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x990U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x990U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x990U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x1a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x1a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x1a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x1a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x1a0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x1a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x1a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x1a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x1a0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x1a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x1a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x1a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x1a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x1a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x1a0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x3a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x3a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x3a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x3a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x3a0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x3a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x3a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x3a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x3a0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x3a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x3a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x3a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x3a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x3a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x3a0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x5a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x5a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x5a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x5a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x5a0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x5a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x5a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x5a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x5a0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x5a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x5a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x5a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x5a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x5a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x5a0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x7a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x7a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x7a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x7a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x7a0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x7a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x7a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x7a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x7a0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x7a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x7a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x7a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x7a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x7a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x7a0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x9a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x9a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x9a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x9a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x9a0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x9a0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x9a0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x9a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x9a0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x9a0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x9a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x9a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x9a0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x9a0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x9a0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x1b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x1b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x1b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x1b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x1b0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x1b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x1b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x1b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x1b0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x1b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x1b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x1b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x1b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x1b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x1b0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x3b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x3b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x3b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x3b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x3b0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x3b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x3b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x3b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x3b0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x3b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x3b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x3b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x3b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x3b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x3b0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x5b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x5b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x5b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x5b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x5b0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x5b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x5b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x5b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x5b0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x5b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x5b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x5b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x5b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x5b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x5b0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x7b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x7b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x7b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x7b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x7b0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x7b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x7b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x7b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x7b0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x7b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x7b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x7b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x7b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x7b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x7b0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[0U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x9b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x9b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x9b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  (0x1ffU & (((IData)(0x3fb0U) - ((IData)(0x9b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                             >> 5U))] >> (0x1fU & ((IData)(0x3fb0U) 
                                                   - 
                                                   ((IData)(0x9b0U) 
                                                    + 
                                                    VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[1U] 
            = (((0U == (0x1fU & ((IData)(0x3fb0U) - 
                                 ((IData)(0x9b0U) + 
                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                 ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x3fb0U) 
                                                    - 
                                                    ((IData)(0x9b0U) 
                                                     + 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x3fb0U) 
                                                  - 
                                                  ((IData)(0x9b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
               | (vlSelf->convLayerSingleTB__DOT__img[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x3fb0U) 
                                             - ((IData)(0x9b0U) 
                                                + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x3fb0U) - ((IData)(0x9b0U) 
                                                   + 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))));
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1[2U] 
            = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fb0U) 
                                            - ((IData)(0x9b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))
                            ? 0U : (vlSelf->convLayerSingleTB__DOT__img[
                                    ((IData)(3U) + 
                                     (0x1ffU & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x9b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x3fb0U) 
                                            - ((IData)(0x9b0U) 
                                               + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))))))) 
                          | (vlSelf->convLayerSingleTB__DOT__img[
                             ((IData)(2U) + (0x1ffU 
                                             & (((IData)(0x3fb0U) 
                                                 - 
                                                 ((IData)(0x9b0U) 
                                                  + 
                                                  VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U))) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0x3fb0U) 
                                          - ((IData)(0x9b0U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum), 9U)))))));
        if ((0x15dfU >= (0x1fffU & ((IData)(0x1590U) 
                                    - ((IData)(0x50U) 
                                       * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WW(5600,80,(0x1fffU & ((IData)(0x1590U) 
                                                - ((IData)(0x50U) 
                                                   * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
    }
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[0U] 
        = (((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res) 
            << 0x10U) | (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.res));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[1U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res) 
                             << 0x10U));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[2U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res) 
                             << 0x10U));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[3U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res) 
                             << 0x10U));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[4U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res)))))) 
                             << 0x10U));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[5U] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[6U] 
        = (((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.res) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res))))) 
                                  >> 0x20U)) >> 0x10U));
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[0U] 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[0U];
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[1U] 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[1U];
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[2U] 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[2U];
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[3U] 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[3U];
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[4U] 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[4U];
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[5U] 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[5U];
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[6U] 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes[6U];
    if ((0x30ffU >= (0x3fffU & ((IData)(0x3020U) - 
                                ((IData)(0xe0U) * vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt))))) {
        VL_ASSIGNSEL_WW(12544,224,(0x3fffU & ((IData)(0x3020U) 
                                              - ((IData)(0xe0U) 
                                                 * vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt))), vlSelf->convLayerSingleTB__DOT__res, convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h9d72c2ce__0);
    }
}
