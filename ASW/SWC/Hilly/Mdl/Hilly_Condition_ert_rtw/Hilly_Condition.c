/*
 * File: Hilly_Condition.c
 *
 * Code generated for Simulink model 'Hilly_Condition'.
 *
 * Model version                  : 1.79
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Aug 23 22:07:29 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Hilly_Condition.h"
#include "Hilly_Condition_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Hilly_Condition_T Hilly_Condition_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Hilly_Condition_T Hilly_Condition_Y;

/* Real-time model */
static RT_MODEL_Hilly_Condition_T Hilly_Condition_M_;
RT_MODEL_Hilly_Condition_T *const Hilly_Condition_M = &Hilly_Condition_M_;

/* Model step function */
void Hilly_Condition_step(void)
{
  int8_T rtb_HillyCond_LoHi_Oppveh;
  int8_T rtb_HillyCond_LoHi_Oppveh_0;
  int8_T rtb_HillyCond_LoHi_Prlveh;

  /* Outputs for Atomic SubSystem: '<Root>/HillyCond' */
  /* Outputs for Atomic SubSystem: '<S1>/HillyCond' */
  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/S_SlfLuxInt'
   *  RelationalOperator: '<S4>/Relational Operator'
   */
  rtb_HillyCond_LoHi_Oppveh = (int8_T)(Hilly_Condition_U.S_SlfLuxInt < 20);

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant4'
   *  Inport: '<Root>/S_LatDistPrlVeh'
   *  Inport: '<Root>/S_LongiDistOppVeh'
   *  Logic: '<S5>/AND1'
   *  Logic: '<S5>/AND2'
   *  Logic: '<S5>/AND3'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator1'
   *  RelationalOperator: '<S5>/Relational Operator2'
   *  RelationalOperator: '<S5>/Relational Operator3'
   */
  rtb_HillyCond_LoHi_Prlveh = (int8_T)(((Hilly_Condition_U.S_LongiDistOppVeh >
    20) || (Hilly_Condition_U.S_LongiDistOppVeh == 0)) &&
    ((Hilly_Condition_U.S_LatDistPrlVeh > 7) ||
     (Hilly_Condition_U.S_LatDistPrlVeh == 0)));

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/Constant1'
   *  Inport: '<Root>/S_SlfVehSteerAng'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  RelationalOperator: '<S6>/Relational Operator1'
   *  Switch: '<S6>/Switch1'
   */
  if (Hilly_Condition_U.S_SlfVehSteerAng >= 10) {
    /* Outport: '<Root>/HillyCond_RiLfInd' incorporates:
     *  Constant: '<S6>/Constant3'
     */
    Hilly_Condition_Y.HillyCond_RiLfInd = 1;
  } else if (Hilly_Condition_U.S_SlfVehSteerAng <= -15) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant5'
     *  Outport: '<Root>/HillyCond_RiLfInd'
     */
    Hilly_Condition_Y.HillyCond_RiLfInd = -1;
  } else {
    /* Outport: '<Root>/HillyCond_RiLfInd' incorporates:
     *  Constant: '<S6>/Constant4'
     *  Switch: '<S6>/Switch1'
     */
    Hilly_Condition_Y.HillyCond_RiLfInd = 0;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S3>/Constant3'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  Inport: '<Root>/S_SlfVehSpd'
   *  Logic: '<S3>/OR1'
   *  RelationalOperator: '<S3>/Relational Operator'
   */
  if ((rtb_HillyCond_LoHi_Oppveh != 0) && (rtb_HillyCond_LoHi_Prlveh != 0)) {
    rtb_HillyCond_LoHi_Oppveh_0 = (int8_T)(Hilly_Condition_U.S_SlfVehSpd >= 60);
  } else {
    rtb_HillyCond_LoHi_Oppveh_0 = 0;
  }

  /* End of Switch: '<S3>/Switch' */

  /* Outport: '<Root>/HillyCond_LoHiBeam' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion1'
   *  DataTypeConversion: '<S2>/Data Type Conversion2'
   *  DataTypeConversion: '<S2>/Data Type Conversion3'
   *  DataTypeConversion: '<S2>/Data Type Conversion4'
   *  Logic: '<S2>/AND'
   */
  Hilly_Condition_Y.HillyCond_LoHiBeam = (uint8_T)((rtb_HillyCond_LoHi_Oppveh !=
    0) && (rtb_HillyCond_LoHi_Prlveh != 0) && (rtb_HillyCond_LoHi_Oppveh_0 != 0));

  /* End of Outputs for SubSystem: '<S1>/HillyCond' */
  /* End of Outputs for SubSystem: '<Root>/HillyCond' */
}

/* Model initialize function */
void Hilly_Condition_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Hilly_Condition_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
