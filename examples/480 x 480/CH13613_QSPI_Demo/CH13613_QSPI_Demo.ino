/*
  CH13613 QSPI example for ESP32-S3 and the OSPTEK 1.6-inch 480x480 AMOLED.

  Connections:
    CS  = GPIO45    SCLK = GPIO17
    D0  = GPIO8     D1   = GPIO16
    D2  = GPIO15    D3   = GPIO18
    RST = GPIO7     TE   = GPIO38

  The display configuration is in the tft_setup.h file beside this sketch,
  so no changes to the library's User_Setup_Select.h are required.
*/

#include <Arduino.h>

#if !defined(CONFIG_IDF_TARGET_ESP32S3)
  #error "The CH13613 QSPI example requires an ESP32-S3 board"
#endif

#include <TFT_eSPI.h>

TFT_eSPI tft;

static uint32_t frameCount = 0;
static uint32_t lastUpdate = 0;

static void drawStaticScreen()
{
  tft.fillScreen(TFT_BLACK);

  tft.setTextDatum(TC_DATUM);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.setTextSize(3);
  tft.drawString("CH13613 QSPI", 240, 24);

  tft.setTextColor(TFT_LIGHTGREY, TFT_BLACK);
  tft.setTextSize(2);
  tft.drawString("ESP32-S3  |  480 x 480  |  40 MHz", 240, 62);

  tft.drawRoundRect(18, 96, 444, 300, 12, TFT_WHITE);
  tft.fillRoundRect(38, 116, 190, 70, 10, TFT_RED);
  tft.fillRoundRect(252, 116, 190, 70, 10, TFT_GREEN);

  tft.fillCircle(133, 246, 44, TFT_BLUE);
  tft.drawCircle(347, 246, 44, TFT_YELLOW);
  tft.drawCircle(347, 246, 43, TFT_YELLOW);

  tft.fillRectHGradient(40, 318, 400, 34, TFT_MAGENTA, TFT_CYAN);
  tft.fillTriangle(72, 382, 128, 326, 184, 382, TFT_ORANGE);
  tft.drawEllipse(350, 366, 72, 24, TFT_CYAN);

  tft.setTextDatum(BC_DATUM);
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.setTextSize(2);
  tft.drawString("QSPI frame counter", 240, 432);
}

void setup()
{
  Serial.begin(115200);

  pinMode(TFT_TE, INPUT);

  tft.init();
  tft.setRotation(0);
  drawStaticScreen();
}

void loop()
{
  const uint32_t now = millis();
  if (now - lastUpdate < 1000) return;
  lastUpdate = now;

  ++frameCount;
  tft.setTextDatum(BC_DATUM);
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.setTextSize(3);
  tft.setTextPadding(180);
  tft.drawNumber(frameCount, 240, 474);
}
