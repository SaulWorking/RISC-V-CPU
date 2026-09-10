// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_memory.h for the primary calling header

#ifndef VERILATED_VTB_MEMORY_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTB_MEMORY_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_memory__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_memory_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_memory__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_memory_std__03a__03asemaphore__Vclpkg();
    ~Vtb_memory_std__03a__03asemaphore__Vclpkg();
    void ctor(Vtb_memory__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_memory_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_memory__Syms;

class Vtb_memory_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new Vtb_memory_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(Vtb_memory__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vtb_memory__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vtb_memory__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_memory__Syms* __restrict vlSymsp);
  public:
    Vtb_memory_std__03a__03asemaphore(Vtb_memory__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_memory_std__03a__03asemaphore() {}
};


#endif  // guard
