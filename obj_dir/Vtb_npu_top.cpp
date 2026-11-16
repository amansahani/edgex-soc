// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_npu_top__pch.h"

//============================================================
// Constructors

Vtb_npu_top::Vtb_npu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vtb_npu_top{_vcontextp__, _vcname__, true} {}

Vtb_npu_top::Vtb_npu_top(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_npu_top__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_npu_top::Vtb_npu_top(const char* _vcname__)
    : Vtb_npu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_npu_top::~Vtb_npu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_npu_top___024root___eval_debug_assertions(Vtb_npu_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_npu_top___024root___eval_static(Vtb_npu_top___024root* vlSelf);
void Vtb_npu_top___024root___eval_initial(Vtb_npu_top___024root* vlSelf);
VL_ATTR_COLD bool Vtb_npu_top___024root___eval_stl(Vtb_npu_top___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vtb_npu_top___024root___eval_sample(Vtb_npu_top___024root* vlSelf);
bool Vtb_npu_top___024root___eval_ico(Vtb_npu_top___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vtb_npu_top___024root___eval_act(Vtb_npu_top___024root* vlSelf);
bool Vtb_npu_top___024root___eval_inact(Vtb_npu_top___024root* vlSelf);
bool Vtb_npu_top___024root___eval_nba(Vtb_npu_top___024root* vlSelf);
bool Vtb_npu_top___024root___eval_obs(Vtb_npu_top___024root* vlSelf);
bool Vtb_npu_top___024root___eval_react(Vtb_npu_top___024root* vlSelf);
void Vtb_npu_top___024root___eval_postponed(Vtb_npu_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_npu_top___024root___eval_final(Vtb_npu_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__stl(Vtb_npu_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__ico(Vtb_npu_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__act(Vtb_npu_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__nba(Vtb_npu_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__obs(Vtb_npu_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__react(Vtb_npu_top___024root* vlSelf);

void Vtb_npu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_npu_top::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_npu_top::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_npu_top___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_npu_top::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vtb_npu_top::evalStatic() {
    Vtb_npu_top___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vtb_npu_top::evalInitial() {
    Vtb_npu_top___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vtb_npu_top::evalStl(bool firstIteration) {
    return Vtb_npu_top___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vtb_npu_top::evalSample() {
    Vtb_npu_top___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vtb_npu_top::evalIco(bool firstIteration) {
    return Vtb_npu_top___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vtb_npu_top::evalAct() {
    return Vtb_npu_top___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vtb_npu_top::evalInact() {
    return Vtb_npu_top___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vtb_npu_top::evalNba() {
    return Vtb_npu_top___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vtb_npu_top::evalObs() {
    return Vtb_npu_top___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vtb_npu_top::evalReact() {
    return Vtb_npu_top___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vtb_npu_top::evalPostponed() {
    Vtb_npu_top___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vtb_npu_top::evalFinal() {
    Vtb_npu_top___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_npu_top::dumpTriggersStl() {
    Vtb_npu_top___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_npu_top::dumpTriggersIco() {
    Vtb_npu_top___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_npu_top::dumpTriggersAct() {
    Vtb_npu_top___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_npu_top::dumpTriggersNba() {
    Vtb_npu_top___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_npu_top::dumpTriggersObs() {
    Vtb_npu_top___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_npu_top::dumpTriggersReact() {
    Vtb_npu_top___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

//============================================================
// Events and timing
bool Vtb_npu_top::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_npu_top::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_npu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_npu_top::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_npu_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_npu_top::modelName() const { return "Vtb_npu_top"; }
unsigned Vtb_npu_top::threads() const { return 1; }
void Vtb_npu_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_npu_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
