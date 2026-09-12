// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory.h for the primary calling header

#include "Vtb_memory__pch.h"
#include "Vtb_memory___024root.h"

VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__0(Vtb_memory___024root* vlSelf);
VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__1(Vtb_memory___024root* vlSelf);
VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__2(Vtb_memory___024root* vlSelf);

void Vtb_memory___024root___eval_initial(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_memory___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_memory___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_memory___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0 
        = vlSelfRef.tb_memory__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__rst_n__0 
        = vlSelfRef.tb_memory__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__0(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_memory__DOT__rst_n = 0U;
    vlSelfRef.tb_memory__DOT__address = 0U;
    vlSelfRef.tb_memory__DOT__write_data = 0U;
    vlSelfRef.tb_memory__DOT__write_enable = 0U;
    co_await vlSelfRef.__VtrigSched_h31554fbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_memory.clk)", 
                                                         "tb_memory.sv", 
                                                         27);
    vlSelfRef.tb_memory__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h31554fbd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_memory.clk)", 
                                                         "tb_memory.sv", 
                                                         29);
}

VL_INLINE_OPT VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__1(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        VL_WRITEF_NX("     .---------.     \n    /   _____   \\   \n   |   /     \\  |   \n   |  |  (o)  |  |   \n   |   \\_____/  |   \n   |             |   \n   |   ___   ___ |   \n   |  |   | |   ||   \n   `__`   `_`   `_`  \n\n    SUSPECTED...     \n",0);
        co_await vlSelfRef.__VtrigSched_h72002f5d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_memory.rst_n)", 
                                                             "tb_memory.sv", 
                                                             58);
        co_await vlSelfRef.__VtrigSched_h31554fbd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_memory.clk)", 
                                                             "tb_memory.sv", 
                                                             59);
        if ((0U == vlSelfRef.tb_memory__DOT__read_data)) {
            VL_WRITEF_NX("START, SUCCESS\n",0);
        } else {
            VL_WRITEF_NX("START, FAIL: read_data = %b\n",0,
                         32,vlSelfRef.tb_memory__DOT__read_data);
            goto __Vlabel1;
        }
        vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i)) {
            co_await vlSelfRef.__VtrigSched_h31554fbd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 70);
            vlSelfRef.tb_memory__DOT__address = VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i);
            vlSelfRef.tb_memory__DOT__write_data = 
                vlSelfRef.tb_memory__DOT__test_data
                [(3U & vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i)];
            vlSelfRef.tb_memory__DOT__write_enable = 1U;
            co_await vlSelfRef.__VtrigSched_h31554fbd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 75);
            vlSelfRef.tb_memory__DOT__write_enable = 0U;
            co_await vlSelfRef.__VtrigSched_h31554fbd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 79);
            VL_WRITEF_NX("read_data: %x\n",0,32,vlSelfRef.tb_memory__DOT__read_data);
            if ((vlSelfRef.tb_memory__DOT__read_data 
                 == vlSelfRef.tb_memory__DOT__test_data
                 [(3U & vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i)])) {
                VL_WRITEF_NX("WRITE/READ SUCCESS\n",0);
            } else {
                VL_WRITEF_NX("WRITE/READ FAIL: read_data = %x\n",0,
                             32,vlSelfRef.tb_memory__DOT__read_data);
            }
            vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk1__DOT__i);
        }
        vlSelfRef.tb_memory__DOT__write_enable = 1U;
        vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.tb_memory__DOT__address = VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i);
            vlSelfRef.tb_memory__DOT__write_data = 
                ((IData)(0x64U) + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i);
            VL_WRITEF_NX("WRITING %10# to %b!\n",0,
                         32,vlSelfRef.tb_memory__DOT__write_data,
                         32,vlSelfRef.tb_memory__DOT__address);
            co_await vlSelfRef.__VtrigSched_h31554fbd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 100);
            vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk2__DOT__i);
        }
        vlSelfRef.tb_memory__DOT__write_enable = 0U;
        vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i)) {
            vlSelfRef.tb_memory__DOT__address = VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i);
            co_await vlSelfRef.__VtrigSched_h31554fbd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_memory.clk)", 
                                                                 "tb_memory.sv", 
                                                                 108);
            if ((vlSelfRef.tb_memory__DOT__read_data 
                 == ((IData)(0x64U) + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i))) {
                VL_WRITEF_NX("READ/WRITE SUCESSS: %10#\n",0,
                             32,vlSelfRef.tb_memory__DOT__read_data);
            } else {
                VL_WRITEF_NX("READ/WRITE FAIL: %10#\n",0,
                             32,vlSelfRef.tb_memory__DOT__read_data);
            }
            vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_memory__DOT__main__DOT__unnamedblk3__DOT__i);
        }
        vlSelfRef.tb_memory__DOT__write_enable = 1U;
        vlSelfRef.tb_memory__DOT__address = 0xdU;
        vlSelfRef.tb_memory__DOT__write_data = 0xa7U;
        VL_WRITEF_NX("WRITING %10# to %b!\n",0,32,vlSelfRef.tb_memory__DOT__write_data,
                     32,vlSelfRef.tb_memory__DOT__address);
        co_await vlSelfRef.__VtrigSched_h31554fbd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_memory.clk)", 
                                                             "tb_memory.sv", 
                                                             126);
        if ((0xa7U == vlSelfRef.tb_memory__DOT__read_data)) {
            VL_WRITEF_NX("READ SUCESSS: %10#\n",0,32,
                         vlSelfRef.tb_memory__DOT__read_data);
        } else {
            VL_WRITEF_NX("READ FAIL: %10#\n",0,32,vlSelfRef.tb_memory__DOT__read_data);
        }
        __Vlabel1: ;
    }
}

VL_INLINE_OPT VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__2(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "tb_memory.sv", 
                                             18);
        vlSelfRef.tb_memory__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_memory__DOT__clk)));
    }
}

void Vtb_memory___024root___act_comb__TOP__0(Vtb_memory___024root* vlSelf);

void Vtb_memory___024root___eval_act(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_memory___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_memory___024root___act_comb__TOP__0(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_memory__DOT__read_data = vlSelfRef.tb_memory__DOT__DUT__DOT__mem
        [(0x3fU & (vlSelfRef.tb_memory__DOT__address 
                   >> 2U))];
}

void Vtb_memory___024root___nba_sequent__TOP__0(Vtb_memory___024root* vlSelf);

void Vtb_memory___024root___eval_nba(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_memory___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_memory___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_memory___024root___nba_sequent__TOP__0(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0;
    __VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0;
    __VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_memory__DOT__DUT__DOT__mem__v0;
    __VdlySet__tb_memory__DOT__DUT__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_memory__DOT__DUT__DOT__mem__v1;
    __VdlySet__tb_memory__DOT__DUT__DOT__mem__v1 = 0;
    // Body
    __VdlySet__tb_memory__DOT__DUT__DOT__mem__v0 = 0U;
    __VdlySet__tb_memory__DOT__DUT__DOT__mem__v1 = 0U;
    if (vlSelfRef.tb_memory__DOT__rst_n) {
        if (vlSelfRef.tb_memory__DOT__write_enable) {
            if ((0U == (3U & vlSelfRef.tb_memory__DOT__address))) {
                __VdlyVal__tb_memory__DOT__DUT__DOT__mem__v0 
                    = vlSelfRef.tb_memory__DOT__write_data;
                __VdlyDim0__tb_memory__DOT__DUT__DOT__mem__v0 
                    = (0x3fU & (vlSelfRef.tb_memory__DOT__address 
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
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.tb_memory__DOT__DUT__DOT__mem[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
}

void Vtb_memory___024root___timing_resume(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h31554fbd__0.resume(
                                                   "@(posedge tb_memory.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h72002f5d__0.resume(
                                                   "@(posedge tb_memory.rst_n)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_memory___024root___timing_commit(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h31554fbd__0.commit(
                                                   "@(posedge tb_memory.clk)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h72002f5d__0.commit(
                                                   "@(posedge tb_memory.rst_n)");
    }
}

void Vtb_memory___024root___eval_triggers__act(Vtb_memory___024root* vlSelf);

bool Vtb_memory___024root___eval_phase__act(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_memory___024root___eval_triggers__act(vlSelf);
    Vtb_memory___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_memory___024root___timing_resume(vlSelf);
        Vtb_memory___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_memory___024root___eval_phase__nba(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_memory___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__nba(Vtb_memory___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__act(Vtb_memory___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_memory___024root___eval(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_memory___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_memory.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_memory___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_memory.sv", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_memory___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_memory___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_memory___024root___eval_debug_assertions(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
