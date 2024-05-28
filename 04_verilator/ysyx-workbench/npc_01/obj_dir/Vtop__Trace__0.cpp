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
        bufp->chgSData(oldp+12,(vlSelf->top__DOT__C_next3),16);
        bufp->chgSData(oldp+13,(vlSelf->top__DOT__Max_next3),16);
        bufp->chgSData(oldp+14,(vlSelf->top__DOT__Min_next3),16);
        bufp->chgSData(oldp+15,(vlSelf->top__DOT__A_next4),16);
        bufp->chgSData(oldp+16,(vlSelf->top__DOT__B_next4),16);
        bufp->chgSData(oldp+17,(vlSelf->top__DOT__C_next4),16);
        bufp->chgSData(oldp+18,(vlSelf->top__DOT__Max_next4),16);
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__Min_next4),16);
        bufp->chgSData(oldp+20,(vlSelf->top__DOT__A_next5),16);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__B_next5),16);
        bufp->chgSData(oldp+22,(vlSelf->top__DOT__C_next5),16);
        bufp->chgSData(oldp+23,(vlSelf->top__DOT__Max_next5),16);
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__Min_next5),16);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__A_next6),16);
        bufp->chgSData(oldp+26,(vlSelf->top__DOT__B_next6),16);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__C_next6),16);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__Max_next6),16);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__Min_next6),16);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__A_next7),16);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__B_next7),16);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__Max_next7),16);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__Min_next7),16);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__div1__DOT__A_reg),16);
        bufp->chgSData(oldp+35,(vlSelf->top__DOT__div1__DOT__B_reg),16);
        bufp->chgSData(oldp+36,(vlSelf->top__DOT__div1__DOT__C_reg),16);
        bufp->chgSData(oldp+37,(vlSelf->top__DOT__div1__DOT__Max_reg),16);
        bufp->chgSData(oldp+38,(vlSelf->top__DOT__div1__DOT__Min_reg),16);
        bufp->chgSData(oldp+39,((0xffffU & ((IData)(vlSelf->top__DOT__div1__DOT__Max_reg) 
                                            + (IData)(vlSelf->top__DOT__div1__DOT__Min_reg)))),16);
        bufp->chgSData(oldp+40,(vlSelf->top__DOT__div1__DOT__Mid_reg),16);
        bufp->chgSData(oldp+41,(vlSelf->top__DOT__div1__DOT__product),16);
        bufp->chgSData(oldp+42,(vlSelf->top__DOT__div2__DOT__A_reg),16);
        bufp->chgSData(oldp+43,(vlSelf->top__DOT__div2__DOT__B_reg),16);
        bufp->chgSData(oldp+44,(vlSelf->top__DOT__div2__DOT__C_reg),16);
        bufp->chgSData(oldp+45,(vlSelf->top__DOT__div2__DOT__Max_reg),16);
        bufp->chgSData(oldp+46,(vlSelf->top__DOT__div2__DOT__Min_reg),16);
        bufp->chgSData(oldp+47,((0xffffU & ((IData)(vlSelf->top__DOT__div2__DOT__Max_reg) 
                                            + (IData)(vlSelf->top__DOT__div2__DOT__Min_reg)))),16);
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__div2__DOT__Mid_reg),16);
        bufp->chgSData(oldp+49,(vlSelf->top__DOT__div2__DOT__product),16);
        bufp->chgSData(oldp+50,(vlSelf->top__DOT__div3__DOT__A_reg),16);
        bufp->chgSData(oldp+51,(vlSelf->top__DOT__div3__DOT__B_reg),16);
        bufp->chgSData(oldp+52,(vlSelf->top__DOT__div3__DOT__C_reg),16);
        bufp->chgSData(oldp+53,(vlSelf->top__DOT__div3__DOT__Max_reg),16);
        bufp->chgSData(oldp+54,(vlSelf->top__DOT__div3__DOT__Min_reg),16);
        bufp->chgSData(oldp+55,((0xffffU & ((IData)(vlSelf->top__DOT__div3__DOT__Max_reg) 
                                            + (IData)(vlSelf->top__DOT__div3__DOT__Min_reg)))),16);
        bufp->chgSData(oldp+56,(vlSelf->top__DOT__div3__DOT__Mid_reg),16);
        bufp->chgSData(oldp+57,(vlSelf->top__DOT__div3__DOT__product),16);
        bufp->chgSData(oldp+58,(vlSelf->top__DOT__div4__DOT__A_reg),16);
        bufp->chgSData(oldp+59,(vlSelf->top__DOT__div4__DOT__B_reg),16);
        bufp->chgSData(oldp+60,(vlSelf->top__DOT__div4__DOT__C_reg),16);
        bufp->chgSData(oldp+61,(vlSelf->top__DOT__div4__DOT__Max_reg),16);
        bufp->chgSData(oldp+62,(vlSelf->top__DOT__div4__DOT__Min_reg),16);
        bufp->chgSData(oldp+63,((0xffffU & ((IData)(vlSelf->top__DOT__div4__DOT__Max_reg) 
                                            + (IData)(vlSelf->top__DOT__div4__DOT__Min_reg)))),16);
        bufp->chgSData(oldp+64,(vlSelf->top__DOT__div4__DOT__Mid_reg),16);
        bufp->chgSData(oldp+65,(vlSelf->top__DOT__div4__DOT__product),16);
        bufp->chgSData(oldp+66,(vlSelf->top__DOT__div5__DOT__A_reg),16);
        bufp->chgSData(oldp+67,(vlSelf->top__DOT__div5__DOT__B_reg),16);
        bufp->chgSData(oldp+68,(vlSelf->top__DOT__div5__DOT__C_reg),16);
        bufp->chgSData(oldp+69,(vlSelf->top__DOT__div5__DOT__Max_reg),16);
        bufp->chgSData(oldp+70,(vlSelf->top__DOT__div5__DOT__Min_reg),16);
        bufp->chgSData(oldp+71,((0xffffU & ((IData)(vlSelf->top__DOT__div5__DOT__Max_reg) 
                                            + (IData)(vlSelf->top__DOT__div5__DOT__Min_reg)))),16);
        bufp->chgSData(oldp+72,(vlSelf->top__DOT__div5__DOT__Mid_reg),16);
        bufp->chgSData(oldp+73,(vlSelf->top__DOT__div5__DOT__product),16);
        bufp->chgSData(oldp+74,(vlSelf->top__DOT__div6__DOT__A_reg),16);
        bufp->chgSData(oldp+75,(vlSelf->top__DOT__div6__DOT__B_reg),16);
        bufp->chgSData(oldp+76,(vlSelf->top__DOT__div6__DOT__C_reg),16);
        bufp->chgSData(oldp+77,(vlSelf->top__DOT__div6__DOT__Max_reg),16);
        bufp->chgSData(oldp+78,(vlSelf->top__DOT__div6__DOT__Min_reg),16);
        bufp->chgSData(oldp+79,((0xffffU & ((IData)(vlSelf->top__DOT__div6__DOT__Max_reg) 
                                            + (IData)(vlSelf->top__DOT__div6__DOT__Min_reg)))),16);
        bufp->chgSData(oldp+80,(vlSelf->top__DOT__div6__DOT__Mid_reg),16);
        bufp->chgSData(oldp+81,(vlSelf->top__DOT__div6__DOT__product),16);
        bufp->chgSData(oldp+82,(vlSelf->top__DOT__div7__DOT__A_reg),16);
        bufp->chgSData(oldp+83,(vlSelf->top__DOT__div7__DOT__B_reg),16);
        bufp->chgSData(oldp+84,(vlSelf->top__DOT__div7__DOT__C_reg),16);
        bufp->chgSData(oldp+85,(vlSelf->top__DOT__div7__DOT__Max_reg),16);
        bufp->chgSData(oldp+86,(vlSelf->top__DOT__div7__DOT__Min_reg),16);
        bufp->chgSData(oldp+87,((0xffffU & ((IData)(vlSelf->top__DOT__div7__DOT__Max_reg) 
                                            + (IData)(vlSelf->top__DOT__div7__DOT__Min_reg)))),16);
        bufp->chgSData(oldp+88,(vlSelf->top__DOT__div7__DOT__Mid_reg),16);
        bufp->chgSData(oldp+89,(vlSelf->top__DOT__div7__DOT__product),16);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__lt1__DOT__count),32);
    }
    bufp->chgBit(oldp+91,(vlSelf->clk));
    bufp->chgBit(oldp+92,(vlSelf->rst));
    bufp->chgSData(oldp+93,(vlSelf->A),16);
    bufp->chgSData(oldp+94,(vlSelf->B),16);
    bufp->chgSData(oldp+95,(vlSelf->C),16);
    bufp->chgCData(oldp+96,(vlSelf->led),8);
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
