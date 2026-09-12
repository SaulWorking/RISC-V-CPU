// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory.h for the primary calling header

#include "Vtb_memory__pch.h"
#include "Vtb_memory__Syms.h"
#include "Vtb_memory___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__act(Vtb_memory___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_memory___024root___eval_triggers__act(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_memory__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_memory__DOT__rst_n) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__rst_n__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0 
        = vlSelfRef.tb_memory__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__rst_n__0 
        = vlSelfRef.tb_memory__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_memory___024root___dump_triggers__act(vlSelf);
    }
#endif
}
