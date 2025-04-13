/*
 * File: bbb1_pulsegen_timebase.c
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

#include "bbb1_pulsegen_timebase.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void bbb1_pulsegen_timebase_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  DiscretePulseGenerator: '<Root>/Pulse Generator'
   */
  rtY.Out1 = ((rtDW.clockTickCounter < 1) && (rtDW.clockTickCounter >= 0));

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  if (rtDW.clockTickCounter >= 1) {
    rtDW.clockTickCounter = 0;
  } else {
    rtDW.clockTickCounter++;
  }
}

/* Model initialize function */
void bbb1_pulsegen_timebase_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
