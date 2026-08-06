// GC9D01 display dimensions in portrait orientation
#ifndef TFT_WIDTH
  #define TFT_WIDTH  160
#endif
#ifndef TFT_HEIGHT
  #define TFT_HEIGHT 160
#endif

// Known modules use a 160 x 160 dual-gate panel, or a 40/50/60 x 160
// single-gate panel. Select explicitly if a custom-sized panel is used;
// otherwise the driver infers the variant from TFT_WIDTH.
#if defined (GC9D01_DUAL_GATE)
  #define GC9D01_PANEL_160X160
#endif
#if defined (GC9D01_SINGLE_GATE_40X160)
  #define GC9D01_PANEL_40X160
#endif
#if defined (GC9D01_SINGLE_GATE_50X160)
  #define GC9D01_PANEL_50X160
#endif
#if defined (GC9D01_SINGLE_GATE_60X160)
  #define GC9D01_PANEL_60X160
#endif

#if (defined (GC9D01_PANEL_160X160) + defined (GC9D01_PANEL_40X160) + \
     defined (GC9D01_PANEL_50X160) + defined (GC9D01_PANEL_60X160)) > 1
  #error "Select only one GC9D01 panel type"
#endif

#if !defined (GC9D01_PANEL_160X160) && !defined (GC9D01_PANEL_40X160) && \
    !defined (GC9D01_PANEL_50X160) && !defined (GC9D01_PANEL_60X160)
  #if (TFT_WIDTH == 40) && (TFT_HEIGHT == 160)
    #define GC9D01_PANEL_40X160
  #elif (TFT_WIDTH == 50) && (TFT_HEIGHT == 160)
    #define GC9D01_PANEL_50X160
  #elif (TFT_WIDTH == 60) && (TFT_HEIGHT == 160)
    #define GC9D01_PANEL_60X160
  #elif (TFT_WIDTH == 160) && (TFT_HEIGHT == 160)
    #define GC9D01_PANEL_160X160
  #else
    #error "GC9D01 requires a supported panel type (160x160, 40x160, 50x160 or 60x160)"
  #endif
#endif

#if defined (GC9D01_PANEL_160X160)
  #if (TFT_WIDTH != 160) || (TFT_HEIGHT != 160)
    #error "GC9D01_PANEL_160X160 requires TFT_WIDTH 160 and TFT_HEIGHT 160"
  #endif
  #define GC9D01_DEFAULT_LANDSCAPE_COL_OFFSET 0
  #define GC9D01_DEFAULT_LANDSCAPE_ROW_OFFSET 0
  #define GC9D01_DEFAULT_PORTRAIT_COL_OFFSET  0
  #define GC9D01_DEFAULT_PORTRAIT_ROW_OFFSET  0
#elif defined (GC9D01_PANEL_40X160)
  #if (TFT_WIDTH != 40) || (TFT_HEIGHT != 160)
    #error "GC9D01_PANEL_40X160 requires TFT_WIDTH 40 and TFT_HEIGHT 160"
  #endif
  #define GC9D01_DEFAULT_LANDSCAPE_COL_OFFSET -60
  #define GC9D01_DEFAULT_LANDSCAPE_ROW_OFFSET  60
  #define GC9D01_DEFAULT_PORTRAIT_COL_OFFSET    0
  #define GC9D01_DEFAULT_PORTRAIT_ROW_OFFSET    0
#elif defined (GC9D01_PANEL_50X160)
  #if (TFT_WIDTH != 50) || (TFT_HEIGHT != 160)
    #error "GC9D01_PANEL_50X160 requires TFT_WIDTH 50 and TFT_HEIGHT 160"
  #endif
  #define GC9D01_DEFAULT_LANDSCAPE_COL_OFFSET -39
  #define GC9D01_DEFAULT_LANDSCAPE_ROW_OFFSET  55
  #define GC9D01_DEFAULT_PORTRAIT_COL_OFFSET   16
  #define GC9D01_DEFAULT_PORTRAIT_ROW_OFFSET    0
#else // GC9D01_PANEL_60X160
  #if (TFT_WIDTH != 60) || (TFT_HEIGHT != 160)
    #error "GC9D01_PANEL_60X160 requires TFT_WIDTH 60 and TFT_HEIGHT 160"
  #endif
  #define GC9D01_DEFAULT_LANDSCAPE_COL_OFFSET -40
  #define GC9D01_DEFAULT_LANDSCAPE_ROW_OFFSET  50
  #define GC9D01_DEFAULT_PORTRAIT_COL_OFFSET   10
  #define GC9D01_DEFAULT_PORTRAIT_ROW_OFFSET    0
#endif

// These signed offsets are taken from displaylib_16bit_PICO. They can be
// overridden to compensate for module manufacturing tolerances.
#if defined (GC9D01_X_OFFSET_LANDSCAPE) && !defined (GC9D01_LANDSCAPE_COL_OFFSET)
  #define GC9D01_LANDSCAPE_COL_OFFSET GC9D01_X_OFFSET_LANDSCAPE
#endif
#if defined (GC9D01_Y_OFFSET_LANDSCAPE) && !defined (GC9D01_LANDSCAPE_ROW_OFFSET)
  #define GC9D01_LANDSCAPE_ROW_OFFSET GC9D01_Y_OFFSET_LANDSCAPE
#endif
#if defined (GC9D01_X_OFFSET_PORTRAIT) && !defined (GC9D01_PORTRAIT_COL_OFFSET)
  #define GC9D01_PORTRAIT_COL_OFFSET GC9D01_X_OFFSET_PORTRAIT
#endif
#if defined (GC9D01_Y_OFFSET_PORTRAIT) && !defined (GC9D01_PORTRAIT_ROW_OFFSET)
  #define GC9D01_PORTRAIT_ROW_OFFSET GC9D01_Y_OFFSET_PORTRAIT
#endif

#ifndef GC9D01_LANDSCAPE_COL_OFFSET
  #define GC9D01_LANDSCAPE_COL_OFFSET GC9D01_DEFAULT_LANDSCAPE_COL_OFFSET
#endif
#ifndef GC9D01_LANDSCAPE_ROW_OFFSET
  #define GC9D01_LANDSCAPE_ROW_OFFSET GC9D01_DEFAULT_LANDSCAPE_ROW_OFFSET
#endif
#ifndef GC9D01_PORTRAIT_COL_OFFSET
  #define GC9D01_PORTRAIT_COL_OFFSET GC9D01_DEFAULT_PORTRAIT_COL_OFFSET
#endif
#ifndef GC9D01_PORTRAIT_ROW_OFFSET
  #define GC9D01_PORTRAIT_ROW_OFFSET GC9D01_DEFAULT_PORTRAIT_ROW_OFFSET
#endif

#ifndef CGRAM_OFFSET
  #define CGRAM_OFFSET
#endif

#define TFT_INIT_DELAY 0x80

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
#define TFT_IDXRD   0x00

#define TFT_MAD_MY  0x80
#define TFT_MAD_MX  0x40
#define TFT_MAD_MV  0x20
#define TFT_MAD_ML  0x10
#define TFT_MAD_MH  0x04

// GC9D01 uses the opposite MADCTL colour-order polarity to most DCS panels.
#define TFT_MAD_RGB 0x08
#define TFT_MAD_BGR 0x00

#ifdef TFT_RGB_ORDER
  #if (TFT_RGB_ORDER == TFT_RGB)
    #define TFT_MAD_COLOR_ORDER TFT_MAD_RGB
  #else
    #define TFT_MAD_COLOR_ORDER TFT_MAD_BGR
  #endif
#else
  #define TFT_MAD_COLOR_ORDER TFT_MAD_BGR
#endif
