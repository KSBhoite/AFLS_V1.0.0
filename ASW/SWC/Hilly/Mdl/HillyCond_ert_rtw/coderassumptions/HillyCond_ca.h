/*
 * File: HillyCond_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef HILLYCOND_CA_H
#define HILLYCOND_CA_H

/* preprocessor validation checks */
#include "HillyCond_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_HillyCond_HWRes;
extern CA_PWS_TestResults CA_HillyCond_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_HillyCond_ExpHW;
extern CA_HWImpl CA_HillyCond_ActHW;

/* entry point function to run tests */
void HillyCond_caRunTests(void);

#endif                                 /* HILLYCOND_CA_H */
