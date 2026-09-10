// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_memory.h for the primary calling header

#ifndef VERILATED_VTB_MEMORY___024ROOT_H_
#define VERILATED_VTB_MEMORY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_memory_std;
class Vtb_memory_std__03a__03aprocess__Vclpkg;
class Vtb_memory_std__03a__03asemaphore__Vclpkg;


class Vtb_memory__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_memory___024root final {
  public:
    // CELLS
    Vtb_memory_std* __PVT__std;
    Vtb_memory_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vtb_memory_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_memory__DOT__clk;
    CData/*0:0*/ tb_memory__DOT__reset;
    CData/*0:0*/ tb_memory__DOT__w_enable;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_memory__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_memory__DOT__reset__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_memory__DOT__addy;
    IData/*31:0*/ tb_memory__DOT__wd;
    IData/*31:0*/ tb_memory__DOT__rd;
    IData/*31:0*/ tb_memory__DOT__main__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_memory__DOT__main__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ tb_memory__DOT__main__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 4> tb_memory__DOT__test_data;
    VlUnpacked<IData/*31:0*/, 64> tb_memory__DOT__DUT__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he04316d7__0;
    VlTriggerScheduler __VtrigSched_h615b2af3__0;
    VlDynamicTriggerScheduler __VdynSched;

    // INTERNAL VARIABLES
    Vtb_memory__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_memory___024root(Vtb_memory__Syms* symsp, const char* namep);
    ~Vtb_memory___024root();
    VL_UNCOPYABLE(Vtb_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
