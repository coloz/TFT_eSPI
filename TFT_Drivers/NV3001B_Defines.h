// NV3001B controller definitions. Initialization values are derived from Arduino_GFX.
#ifndef TFT_WIDTH
  #define TFT_WIDTH 128
#endif
#ifndef TFT_HEIGHT
  #define TFT_HEIGHT 220
#endif

#ifndef NV3001B_COL_OFFSET1
  #define NV3001B_COL_OFFSET1 0
#endif
#ifndef NV3001B_ROW_OFFSET1
  #define NV3001B_ROW_OFFSET1 0
#endif
#ifndef NV3001B_COL_OFFSET2
  #define NV3001B_COL_OFFSET2 0
#endif
#ifndef NV3001B_ROW_OFFSET2
  #define NV3001B_ROW_OFFSET2 0
#endif

#define ARDUINO_GFX_DCS_DRIVER
#define CGRAM_OFFSET
#define TFT_INIT_DELAY 0x80
#define TFT_NOP 0x00
#define TFT_SWRST 0x01
#define TFT_SLPIN 0x10
#define TFT_SLPOUT 0x11
#define TFT_INVOFF 0x20
#define TFT_INVON 0x21
#define TFT_DISPOFF 0x28
#define TFT_DISPON 0x29
#define TFT_CASET 0x2A
#define TFT_PASET 0x2B
#define TFT_RAMWR 0x2C
#define TFT_RAMRD 0x2E
#define TFT_MADCTL 0x36
#define TFT_COLMOD 0x3A
#define TFT_MAD_MY 0x80
#define TFT_MAD_MX 0x40
#define TFT_MAD_MV 0x20
#define TFT_MAD_ML 0x10
#define TFT_MAD_BGR 0x08
#define TFT_MAD_MH 0x04
#define TFT_MAD_RGB 0x00
#define TFT_IDXRD 0x00
