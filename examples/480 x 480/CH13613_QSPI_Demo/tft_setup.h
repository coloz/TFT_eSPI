// Local TFT_eSPI setup for the OSPTEK AM160Q480480LK AMOLED panel.
// The sketch-local setup overrides User_Setup_Select.h automatically.

#define USER_SETUP_INFO "ESP32-S3 CH13613 480x480 QSPI example"
#define USER_SETUP_ID 13613

#define CH13613_DRIVER

#define TFT_WIDTH  480
#define TFT_HEIGHT 480

#define TFT_CS    45
#define TFT_SCLK  17
#define TFT_D0     8
#define TFT_D1    16
#define TFT_D2    15
#define TFT_D3    18
#define TFT_RST    7
#define TFT_TE     38  // Optional tearing-effect input; not waited on here.

#define TFT_SPI_MODE SPI_MODE0
#define SPI_FREQUENCY 40000000

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_GFXFF
#define SMOOTH_FONT
