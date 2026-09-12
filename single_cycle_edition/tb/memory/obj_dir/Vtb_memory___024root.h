// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_memory.h for the primary calling header

#ifndef VERILATED_VTB_MEMORY___024ROOT_H_
#define VERILATED_VTB_MEMORY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_memory__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_memory__DOT__clk;
    CData/*0:0*/ tb_memory__DOT__rst_n;
    CData/*0:0*/ tb_memory__DOT__write_enable;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_memory__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_memory__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_memory__DOT__address;
    IData/*31:0*/ tb_memory__DOT__write_data;
    IData/*31:0*/ tb_memory__DOT__read_data;
    IData/*31:0*/ tb_memory__DOT__main__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_memory__DOT__main__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ tb_memory__DOT__main__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 4> tb_memory__DOT__test_data;
    VlUnpacked<IData/*31:0*/, 64> tb_memory__DOT__DUT__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h31554fbd__0;
    VlTriggerScheduler __VtrigSched_h72002f5d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_memory___024root(Vtb_memory__Syms* symsp, const char* v__name);
    ~Vtb_memory___024root();
    VL_UNCOPYABLE(Vtb_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
