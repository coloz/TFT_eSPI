#ifndef TFT_WIDTH
  #define TFT_WIDTH  96
#endif
#ifndef TFT_HEIGHT
  #define TFT_HEIGHT 64
#endif

#if (TFT_WIDTH < 1) || (TFT_HEIGHT < 1) || (TFT_WIDTH > 96) || (TFT_HEIGHT > 64)
  #error "SSD1331 TFT_WIDTH/TFT_HEIGHT must fit within the 96 x 64 GRAM"
#endif

#define TFT_INIT_DELAY 0x80

#define TFT_NOP     0x00
#define TFT_SWRST   TFT_NOP
#define TFT_CASET   0x15 // Set column address
#define TFT_PASET   0x75 // Set row address
#define TFT_RAMWR   TFT_NOP
#define TFT_RAMRD   TFT_NOP
#define TFT_IDXRD   TFT_NOP
#define TFT_INVOFF  0xA4 // Normal display
#define TFT_INVON   0xA7 // Inverse display
#define TFT_DISPOFF 0xAE
#define TFT_DISPON  0xAF

// SETREMAP bit 2 selects the segment colour sequence.
#ifdef TFT_RGB_ORDER
  #if (TFT_RGB_ORDER == TFT_BGR)
    #define SSD1331_COLOR_REMAP 0x04
  #else
    #define SSD1331_COLOR_REMAP 0x00
  #endif
#else
  #define SSD1331_COLOR_REMAP 0x00
#endif
