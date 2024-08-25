/*
 * File: Hilly_Condition_ca.c
 *
 * Abstract: Tests assumptions in the generated code.
 */

#include "Hilly_Condition_ca.h"

CA_HWImpl_TestResults CA_Hilly_Condition_HWRes;
CA_PWS_TestResults CA_Hilly_Condition_PWSRes;
const CA_HWImpl CA_Hilly_Condition_ExpHW = {
  8,                                   /* BitPerChar */
  16,                                  /* BitPerShort */
  32,                                  /* BitPerInt */
  32,                                  /* BitPerLong */
  64,                                  /* BitPerLongLong */
  32,                                  /* BitPerFloat */
  64,                                  /* BitPerDouble */
  64,                                  /* BitPerPointer */
  64,                                  /* BitPerSizeT */
  64,                                  /* BitPerPtrDiffT */
  CA_LITTLE_ENDIAN,                    /* Endianess */
  CA_ZERO,                             /* IntDivRoundTo */
  1,                                   /* ShiftRightIntArith */
  0,                                   /* LongLongMode */
  0,                                   /* PortableWordSizes */
  "Intel->x86-64 (Windows64)",         /* HWDeviceType */
  0,                                   /* MemoryAtStartup */
  0,                                   /* DynamicMemoryAtStartup */
  0,                                   /* DenormalFlushToZero */
  0                                    /* DenormalAsZero */
};

CA_HWImpl CA_Hilly_Condition_ActHW;
void Hilly_Condition_caRunTests(void)
{
  /* verify hardware implementation */
  caVerifyPortableWordSizes(&CA_Hilly_Condition_ActHW, &CA_Hilly_Condition_ExpHW,
    &CA_Hilly_Condition_PWSRes);
  caVerifyHWImpl(&CA_Hilly_Condition_ActHW, &CA_Hilly_Condition_ExpHW,
                 &CA_Hilly_Condition_HWRes);
}
