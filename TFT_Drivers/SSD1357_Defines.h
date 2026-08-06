#ifndef TFT_WIDTH
  #define TFT_WIDTH 128
#endif
#ifndef TFT_HEIGHT
  #define TFT_HEIGHT 128
#endif
#if (TFT_WIDTH < 1) || (TFT_HEIGHT < 1) || (TFT_WIDTH > 128) || (TFT_HEIGHT > 128)
  #error "SSD1357 TFT_WIDTH/TFT_HEIGHT must fit within the 128 x 128 GRAM"
#endif
#ifndef SSD1357_COL_OFFSET1
  #define SSD1357_COL_OFFSET1 ((128 - TFT_WIDTH) / 2)
#endif
#ifndef SSD1357_ROW_OFFSET1
  #define SSD1357_ROW_OFFSET1 0
#endif
#ifndef SSD1357_COL_OFFSET2
  #define SSD1357_COL_OFFSET2 ((128 - TFT_WIDTH) / 2)
#endif
#ifndef SSD1357_ROW_OFFSET2
  #define SSD1357_ROW_OFFSET2 0
#endif
#define TFT_INIT_DELAY 0x80
#define TFT_NOP 0x00
#define TFT_SWRST TFT_NOP
#define TFT_CASET 0x15
#define TFT_PASET 0x75
#define TFT_RAMWR 0x5C
#define TFT_RAMRD 0x5D
#define TFT_IDXRD TFT_NOP
#define TFT_INVOFF 0xA6
#define TFT_INVON 0xA7
