/*
 * File: xil_instrumentation.c
 *
 * Code generated for instrumentation.
 *
 * This file contains stub implementations of the instrumentation utility
 * functions. These stubs allow instrumented code to be compiled
 * into an executable that does not support collection of execution
 * instrumentation data.
 *
 */

#include "xil_instrumentation.h"

/* Code instrumentation offset(s) for model Hilly_Condition (SIL) */
#define _MW_INSTRUM_R_0ca4049401140bb4_offset 0
#include <string.h>

void __MW_INSTRUM_RECORD_HIT(uint32_T sectionId)
{
  /* Send information that instrumentation point was hit to host */
  xilUploadCodeInstrData((void *)0, (uint32_T)(0), sectionId);
}

#ifdef __cplusplus

extern "C" {

#endif

  const unsigned int __mw_instrum_Hilly_Condition_hits_size = 83;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  const unsigned int __mw_instrum_Hilly_Condition_truth_tables_size = 14;

#ifdef __cplusplus

}
#endif

unsigned int __mw_instrum_Hilly_Condition_hits[97];

#ifdef __cplusplus

extern "C" {

#endif

  unsigned int* __mw_instrum_Hilly_Condition_phits =
    &__mw_instrum_Hilly_Condition_hits[0];

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  unsigned int* __mw_instrum_Hilly_Condition_truth_tables =
    &__mw_instrum_Hilly_Condition_hits[83];

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C"
#endif

unsigned int *__MW_INSTRUM_Hilly_Condition_INIT_FILE(unsigned int decCovId)
{
  switch (decCovId) {
   case 7:
    return &__mw_instrum_Hilly_Condition_truth_tables[0];

   default:
    return &__mw_instrum_Hilly_Condition_truth_tables[0];
  }
}

void xilUploadCoverageSynthesis(void)
{
  uint32_T sz;
  sz = (uint32_T)((__mw_instrum_Hilly_Condition_hits_size +
                   __mw_instrum_Hilly_Condition_truth_tables_size) * sizeof
                  (uint32_T));
  xilUploadCodeInstrData((void *)__mw_instrum_Hilly_Condition_hits, sz, 1);
  memset((void *) __mw_instrum_Hilly_Condition_hits, 0, sz);
}

/* Code instrumentation method(s) for model Hilly_Condition (SIL) */
void _MW_INSTRUM_R_0ca4049401140bb4(uint32_T sectionId)
{
  __MW_INSTRUM_RECORD_HIT(_MW_INSTRUM_R_0ca4049401140bb4_offset + sectionId);
}

void PauseEvent (void)
{
  /* callbacks executed when the sim is paused */
  xilUploadCoverageSynthesis();
}

void TerminateEvent (void)
{
  /* callbacks executed when the sim ends */
  xilUploadCoverageSynthesis();
}

void StepCompletedEvent (void)
{
  /* callbacks executed when a step ends */
  xilUploadCoverageSynthesis();
}
