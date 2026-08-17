// CH13613 command definitions for the OSPTEK AM160Q480480LK panel.

#ifndef TFT_WIDTH
  #define TFT_WIDTH  480
#endif
#ifndef TFT_HEIGHT
  #define TFT_HEIGHT 480
#endif

// This controller is connected through a 1-1-4 QSPI bus. Commands and
// parameters use one data line; pixel payloads use all four data lines.
#define TFT_QSPI
#define TFT_INIT_DELAY 0x80

#define TFT_NOP     0x00
#define TFT_SWRST   0x01

#define TFT_SLPIN   0x10
#define TFT_SLPOUT  0x11

#define TFT_INVOFF  0x20
#define TFT_INVON   0x21

#define TFT_DISPOFF 0x28
#define TFT_DISPON  0x29

#define TFT_CASET   0x2A
#define TFT_PASET   0x2B
#define TFT_RAMWR   0x2C
#define TFT_RAMRD   0x2E

#define TFT_MADCTL  0x36
#define TFT_RAMWRC  0x3C

#define TFT_MAD_MX  0x40

// CH13613 QSPI reads are not implemented by this backend.
#define TFT_IDXRD   0x00
