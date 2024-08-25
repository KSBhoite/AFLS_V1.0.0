/*
 * File: Hilly_Condition.h
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

#ifndef RTW_HEADER_Hilly_Condition_h_
#define RTW_HEADER_Hilly_Condition_h_
#ifndef Hilly_Condition_COMMON_INCLUDES_
#define Hilly_Condition_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Hilly_Condition_COMMON_INCLUDES_ */

#include "Hilly_Condition_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T S_SlfLuxInt;                 /* '<Root>/S_SlfLuxInt' */
  uint8_T S_LongiDistOppVeh;           /* '<Root>/S_LongiDistOppVeh' */
  uint8_T S_LatDistPrlVeh;             /* '<Root>/S_LatDistPrlVeh' */
  uint8_T S_SlfVehSpd;                 /* '<Root>/S_SlfVehSpd' */
  int8_T S_SlfVehSteerAng;             /* '<Root>/S_SlfVehSteerAng' */
} ExtU_Hilly_Condition_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T HillyCond_LoHiBeam;          /* '<Root>/HillyCond_LoHiBeam' */
  int8_T HillyCond_RiLfInd;            /* '<Root>/HillyCond_RiLfInd' */
} ExtY_Hilly_Condition_T;

/* Real-time Model Data Structure */
struct tag_RTM_Hilly_Condition_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Hilly_Condition_T Hilly_Condition_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Hilly_Condition_T Hilly_Condition_Y;

/* Model entry point functions */
extern void Hilly_Condition_initialize(void);
extern void Hilly_Condition_step(void);
extern void Hilly_Condition_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Hilly_Condition_T *const Hilly_Condition_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Display' : Unused code path elimination
 * Block '<S3>/Display1' : Unused code path elimination
 * Block '<S3>/Display2' : Unused code path elimination
 * Block '<S3>/Display3' : Unused code path elimination
 * Block '<S3>/Display4' : Unused code path elimination
 * Block '<S3>/Display5' : Unused code path elimination
 * Block '<S3>/Display6' : Unused code path elimination
 * Block '<S3>/Display7' : Unused code path elimination
 * Block '<S4>/Display' : Unused code path elimination
 * Block '<S4>/Display1' : Unused code path elimination
 * Block '<S4>/Display2' : Unused code path elimination
 * Block '<S4>/Display3' : Unused code path elimination
 * Block '<S5>/Display' : Unused code path elimination
 * Block '<S5>/Display1' : Unused code path elimination
 * Block '<S5>/Display2' : Unused code path elimination
 * Block '<S5>/Display3' : Unused code path elimination
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
 * '<Root>' : 'Hilly_Condition'
 * '<S1>'   : 'Hilly_Condition/HillyCond'
 * '<S2>'   : 'Hilly_Condition/HillyCond/HillyCond'
 * '<S3>'   : 'Hilly_Condition/HillyCond/HillyCond/HillyCond_LoHi_SlfVehSpd'
 * '<S4>'   : 'Hilly_Condition/HillyCond/HillyCond/HillyCond_OppVeh'
 * '<S5>'   : 'Hilly_Condition/HillyCond/HillyCond/HillyCond_PrlVeh'
 * '<S6>'   : 'Hilly_Condition/HillyCond/HillyCond/SlfVehSteerAng'
 */
#endif                                 /* RTW_HEADER_Hilly_Condition_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
