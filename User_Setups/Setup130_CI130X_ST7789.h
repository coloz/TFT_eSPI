// ChipIntelli CI1302/CI1303/CI1306 software-SPI setup for a 240x320 ST7789.
// Change the controller, dimensions and control pins to match the actual panel.
#define USER_SETUP_ID 130
#define USER_SETUP_INFO "CI130X ST7789 software SPI"

#define ST7789_DRIVER
#define TFT_WIDTH  240
#define TFT_HEIGHT 320

// Use the selected arduino-ci130x variant's software-SPI aliases. Generic
// CI1302/CI1303/CI1306 variants use PA5/PA2/PA4/PA3 for SCK/MISO/MOSI/CS.
// easyVoice 1306 dev automatically uses its PD0/PA7/PD1/PB0 header route.
#define TFT_SCLK SCK
#define TFT_MISO MISO
#define TFT_MOSI MOSI
#define TFT_CS   SS

// PA6 is bonded out on all supported CI130X packages. It can conflict with
// UART2 RX or IIS MCLK, so change it if either peripheral is used.
#define TFT_DC   PA6

// No reset GPIO is universally free across SSOP24 and crystal-based QFN40
// boards. Connect panel reset to the board reset/3.3 V, or replace -1 with a
// free GPIO for the selected board.
#define TFT_RST  -1

// Uncomment and assign a free pin when using an XPT2046 touch controller.
//#define TOUCH_CS PA0

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_GFXFF

// arduino-ci130x implements GPIO software SPI, capped at a requested 4 MHz.
// Actual clock and refresh throughput are lower and DMA is not available.
#define SPI_FREQUENCY       4000000
#define SPI_READ_FREQUENCY  2000000
#define SPI_TOUCH_FREQUENCY 2000000

// The default SPI route shares IIS-labelled pads on generic boards. Use an
// Algorithm=null board profile and verify custom audio/peripheral pin usage.
