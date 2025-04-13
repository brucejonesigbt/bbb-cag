/*
 * File: bbb1_pulsegen_timebase.h
 *
 * Code generated for Simulink model 'bbb1_pulsegen_timebase'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Apr  9 15:14:21 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-A
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_bbb1_pulsegen_timebase_h_
#define RTW_HEADER_bbb1_pulsegen_timebase_h_
#ifndef bbb1_pulsegen_timebase_COMMON_INCLUDES_
#define bbb1_pulsegen_timebase_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                             /* bbb1_pulsegen_timebase_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
} DW;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void bbb1_pulsegen_timebase_initialize(void);
extern void bbb1_pulsegen_timebase_step(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'bbb1_pulsegen_timebase'
 */
#endif                                /* RTW_HEADER_bbb1_pulsegen_timebase_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
