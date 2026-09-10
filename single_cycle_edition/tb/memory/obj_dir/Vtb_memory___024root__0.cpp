// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory.h for the primary calling header

#include "Vtb_memory__pch.h"

VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__0(Vtb_memory___024root* vlSelf);
VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__1(Vtb_memory___024root* vlSelf);
VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__2(Vtb_memory___024root* vlSelf);

void Vtb_memory___024root___eval_initial(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_memory___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_memory___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_memory___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb_memory___024root____VbeforeTrig_he04316d7__0(Vtb_memory___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__0(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_memory__DOT__reset = 0U;
    vlSelfRef.tb_memory__DOT__addy = 0U;
    vlSelfRef.tb_memory__DOT__wd = 0U;
    vlSelfRef.tb_memory__DOT__w_enable = 0U;
    Vtb_memory___024root____VbeforeTrig_he04316d7__0(vlSelf, 
                                                     "@(posedge tb_memory.clk)");
    co_await vlSelfRef.__VtrigSched_he04316d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_memory.clk)", 
                                                         "tb_memory.sv", 
                                                         28);
    vlSelfRef.tb_memory__DOT__reset = 1U;
    Vtb_memory___024root____VbeforeTrig_he04316d7__0(vlSelf, 
                                                     "@(posedge tb_memory.clk)");
    co_await vlSelfRef.__VtrigSched_he04316d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_memory.clk)", 
                                                         "tb_memory.sv", 
                                                         30);
    co_return;
}

void Vtb_memory___024root____VbeforeTrig_h615b2af3__0(Vtb_memory___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__1(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        VL_WRITEF_NX("     .---------.     \n    /   _____   \\   \n   |   /     \\  |   \n   |  |  (o)  |  |   \n   |   \\_____/  |   \n   |             |   \n   |   ___   ___ |   \n   |  |   | |   ||   \n   `__`   `_`   `_`  \n\n    SUSPECTED...     \n",0);
        Vtb_memory___024root____VbeforeTrig_h615b2af3__0(vlSelf, 
                                                         "@(posedge tb_memory.reset)");
        co_await vlSelfRef.__VtrigSched_h615b2af3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_memory.reset)", 
                                                             "tb_memory.sv", 
                                                             58);
        Vtb_memory___024root____VbeforeTrig_he04316d7__0(vlSelf, 
                                                         "@(posedge tb_memory.clk)");
        co_await vlSelfRef.__VtrigSched_he04316d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_memory.clk)", 
                                                             "tb_memory.sv", 
                                                             59);
        if ((0U == vlSelfRef.tb_memory__DOT__rd)) {
            VL_WRITEF_NX("START, SUCCESS\n",0);
        } else {
            VL_WRITEF_NX("START, FAIL: rd = %b\n",0,
                         32,vlSelfRef.tb_memory__DOT__rd);
            goto __Vlabel0;
        }
        vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i)) {
            Vtb_memory___024root____VbeforeTrig_he04316d7__0(vlSelf, 
                                                             "@(posedge tb_memory.clk)");
            co_await vlSelfRef.__VtrigSched_he04316d7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 70);
            vlSelfRef.tb_memory__DOT__addy = VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i);
            vlSelfRef.tb_memory__DOT__wd = vlSelfRef.tb_memory__DOT__test_data
                [(3U & vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i)];
            vlSelfRef.tb_memory__DOT__w_enable = 1U;
            Vtb_memory___024root____VbeforeTrig_he04316d7__0(vlSelf, 
                                                             "@(posedge tb_memory.clk)");
            co_await vlSelfRef.__VtrigSched_he04316d7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 75);
            vlSelfRef.tb_memory__DOT__w_enable = 0U;
            Vtb_memory___024root____VbeforeTrig_he04316d7__0(vlSelf, 
                                                             "@(posedge tb_memory.clk)");
            co_await vlSelfRef.__VtrigSched_he04316d7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 78);
            VL_WRITEF_NX("rd: %x\n",0,32,vlSelfRef.tb_memory__DOT__rd);
            if ((vlSelfRef.tb_memory__DOT__rd == vlSelfRef.tb_memory__DOT__test_data
                 [(3U & vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i)])) {
                VL_WRITEF_NX("WRITE/READ SUCCESS\n",0);
            } else {
                VL_WRITEF_NX("WRITE/READ FAIL: rd = %x\n",0,
                             32,vlSelfRef.tb_memory__DOT__rd);
            }
            vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i);
        }
        vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.tb_memory__DOT__addy = VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i);
            vlSelfRef.tb_memory__DOT__wd = ((IData)(0x00000064U) 
                                            + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i);
            vlSelfRef.tb_memory__DOT__w_enable = 1U;
            VL_WRITEF_NX("WRITING %10# to %b!\n",0,
                         32,vlSelfRef.tb_memory__DOT__wd,
                         32,vlSelfRef.tb_memory__DOT__addy);
            Vtb_memory___024root____VbeforeTrig_he04316d7__0(vlSelf, 
                                                             "@(posedge tb_memory.clk)");
            co_await vlSelfRef.__VtrigSched_he04316d7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 94);
            vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i);
        }
        vlSelfRef.tb_memory__DOT__w_enable = 0U;
        vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i)) {
            vlSelfRef.tb_memory__DOT__addy = VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i);
            Vtb_memory___024root____VbeforeTrig_he04316d7__0(vlSelf, 
                                                             "@(posedge tb_memory.clk)");
            co_await vlSelfRef.__VtrigSched_he04316d7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 101);
            if ((vlSelfRef.tb_memory__DOT__rd == ((IData)(0x00000064U) 
                                                  + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i))) {
                VL_WRITEF_NX("READ/WRITE SUCESSS: %10#\n",0,
                             32,vlSelfRef.tb_memory__DOT__rd);
            } else {
                VL_WRITEF_NX("READ/WRITE FAIL: %10#\n",0,
                             32,vlSelfRef.tb_memory__DOT__rd);
            }
            vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i);
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__2(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_memory.sv", 
                                             19);
        vlSelfRef.tb_memory__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_memory__DOT__clk)));
    }
    co_return;
}

void Vtb_memory___024root___eval_triggers_vec__act(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_triggers_vec__act\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                 (((vlSelfRef.__VdynSched.evaluate() 
                                                    << 3U) 
                                                   | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U)) 
                                                  | ((((IData)(vlSelfRef.tb_memory__DOT__reset) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__reset__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb_memory__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0 
        = vlSelfRef.tb_memory__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__reset__0 
        = vlSelfRef.tb_memory__DOT__reset;
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vtb_memory___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_memory___024root___act_comb__TOP__0(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___act_comb__TOP__0\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_memory__DOT__rd = vlSelfRef.tb_memory__DOT__DUT__DOT__mem
        [(0x0000003fU & (vlSelfRef.tb_memory__DOT__addy 
                         >> 2U))];
}

void Vtb_memory___024root___eval_act(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_act\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.tb_memory__DOT__rd = vlSelfRef.tb_memory__DOT__DUT__DOT__mem
            [(0x0000003fU & (vlSelfRef.tb_memory__DOT__addy 
                             >> 2U))];
    }
}

void Vtb_memory___024root___nba_sequent__TOP__0(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___nba_sequent__TOP__0\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0;
    __VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0;
    __VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_memory__DOT__DUT__DOT__mem__v0;
    __VdlySet__tb_memory__DOT__DUT__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_memory__DOT__DUT__DOT__mem__v1;
    __VdlySet__tb_memory__DOT__DUT__DOT__mem__v1 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    __VdlySet__tb_memory__DOT__DUT__DOT__mem__v0 = 0U;
    __VdlySet__tb_memory__DOT__DUT__DOT__mem__v1 = 0U;
    if (vlSelfRef.tb_memory__DOT__reset) {
        if (vlSelfRef.tb_memory__DOT__w_enable) {
            if ((0U == (3U & vlSelfRef.tb_memory__DOT__addy))) {
                __VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0 
                    = vlSelfRef.tb_memory__DOT__wd;
                __VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0 
                    = (0x0000003fU & (vlSelfRef.tb_memory__DOT__addy 
                                      >> 2U));
                __VdlySet__tb_memory__DOT__DUT__DOT__mem__v0 = 1U;
            }
        }
    } else {
        __VdlySet__tb_memory__DOT__DUT__DOT__mem__v1 = 1U;
    }
    if (__VdlySet__tb_memory__DOT__DUT__DOT__mem__v0) {
        vlSelfRef.tb_memory__DOT__DUT__DOT__mem[__VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0] 
            = __VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0;
    }
    if (__VdlySet__tb_memory__DOT__DUT__DOT__mem__v1) {
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.tb_memory__DOT__DUT__DOT__mem[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
}

void Vtb_memory___024root___eval_nba(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_nba\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0 = 0;
    CData/*5:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v1 = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___Vilp1;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v0 = 0U;
        __Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v1 = 0U;
        if (vlSelfRef.tb_memory__DOT__reset) {
            if (vlSelfRef.tb_memory__DOT__w_enable) {
                if ((0U == (3U & vlSelfRef.tb_memory__DOT__addy))) {
                    __Vinline__nba_sequent__TOP__0___VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0 
                        = vlSelfRef.tb_memory__DOT__wd;
                    __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0 
                        = (0x0000003fU & (vlSelfRef.tb_memory__DOT__addy 
                                          >> 2U));
                    __Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v0 = 1U;
                }
            }
        } else {
            __Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v1 = 1U;
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v0) {
            vlSelfRef.tb_memory__DOT__DUT__DOT__mem[__Vinline__nba_sequent__TOP__0___VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0;
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__tb_memory__DOT__DUT__DOT__mem__v1) {
            __Vinline__nba_sequent__TOP__0___Vilp1 = 0U;
            while ((__Vinline__nba_sequent__TOP__0___Vilp1 
                    <= 0x0000003fU)) {
                vlSelfRef.tb_memory__DOT__DUT__DOT__mem[__Vinline__nba_sequent__TOP__0___Vilp1] = 0U;
                __Vinline__nba_sequent__TOP__0___Vilp1 
                    = ((IData)(1U) + __Vinline__nba_sequent__TOP__0___Vilp1);
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_memory__DOT__rd = vlSelfRef.tb_memory__DOT__DUT__DOT__mem
            [(0x0000003fU & (vlSelfRef.tb_memory__DOT__addy 
                             >> 2U))];
    }
}

void Vtb_memory___024root___timing_ready(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___timing_ready\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he04316d7__0.ready("@(posedge tb_memory.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h615b2af3__0.ready("@(posedge tb_memory.reset)");
    }
}

void Vtb_memory___024root___timing_resume(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___timing_resume\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_he04316d7__0.moveToResumeQueue(
                                                          "@(posedge tb_memory.clk)");
    vlSelfRef.__VtrigSched_h615b2af3__0.moveToResumeQueue(
                                                          "@(posedge tb_memory.reset)");
    vlSelfRef.__VtrigSched_he04316d7__0.resume("@(posedge tb_memory.clk)");
    vlSelfRef.__VtrigSched_h615b2af3__0.resume("@(posedge tb_memory.reset)");
    vlSelfRef.__VdynSched.resume();
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_memory___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_memory___024root___eval_phase__act(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_phase__act\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_memory___024root___eval_triggers_vec__act(vlSelf);
    Vtb_memory___024root___timing_ready(vlSelf);
    Vtb_memory___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_memory___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_memory___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_memory___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_memory___024root___timing_resume(vlSelf);
        Vtb_memory___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_memory___024root___eval_phase__inact(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_phase__inact\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_memory.sv", 7, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_memory___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_memory___024root___eval_phase__nba(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_phase__nba\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_memory___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_memory___024root___eval_nba(vlSelf);
        Vtb_memory___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_memory___024root___eval(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_memory___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_memory.sv", 7, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_memory.sv", 7, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_memory___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_memory.sv", 7, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_memory___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_memory___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_memory___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_memory___024root____VbeforeTrig_he04316d7__0(Vtb_memory___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root____VbeforeTrig_he04316d7__0\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_memory__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0 
        = vlSelfRef.tb_memory__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he04316d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he04316d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he04316d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he04316d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he04316d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he04316d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he04316d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he04316d7__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_memory___024root____VbeforeTrig_h615b2af3__0(Vtb_memory___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root____VbeforeTrig_h615b2af3__0\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_memory__DOT__reset) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__reset__0))) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__reset__0 
        = vlSelfRef.tb_memory__DOT__reset;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h615b2af3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_memory___024root___eval_debug_assertions(Vtb_memory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_debug_assertions\n"); );
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
