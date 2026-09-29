// CO5300 480 x 480 AMOLED, ESP32-S3 1-1-4 QSPI.
// Example wiring only: change these pins to match your board.

#define USER_SETUP_INFO "ESP32-S3 CO5300 480x480 QSPI"
#define USER_SETUP_ID 5300

#define CO5300_DRIVER
#define TFT_QSPI

#define TFT_WIDTH  480
#define TFT_HEIGHT 480

#define TFT_CS    45
#define TFT_SCLK  17
#define TFT_D0     8
#define TFT_D1    16
#define TFT_D2    15
#define TFT_D3    18
#define TFT_RST    7

// No DC or backlight pin: brightness uses command 0x51 (0..255).
// Enable any board-specific panel power supply before calling tft.init().
// Native orientation only; CO5300 QSPI setRotation() stays at rotation 0.
// #define TFT_RGB_ORDER TFT_BGR // Enable only if red and blue are swapped.

#define TFT_SPI_MODE SPI_MODE0
#define SPI_FREQUENCY 40000000

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT
