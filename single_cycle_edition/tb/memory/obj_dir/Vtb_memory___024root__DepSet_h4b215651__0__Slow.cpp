// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory.h for the primary calling header

#include "Vtb_memory__pch.h"
#include "Vtb_memory___024root.h"

VL_ATTR_COLD void Vtb_memory___024root___eval_static__TOP(Vtb_memory___024root* vlSelf);

VL_ATTR_COLD void Vtb_memory___024root___eval_static(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_memory___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_memory___024root___eval_static__TOP(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_memory__DOT__test_data[3U] = 0xdeadbeefU;
    vlSelfRef.tb_memory__DOT__test_data[2U] = 0xcafecafeU;
    vlSelfRef.tb_memory__DOT__test_data[1U] = 0x12345678U;
    vlSelfRef.tb_memory__DOT__test_data[0U] = 0x67676767U;
}

VL_ATTR_COLD void Vtb_memory___024root___eval_final(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__stl(Vtb_memory___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_memory___024root___eval_phase__stl(Vtb_memory___024root* vlSelf);

VL_ATTR_COLD void Vtb_memory___024root___eval_settle(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_memory___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_memory.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_memory___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__stl(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_memory___024root___act_comb__TOP__0(Vtb_memory___024root* vlSelf);

VL_ATTR_COLD void Vtb_memory___024root___eval_stl(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_memory___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_memory___024root___eval_triggers__stl(Vtb_memory___024root* vlSelf);

VL_ATTR_COLD bool Vtb_memory___024root___eval_phase__stl(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_memory___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_memory___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__act(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_memory.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_memory.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__nba(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_memory.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_memory.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_memory___024root___ctor_var_reset(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_memory__DOT__clk = 0;
    vlSelf->tb_memory__DOT__rst_n = 0;
    vlSelf->tb_memory__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->tb_memory__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_memory__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_memory__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_memory__DOT__test_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_memory__DOT__main__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_memory__DOT__main__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_memory__DOT__main__DOT__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_memory__DOT__DUT__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_memory__DOT__rst_n__0 = 0;
}
