#ifndef TFT_WIDTH
  #define TFT_WIDTH 128
#endif
#ifndef TFT_HEIGHT
  #define TFT_HEIGHT 64
#endif
#if (TFT_WIDTH < 1) || (TFT_WIDTH > 128) || (TFT_HEIGHT < 1) || (TFT_HEIGHT > 64)
  #error "SSD1306 dimensions must fit within 128 x 64"
#endif
#ifndef SSD1306_COL_OFFSET
  #if (TFT_WIDTH == 72)
    #define SSD1306_COL_OFFSET 28
  #elif (TFT_WIDTH == 64)
    #define SSD1306_COL_OFFSET 32
  #else
    #define SSD1306_COL_OFFSET 0
  #endif
#endif
#define TFT_MONO_DRIVER
#define TFT_INIT_DELAY 0x80
#define TFT_NOP 0xE3
#define TFT_SWRST TFT_NOP
#define TFT_CASET 0x21
#define TFT_PASET 0x22
#define TFT_RAMWR 0x00
#define TFT_RAMRD 0x00
#define TFT_IDXRD TFT_NOP
#define TFT_INVOFF 0xA6
#define TFT_INVON 0xA7
