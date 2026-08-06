// Select a DCS/RGB565 controller ported from Arduino_GFX.
#if defined (AXS15231B_DRIVER)
  #include "AXS15231B_Defines.h"
  #define TFT_DRIVER 0x1523
#elif defined (CO5300_DRIVER)
  #include "CO5300_Defines.h"
  #define TFT_DRIVER 0x5300
#elif defined (GC9106_DRIVER)
  #include "GC9106_Defines.h"
  #define TFT_DRIVER 0x9106
#elif defined (GC9C01_DRIVER)
  #include "GC9C01_Defines.h"
  #define TFT_DRIVER 0x9C01
#elif defined (HX8369A_DRIVER)
  #include "HX8369A_Defines.h"
  #define TFT_DRIVER 0x8369
#elif defined (ILI9806_DRIVER)
  #include "ILI9806_Defines.h"
  #define TFT_DRIVER 0x9806
#elif defined (JD9613_DRIVER)
  #include "JD9613_Defines.h"
  #define TFT_DRIVER 0x9613
#elif defined (NT35310_DRIVER)
  #include "NT35310_Defines.h"
  #define TFT_DRIVER 0x5310
#elif defined (NT39125_DRIVER)
  #include "NT39125_Defines.h"
  #define TFT_DRIVER 0x9125
#elif defined (NV3001B_DRIVER)
  #include "NV3001B_Defines.h"
  #define TFT_DRIVER 0x301B
#elif defined (NV3007_DRIVER)
  #include "NV3007_Defines.h"
  #define TFT_DRIVER 0x3007
#elif defined (NV3023_DRIVER)
  #include "NV3023_Defines.h"
  #define TFT_DRIVER 0x3023
#elif defined (NV3041A_DRIVER)
  #include "NV3041A_Defines.h"
  #define TFT_DRIVER 0x3041
#elif defined (R61529_DRIVER)
  #include "R61529_Defines.h"
  #define TFT_DRIVER 0x6152
#elif defined (RM67162_DRIVER)
  #include "RM67162_Defines.h"
  #define TFT_DRIVER 0x6716
#elif defined (RM690B0_DRIVER)
  #include "RM690B0_Defines.h"
  #define TFT_DRIVER 0x690B
#elif defined (SH8601_DRIVER)
  #include "SH8601_Defines.h"
  #define TFT_DRIVER 0x8601
#elif defined (SPD2010_DRIVER)
  #include "SPD2010_Defines.h"
  #define TFT_DRIVER 0x2010
#elif defined (ST77916_DRIVER)
  #include "ST77916_Defines.h"
  #define TFT_DRIVER 0x7916
#elif defined (WEA2012_DRIVER)
  #include "WEA2012_Defines.h"
  #define TFT_DRIVER 0x2012
#endif
