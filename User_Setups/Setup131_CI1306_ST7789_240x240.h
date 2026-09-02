// Generic ChipIntelli CI1306 wired to a 240x240 ST7789 SPI display.
// Display SCL/SDA labels are used as SPI SCLK/MOSI respectively.
#define USER_SETUP_ID 131
#define USER_SETUP_INFO "CI1306 ST7789 240x240 PA5/PA3"

#define ST7789_DRIVER
#define TFT_WIDTH  240
#define TFT_HEIGHT 240

#define TFT_SCLK PA5
#define TFT_MISO -1
#define TFT_MOSI PA3
#define TFT_RST  PA2
#define TFT_DC   PA6
#define TFT_CS   PB0
#define TFT_BL   PB6
#define TFT_BACKLIGHT_ON HIGH

// This panel samples data on the leading rising edge. TFT_eSPI defaults ST7789
// displays to Mode 3, but the CI130X GPIO software-SPI route must use Mode 0.
#define TFT_SPI_MODE SPI_MODE0

// Try one of these if panel colours or inversion are incorrect.
//#define TFT_RGB_ORDER TFT_BGR
//#define TFT_INVERSION_ON
//#define TFT_INVERSION_OFF

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_GFXFF

// Start conservatively for GPIO software SPI and jumper-wire signal integrity.
#define SPI_FREQUENCY       500000
#define SPI_READ_FREQUENCY  250000

// PA2/PA3/PA5/PA6 share IIS-labelled functions. Use Algorithm=null and do not
// enable an IIS/audio route on the same pads while the display is active.
