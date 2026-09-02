        ////////////////////////////////////////////////////
        //       TFT_eSPI functions for CI130X            //
        ////////////////////////////////////////////////////

#ifndef _TFT_eSPI_CI13XXH_
#define _TFT_eSPI_CI13XXH_

// CI130X uses the portable GPIO/SPI rendering path. Its Arduino core provides
// a transaction-compatible GPIO software SPI master rather than a user-facing
// hardware SPI controller.
#include "TFT_eSPI_Generic.h"

// Processor ID reported by getSetup().
#undef PROCESSOR_ID
#define PROCESSOR_ID 0x1300

#endif // _TFT_eSPI_CI13XXH_
