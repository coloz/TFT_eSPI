// GC9107 display dimensions in portrait orientation
#ifndef TFT_WIDTH
  #define TFT_WIDTH  128
#endif
#ifndef TFT_HEIGHT
  #define TFT_HEIGHT 128
#endif

// The GC9107 is manufactured with either a 128 x 128 or 128 x 160 GRAM map.
// Select the map explicitly when required; otherwise infer it from TFT_HEIGHT.
#if defined (GC9107_MEMORY_128X128) && defined (GC9107_MEMORY_128X160)
  #error "Select only one GC9107 GRAM mapping"
#endif

#if !defined (GC9107_MEMORY_128X128) && !defined (GC9107_MEMORY_128X160)
  #if (TFT_HEIGHT > 128)
    #define GC9107_MEMORY_128X160
  #else
    #define GC9107_MEMORY_128X128
  #endif
#endif

#define GC9107_RAM_WIDTH 128

#if defined (GC9107_MEMORY_128X160)
  #define GC9107_RAM_HEIGHT 160
#else
  #define GC9107_RAM_HEIGHT 128
#endif

#if (TFT_WIDTH < 1) || (TFT_HEIGHT < 1)
  #error "TFT_WIDTH/TFT_HEIGHT must be positive for GC9107"
#elif (TFT_WIDTH > GC9107_RAM_WIDTH) || (TFT_HEIGHT > GC9107_RAM_HEIGHT)
  #error "TFT_WIDTH/TFT_HEIGHT exceed the selected GC9107 GRAM mapping"
#endif

// Offsets locate a cropped panel in GRAM for rotation 0. Examples:
// 60 x 160: column 34, row 0; 96 x 160: column 16, row 0.
#ifndef GC9107_COL_OFFSET
  #define GC9107_COL_OFFSET 0
#endif
#ifndef GC9107_ROW_OFFSET
  #define GC9107_ROW_OFFSET 0
#endif

#if (GC9107_COL_OFFSET < 0) || (GC9107_ROW_OFFSET < 0)
  #error "GC9107 panel offsets must not be negative"
#elif ((GC9107_COL_OFFSET + TFT_WIDTH) > GC9107_RAM_WIDTH) || \
    ((GC9107_ROW_OFFSET + TFT_HEIGHT) > GC9107_RAM_HEIGHT)
  #error "GC9107 panel offset places the display outside GRAM"
#endif

// The rotation code updates colstart and rowstart for all four orientations.
#ifndef CGRAM_OFFSET
  #define CGRAM_OFFSET
#endif

// Delay marker used by commandList()-style initialisation tables
#define TFT_INIT_DELAY 0x80

// Generic commands used by TFT_eSPI.cpp
#define TFT_NOP     0x00
#define TFT_SWRST   0x01

#define TFT_SLPIN   0x10
#define TFT_SLPOUT  0x11
#define TFT_NORON   0x13

#define TFT_INVOFF  0x20
#define TFT_INVON   0x21

#define TFT_DISPOFF 0x28
#define TFT_DISPON  0x29

#define TFT_CASET   0x2A
#define TFT_PASET   0x2B
#define TFT_RAMWR   0x2C
#define TFT_RAMRD   0x2E

#define TFT_MADCTL  0x36
#define TFT_COLMOD  0x3A

// Flags for TFT_MADCTL
#define TFT_MAD_MY  0x80
#define TFT_MAD_MX  0x40
#define TFT_MAD_MV  0x20
#define TFT_MAD_ML  0x10
#define TFT_MAD_BGR 0x08
#define TFT_MAD_MH  0x04
#define TFT_MAD_RGB 0x00

#ifdef TFT_RGB_ORDER
  #if (TFT_RGB_ORDER == 1)
    #define TFT_MAD_COLOR_ORDER TFT_MAD_RGB
  #else
    #define TFT_MAD_COLOR_ORDER TFT_MAD_BGR
  #endif
#else
  // Arduino_GFX uses BGR for the common 128 x 128 IPS module.
  #define TFT_MAD_COLOR_ORDER TFT_MAD_BGR
#endif

#define TFT_IDXRD   0x00
