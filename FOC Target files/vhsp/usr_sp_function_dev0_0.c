// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------

#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"

#ifdef __cplusplus
}
#endif

// H files from Advanced C Function components


// Header files from additional sources (Advanced C Function)

// ----------------------------------------------------------------------------------------
// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines








































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _3_ph_pmsm1_machine_wrapper1__out[3];

double _constant1__out = 1.0;
double _ia_ia1__out;
double _ib_ia1__out;
double _ic_ia1__out;
double _isd_controller_constant1__out = 0.0124;
double _isd_controller_integrator__out;
double _isd_ref__out = 0.0;
double _isq_controller_constant1__out = 0.0124;
double _isq_controller_constant2__out = 0.1821;
double _isq_controller_integrator__out;
double _svpwm_references_generator_constant1__out = 0.5;
double _svpwm_references_generator_constant2__out = 0.5;
double _svpwm_references_generator_constant3__out = 0.5;
double _speed_controller_integrator__out;
double _load_torque__out;
double _torque_speed_angle__out;
double _torque_speed_angle__out1;
double _torque_speed_angle__out2;
double _w_ref__out;
double _abc_to_dq_abc_to_alpha_beta__alpha;
double _abc_to_dq_abc_to_alpha_beta__beta;
double _abc_to_dq_abc_to_alpha_beta__gamma;
double _pole_pair__out;
double _pole_pair1__out;
double _speed_controller_sum1__out;
double _abc_to_dq_alpha_beta_to_dq__d;
double _abc_to_dq_alpha_beta_to_dq__q;
double _abc_to_dq_alpha_beta_to_dq__k1;
double _abc_to_dq_alpha_beta_to_dq__k2;
double _speed_controller_ki_w__out;
double _speed_controller_kp_w__out;
double _isd_controller_product1__out;
double _isd_controller_sum1__out;
double _isq_controller_product2__out;
double _isq_controller_sum1__out;
double _speed_controller_sum2__out;
double _isd_controller_ki_sd__out;
double _isd_controller_kp_sd__out;
double _isq_controller_sum4__out;
double _isq_controller_ki_sq__out;
double _isq_controller_kp_sq__out;
double _speed_controller_saturation__out;
double _isd_controller_sum2__out;
double _isq_controller_product1__out;
double _isq_controller_sum2__out;
double _speed_controller_sum3__out;
double _isd_controller_sum3__out;
double _isq_controller_sum3__out;
double _speed_controller_ki_w1__out;
double _dq_to_alpha_beta__alpha;
double _dq_to_alpha_beta__beta;
double _dq_to_alpha_beta__k1;
double _dq_to_alpha_beta__k2;
double _speed_controller_sum4__out;
double _svpwm_references_generator_gain4__out;
double _svpwm_references_generator_gain5__out;
double _svpwm_references_generator_svpwm__alpha;
double _svpwm_references_generator_svpwm__beta;


double _svpwm_references_generator_svpwm__ref1;
double _svpwm_references_generator_svpwm__ref2;
double _svpwm_references_generator_svpwm__ref3;
double _svpwm_references_generator_sum1__out;
double _svpwm_references_generator_sum2__out;
double _svpwm_references_generator_sum3__out;
double _svpwm_references_generator_gain6__out;
double _svpwm_references_generator_gain7__out;
double _svpwm_references_generator_gain8__out;
X_UnInt32 _three_phase_inverter_phase_a_pwm_modulator__channels[1] = {0};
double _three_phase_inverter_phase_a_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter_phase_a_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter_phase_a_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter_phase_b_pwm_modulator__channels[1] = {1};
double _three_phase_inverter_phase_b_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter_phase_b_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter_phase_b_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter_phase_c_pwm_modulator__channels[1] = {2};
double _three_phase_inverter_phase_c_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter_phase_c_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter_phase_c_pwm_modulator__sig_dir[1];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _3_ph_pmsm1_machine_wrapper1__model_load;
double _adc_sampler1_output__out =  0.0;
double _isd_controller_integrator__state;
double _isq_controller_integrator__state;
double _speed_controller_integrator__state;
double _rate_transition_output__out =  0.0;
double _svpwm_references_generator_svpwm__Sk;
double _svpwm_references_generator_svpwm__Sk_next;
double _svpwm_references_generator_svpwm__Ck;
double _svpwm_references_generator_svpwm__Ck_next;
double _svpwm_references_generator_svpwm__long;
double _svpwm_references_generator_svpwm__middle;
double _svpwm_references_generator_svpwm__short;
double _svpwm_references_generator_svpwm__tmp;
double _svpwm_references_generator_svpwm__Tk;
double _svpwm_references_generator_svpwm__Tk_next;
double _svpwm_references_generator_svpwm__T0;
X_Int32 _svpwm_references_generator_svpwm__sector;
//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif







// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _3_ph_pmsm1_machine_wrapper1__model_load = 0.0;
    _adc_sampler1_output__out =  0.0;
    _isd_controller_integrator__state = 0.0;
    _isq_controller_integrator__state = 0.0;
    _speed_controller_integrator__state = 0.0;
    _rate_transition_output__out =  0.0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    _svpwm_references_generator_svpwm__sector = 0;
    _svpwm_references_generator_svpwm__Sk = 0.0;
    _svpwm_references_generator_svpwm__Sk_next = 0.0;
    _svpwm_references_generator_svpwm__Ck = 0.0;
    _svpwm_references_generator_svpwm__Ck_next = 0.0;
    _three_phase_inverter_phase_a_pwm_modulator__update_mask = 1;
    HIL_OutInt32(0x2000080 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 4000);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 400);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_a_pwm_modulator__update_mask);
    HIL_OutAO(0x4001, 0.0f);
    _three_phase_inverter_phase_b_pwm_modulator__update_mask = 2;
    HIL_OutInt32(0x2000080 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 4000);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 400);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_b_pwm_modulator__update_mask);
    HIL_OutAO(0x4002, 0.0f);
    _three_phase_inverter_phase_c_pwm_modulator__update_mask = 4;
    HIL_OutInt32(0x2000080 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 4000);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 400);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_c_pwm_modulator__update_mask);
    HIL_OutAO(0x4003, 0.0f);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}              // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: Constant1
    // Generated from the component: Isd_Controller.Constant1
    // Generated from the component: Isd_ref
    // Generated from the component: Isq_Controller.Constant1
    // Generated from the component: Isq_Controller.Constant2
    // Generated from the component: SVPWM References Generator.Constant1
    // Generated from the component: SVPWM References Generator.Constant2
    // Generated from the component: SVPWM References Generator.Constant3
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: 3 ph PMSM1.Machine Wrapper1
    HIL_OutFloat((0x800000 + 0x40000 * 0x0 + 0x18),  _3_ph_pmsm1_machine_wrapper1__model_load);
    _3_ph_pmsm1_machine_wrapper1__out[0] = HIL_InFloat(0xc80000 + 32776);
    _3_ph_pmsm1_machine_wrapper1__out[1] = HIL_InFloat(0xc80000 + 32778);
    _3_ph_pmsm1_machine_wrapper1__out[2] = HIL_InFloat(0xc80000 + 32779);
    // Generated from the component: Constant1
    // Generated from the component: Ia.Ia1
    _ia_ia1__out = (HIL_InFloat(0xc80000 + 0x9));
    // Generated from the component: Ib.Ia1
    _ib_ia1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: Ic.Ia1
    _ic_ia1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Isd_Controller.Constant1
    // Generated from the component: Isd_Controller.Integrator
    _isd_controller_integrator__out = _isd_controller_integrator__state;
    // Generated from the component: Isd_ref
    // Generated from the component: Isq_Controller.Constant1
    // Generated from the component: Isq_Controller.Constant2
    // Generated from the component: Isq_Controller.Integrator
    _isq_controller_integrator__out = _isq_controller_integrator__state;
    // Generated from the component: SVPWM References Generator.Constant1
    // Generated from the component: SVPWM References Generator.Constant2
    // Generated from the component: SVPWM References Generator.Constant3
    // Generated from the component: load_torque
    _load_torque__out = XIo_InFloat(0x55000100);
    // Generated from the component: torque_speed_angle
    _torque_speed_angle__out = _3_ph_pmsm1_machine_wrapper1__out[0];
    _torque_speed_angle__out1 = _3_ph_pmsm1_machine_wrapper1__out[1];
    _torque_speed_angle__out2 = _3_ph_pmsm1_machine_wrapper1__out[2];
    // Generated from the component: Three Phase Inverter.Phase A.IGBT Leg global gds ovs.termination1
    // Generated from the component: Three Phase Inverter.Phase B.IGBT Leg global gds ovs.termination1
    // Generated from the component: Three Phase Inverter.Phase C.IGBT Leg global gds ovs.termination1
    // Generated from the component: abc to dq.abc to alpha beta
    _abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _ia_ia1__out - _ib_ia1__out - _ic_ia1__out) * 0.3333333333333333;
    _abc_to_dq_abc_to_alpha_beta__beta = (_ib_ia1__out - _ic_ia1__out) * 0.5773502691896258;
    _abc_to_dq_abc_to_alpha_beta__gamma = (_ia_ia1__out + _ib_ia1__out + _ic_ia1__out) * 0.3333333333333333;
    // Generated from the component: Termination3
    // Generated from the component: pole_pair
    _pole_pair__out = 4.0 * _torque_speed_angle__out1;
    // Generated from the component: pole_pair1
    _pole_pair1__out = 4.0 * _torque_speed_angle__out2;
    // Generated from the component: rate_transition.Input
    _rate_transition_output__out = _torque_speed_angle__out1;
    // Generated from the component: Termination2
    // Generated from the component: abc to dq.alpha beta to dq
    _abc_to_dq_alpha_beta_to_dq__k1 = cos(_pole_pair1__out);
    _abc_to_dq_alpha_beta_to_dq__k2 = sin(_pole_pair1__out);
    _abc_to_dq_alpha_beta_to_dq__d = _abc_to_dq_alpha_beta_to_dq__k2 * _abc_to_dq_abc_to_alpha_beta__alpha - _abc_to_dq_alpha_beta_to_dq__k1 * _abc_to_dq_abc_to_alpha_beta__beta;
    _abc_to_dq_alpha_beta_to_dq__q = _abc_to_dq_alpha_beta_to_dq__k1 * _abc_to_dq_abc_to_alpha_beta__alpha + _abc_to_dq_alpha_beta_to_dq__k2 * _abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Isd_Controller.Product1
    _isd_controller_product1__out = (_pole_pair__out * _abc_to_dq_alpha_beta_to_dq__q * _isd_controller_constant1__out);
    // Generated from the component: Isd_Controller.Sum1
    _isd_controller_sum1__out = _isd_ref__out - _abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Isq_Controller.Product2
    _isq_controller_product2__out = (_isq_controller_constant1__out * _abc_to_dq_alpha_beta_to_dq__d);
    // Generated from the component: Isq_Controller.Sum1
    _isq_controller_sum1__out = _adc_sampler1_output__out - _abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Isd_Controller.Ki_sd
    _isd_controller_ki_sd__out = 13625.0 * _isd_controller_sum1__out;
    // Generated from the component: Isd_Controller.Kp_sd
    _isd_controller_kp_sd__out = 154.99999999999997 * _isd_controller_sum1__out;
    // Generated from the component: Isq_Controller.Sum4
    _isq_controller_sum4__out = _isq_controller_product2__out + _isq_controller_constant2__out;
    // Generated from the component: Isq_Controller.Ki_sq
    _isq_controller_ki_sq__out = 13625.0 * _isq_controller_sum1__out;
    // Generated from the component: Isq_Controller.Kp_sq
    _isq_controller_kp_sq__out = 154.99999999999997 * _isq_controller_sum1__out;
    // Generated from the component: Isd_Controller.Sum2
    _isd_controller_sum2__out = _isd_controller_kp_sd__out + _isd_controller_integrator__out;
    // Generated from the component: Isq_Controller.Product1
    _isq_controller_product1__out = (_pole_pair__out * _isq_controller_sum4__out);
    // Generated from the component: Isq_Controller.Sum2
    _isq_controller_sum2__out = _isq_controller_kp_sq__out + _isq_controller_integrator__out;
    // Generated from the component: Isd_Controller.Sum3
    _isd_controller_sum3__out = _isd_controller_sum2__out - _isd_controller_product1__out;
    // Generated from the component: Isq_Controller.Sum3
    _isq_controller_sum3__out = _isq_controller_sum2__out + _isq_controller_product1__out;
    // Generated from the component: Vsd_ref
    HIL_OutAO(0x4004, (float)_isd_controller_sum3__out);
    // Generated from the component: Vsq_ref
    HIL_OutAO(0x4005, (float)_isq_controller_sum3__out);
    // Generated from the component: dq to alpha beta
    _dq_to_alpha_beta__k1 = cos(_pole_pair1__out);
    _dq_to_alpha_beta__k2 = sin(_pole_pair1__out);
    _dq_to_alpha_beta__alpha = _dq_to_alpha_beta__k2 * _isd_controller_sum3__out + _dq_to_alpha_beta__k1 * _isq_controller_sum3__out;
    _dq_to_alpha_beta__beta = _dq_to_alpha_beta__k2 * _isq_controller_sum3__out - _dq_to_alpha_beta__k1 * _isd_controller_sum3__out;
    // Generated from the component: SVPWM References Generator.Gain4
    _svpwm_references_generator_gain4__out = 0.5773502691896258 * _dq_to_alpha_beta__alpha;
    // Generated from the component: SVPWM References Generator.Gain5
    _svpwm_references_generator_gain5__out = 0.5773502691896258 * _dq_to_alpha_beta__beta;
    // Generated from the component: SVPWM References Generator.SVPWM
    _svpwm_references_generator_svpwm__alpha = _svpwm_references_generator_gain4__out;
    _svpwm_references_generator_svpwm__beta = _svpwm_references_generator_gain5__out;
    if (_svpwm_references_generator_svpwm__beta >= 0.0) {
        if (1 / sqrt(3)*_svpwm_references_generator_svpwm__beta > fabs(_svpwm_references_generator_svpwm__alpha))_svpwm_references_generator_svpwm__sector = 2;
        else if (_svpwm_references_generator_svpwm__alpha >= 0.0)_svpwm_references_generator_svpwm__sector = 1;
        else _svpwm_references_generator_svpwm__sector = 3;
    }
    else {
        if (-1 / sqrt(3)*_svpwm_references_generator_svpwm__beta > fabs(_svpwm_references_generator_svpwm__alpha))_svpwm_references_generator_svpwm__sector = 5;
        else if (_svpwm_references_generator_svpwm__alpha >= 0.0)_svpwm_references_generator_svpwm__sector = 6;
        else _svpwm_references_generator_svpwm__sector = 4;
    }
    switch (_svpwm_references_generator_svpwm__sector) {
    case 1:
        _svpwm_references_generator_svpwm__Sk = 1.5;
        _svpwm_references_generator_svpwm__Sk_next = 0.0;
        _svpwm_references_generator_svpwm__Ck = -0.866;
        _svpwm_references_generator_svpwm__Ck_next = 1.732;
        break ;
    case 2:
        _svpwm_references_generator_svpwm__Sk = 1.5;
        _svpwm_references_generator_svpwm__Sk_next = -1.5;
        _svpwm_references_generator_svpwm__Ck = 0.866;
        _svpwm_references_generator_svpwm__Ck_next = 0.866;
        break ;
    case 3:
        _svpwm_references_generator_svpwm__Sk = 0.0;
        _svpwm_references_generator_svpwm__Sk_next = -1.5;
        _svpwm_references_generator_svpwm__Ck = 1.732;
        _svpwm_references_generator_svpwm__Ck_next = -0.866;
        break ;
    case 4:
        _svpwm_references_generator_svpwm__Sk = -1.5;
        _svpwm_references_generator_svpwm__Sk_next = 0.0;
        _svpwm_references_generator_svpwm__Ck = 0.866;
        _svpwm_references_generator_svpwm__Ck_next = -1.732;
        break ;
    case 5:
        _svpwm_references_generator_svpwm__Sk = -1.5;
        _svpwm_references_generator_svpwm__Sk_next = 1.5;
        _svpwm_references_generator_svpwm__Ck = -0.866;
        _svpwm_references_generator_svpwm__Ck_next = -0.866;
        break ;
    case 6:
        _svpwm_references_generator_svpwm__Sk = 0.0;
        _svpwm_references_generator_svpwm__Sk_next = 1.5;
        _svpwm_references_generator_svpwm__Ck = -1.732;
        _svpwm_references_generator_svpwm__Ck_next = 0.866;
        break ;
    default :
        _svpwm_references_generator_svpwm__Sk = 0.0;
        _svpwm_references_generator_svpwm__Sk_next = 0.0;
        _svpwm_references_generator_svpwm__Ck = 0.0;
        _svpwm_references_generator_svpwm__Ck_next = 0.0;
    }
    _svpwm_references_generator_svpwm__Tk = 10000.0 * (_svpwm_references_generator_svpwm__Sk * _svpwm_references_generator_svpwm__alpha + _svpwm_references_generator_svpwm__Ck * _svpwm_references_generator_svpwm__beta);
    _svpwm_references_generator_svpwm__Tk_next = 10000.0 * (_svpwm_references_generator_svpwm__Sk_next * _svpwm_references_generator_svpwm__alpha + _svpwm_references_generator_svpwm__Ck_next * _svpwm_references_generator_svpwm__beta);
    _svpwm_references_generator_svpwm__T0 = 10000.0 - _svpwm_references_generator_svpwm__Tk - _svpwm_references_generator_svpwm__Tk_next;
    if (!(_svpwm_references_generator_svpwm__sector & 0x0001)) {
        _svpwm_references_generator_svpwm__tmp = _svpwm_references_generator_svpwm__Tk;
        _svpwm_references_generator_svpwm__Tk = _svpwm_references_generator_svpwm__Tk_next;
        _svpwm_references_generator_svpwm__Tk_next = _svpwm_references_generator_svpwm__tmp;
    }
    if (_svpwm_references_generator_svpwm__T0 < 0.0) {
        _svpwm_references_generator_svpwm__Tk = 10000.0 * _svpwm_references_generator_svpwm__Tk / (_svpwm_references_generator_svpwm__Tk + _svpwm_references_generator_svpwm__Tk_next);
        _svpwm_references_generator_svpwm__Tk_next = 10000.0 * _svpwm_references_generator_svpwm__Tk_next / (_svpwm_references_generator_svpwm__Tk + _svpwm_references_generator_svpwm__Tk_next);
        _svpwm_references_generator_svpwm__T0 = 0.0;
    }
    _svpwm_references_generator_svpwm__long = (_svpwm_references_generator_svpwm__T0 / 2 + _svpwm_references_generator_svpwm__Tk + _svpwm_references_generator_svpwm__Tk_next) / 10000.0;
    _svpwm_references_generator_svpwm__middle = (_svpwm_references_generator_svpwm__T0 / 2 + _svpwm_references_generator_svpwm__Tk_next) / 10000.0;
    _svpwm_references_generator_svpwm__short = (_svpwm_references_generator_svpwm__T0 / 2) / 10000.0;
    switch (_svpwm_references_generator_svpwm__sector) {
    case 1:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__long;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__middle;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__short;
        break ;
    case 2:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__middle;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__long;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__short;
        break ;
    case 3:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__short;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__long;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__middle;
        break ;
    case 4:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__short;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__middle;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__long;
        break ;
    case 5:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__middle;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__short;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__long;
        break ;
    case 6:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__long;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__short;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__middle;
        break ;
    default :
        _svpwm_references_generator_svpwm__ref1 = 0.0;
        _svpwm_references_generator_svpwm__ref2 = 0.0;
        _svpwm_references_generator_svpwm__ref3 = 0.0;
    }
    // Generated from the component: SVPWM References Generator.Sum1
    _svpwm_references_generator_sum1__out = _svpwm_references_generator_svpwm__ref1 - _svpwm_references_generator_constant1__out;
    // Generated from the component: SVPWM References Generator.Sum2
    _svpwm_references_generator_sum2__out = _svpwm_references_generator_svpwm__ref2 - _svpwm_references_generator_constant2__out;
    // Generated from the component: SVPWM References Generator.Sum3
    _svpwm_references_generator_sum3__out = _svpwm_references_generator_svpwm__ref3 - _svpwm_references_generator_constant3__out;
    // Generated from the component: SVPWM References Generator.Gain6
    _svpwm_references_generator_gain6__out = 2.0 * _svpwm_references_generator_sum1__out;
    // Generated from the component: SVPWM References Generator.Gain7
    _svpwm_references_generator_gain7__out = 2.0 * _svpwm_references_generator_sum2__out;
    // Generated from the component: SVPWM References Generator.Gain8
    _svpwm_references_generator_gain8__out = 2.0 * _svpwm_references_generator_sum3__out;
    // Generated from the component: Three Phase Inverter.Phase A.PWM_Modulator
    _three_phase_inverter_phase_a_pwm_modulator__limited_in[0] = MIN(MAX(_svpwm_references_generator_gain6__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter_phase_a_pwm_modulator__limited_in[0] - (-1.0)) * 2000.0)));
    if (_constant1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_a_pwm_modulator__update_mask);
    // Generated from the component: Va_ref
    HIL_OutAO(0x4001, (float)_svpwm_references_generator_gain6__out);
    // Generated from the component: Three Phase Inverter.Phase B.PWM_Modulator
    _three_phase_inverter_phase_b_pwm_modulator__limited_in[0] = MIN(MAX(_svpwm_references_generator_gain7__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter_phase_b_pwm_modulator__limited_in[0] - (-1.0)) * 2000.0)));
    if (_constant1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_b_pwm_modulator__update_mask);
    // Generated from the component: Vb_ref
    HIL_OutAO(0x4002, (float)_svpwm_references_generator_gain7__out);
    // Generated from the component: Three Phase Inverter.Phase C.PWM_Modulator
    _three_phase_inverter_phase_c_pwm_modulator__limited_in[0] = MIN(MAX(_svpwm_references_generator_gain8__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter_phase_c_pwm_modulator__limited_in[0] - (-1.0)) * 2000.0)));
    if (_constant1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_c_pwm_modulator__update_mask);
    // Generated from the component: Vc_ref
    HIL_OutAO(0x4003, (float)_svpwm_references_generator_gain8__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: 3 ph PMSM1.Machine Wrapper1
    _3_ph_pmsm1_machine_wrapper1__model_load = _load_torque__out;
    // Generated from the component: Isd_Controller.Integrator
    _isd_controller_integrator__state += _isd_controller_ki_sd__out * 2e-05;
    // Generated from the component: Isq_Controller.Integrator
    _isq_controller_integrator__state += _isq_controller_ki_sq__out * 2e-05;
    // Generated from the component: SVPWM References Generator.SVPWM
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Speed_Controller.Integrator
    _speed_controller_integrator__out = _speed_controller_integrator__state;
    // Generated from the component: w_ref
    _w_ref__out = XIo_InFloat(0x55000104);
    // Generated from the component: Speed_Controller.Sum1
    _speed_controller_sum1__out = _w_ref__out - _rate_transition_output__out;
    // Generated from the component: Speed_Controller.Ki_w
    _speed_controller_ki_w__out = 463.6571452269814 * _speed_controller_sum1__out;
    // Generated from the component: Speed_Controller.Kp_w
    _speed_controller_kp_w__out = 0.2967405729452681 * _speed_controller_sum1__out;
    // Generated from the component: Speed_Controller.Sum2
    _speed_controller_sum2__out = _speed_controller_kp_w__out + _speed_controller_integrator__out;
    // Generated from the component: Speed_Controller.saturation
    _speed_controller_saturation__out = MIN(MAX(_speed_controller_sum2__out, -10.0), 10.0);
    // Generated from the component: ADC_Sampler1.Input
    _adc_sampler1_output__out = _speed_controller_saturation__out;
    // Generated from the component: Isq_ref
    HIL_OutAO(0x4000, (float)_speed_controller_saturation__out);
    // Generated from the component: Speed_Controller.Sum3
    _speed_controller_sum3__out = _speed_controller_sum2__out - _speed_controller_saturation__out;
    // Generated from the component: Speed_Controller.Ki_w1
    _speed_controller_ki_w1__out = 463.6571452269814 * _speed_controller_sum3__out;
    // Generated from the component: Speed_Controller.Sum4
    _speed_controller_sum4__out = _speed_controller_ki_w__out - _speed_controller_ki_w1__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Speed_Controller.Integrator
    _speed_controller_integrator__state += _speed_controller_sum4__out * 6e-05;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------