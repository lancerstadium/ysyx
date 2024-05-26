// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->top__DOT__A_next1),16);
        bufp->chgSData(oldp+1,(vlSelf->top__DOT__B_next1),16);
        bufp->chgSData(oldp+2,(vlSelf->top__DOT__C_next1),16);
        bufp->chgSData(oldp+3,(vlSelf->top__DOT__Max_next1),16);
        bufp->chgSData(oldp+4,(vlSelf->top__DOT__Min_next1),16);
        bufp->chgSData(oldp+5,(vlSelf->top__DOT__A_next2),16);
        bufp->chgSData(oldp+6,(vlSelf->top__DOT__B_next2),16);
        bufp->chgSData(oldp+7,(vlSelf->top__DOT__C_next2),16);
        bufp->chgSData(oldp+8,(vlSelf->top__DOT__Max_next2),16);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__Min_next2),16);
        bufp->chgSData(oldp+10,(vlSelf->top__DOT__A_next3),16);
        bufp->chgSData(oldp+11,(vlSelf->top__DOT__B_next3),16);
        bufp->chgSData(oldp+12,(vlSelf->top__DOT__Max_next3),16);
        bufp->chgSData(oldp+13,(vlSelf->top__DOT__Min_next3),16);
        bufp->chgSData(oldp+14,(vlSelf->top__DOT__div1__DOT__A_reg),16);
        bufp->chgSData(oldp+15,(vlSelf->top__DOT__div1__DOT__B_reg),16);
        bufp->chgSData(oldp+16,(vlSelf->top__DOT__div1__DOT__C_reg),16);
        bufp->chgSData(oldp+17,(vlSelf->top__DOT__div1__DOT__Max_reg),16);
        bufp->chgSData(oldp+18,(vlSelf->top__DOT__div1__DOT__Min_reg),16);
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__div1__DOT__half_max),16);
        bufp->chgSData(oldp+20,(vlSelf->top__DOT__div1__DOT__product),16);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__div2__DOT__A_reg),16);
        bufp->chgSData(oldp+22,(vlSelf->top__DOT__div2__DOT__B_reg),16);
        bufp->chgSData(oldp+23,(vlSelf->top__DOT__div2__DOT__C_reg),16);
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__div2__DOT__Max_reg),16);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__div2__DOT__Min_reg),16);
        bufp->chgSData(oldp+26,(vlSelf->top__DOT__div2__DOT__half_max),16);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__div2__DOT__product),16);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__div3__DOT__A_reg),16);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__div3__DOT__B_reg),16);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__div3__DOT__C_reg),16);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__div3__DOT__Max_reg),16);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__div3__DOT__Min_reg),16);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__div3__DOT__half_max),16);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__div3__DOT__product),16);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__lt1__DOT__count),32);
    }
    bufp->chgBit(oldp+36,(vlSelf->clk));
    bufp->chgBit(oldp+37,(vlSelf->rst));
    bufp->chgSData(oldp+38,(vlSelf->A),16);
    bufp->chgSData(oldp+39,(vlSelf->B),16);
    bufp->chgSData(oldp+40,(vlSelf->C),16);
    bufp->chgCData(oldp+41,(vlSelf->led),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
