/*
 * File: Hilly_Condition_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef HILLY_CONDITION_CA_H
#define HILLY_CONDITION_CA_H

/* preprocessor validation checks */
#include "Hilly_Condition_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_Hilly_Condition_HWRes;
extern CA_PWS_TestResults CA_Hilly_Condition_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_Hilly_Condition_ExpHW;
extern CA_HWImpl CA_Hilly_Condition_ActHW;

/* entry point function to run tests */
void Hilly_Condition_caRunTests(void);

#endif                                 /* HILLY_CONDITION_CA_H */
