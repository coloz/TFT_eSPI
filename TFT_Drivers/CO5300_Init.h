// CO5300 initialization ported from Arduino_GFX (BSD-licensed).
// Keep each command and its parameters in one transaction, including on QSPI.
// https://github.com/moononournation/Arduino_GFX/blob/master/src/display/Arduino_CO5300.h
{
  writecommand(TFT_SLPOUT);
  delay(120);
  uint8_t data = 0x00;
  writecommand(0xFE, &data, 1);
  data = 0x80;
  writecommand(0xC4, &data, 1);
  data = 0x55; // RGB565
  writecommand(TFT_COLMOD, &data, 1);
  data = 0x20;
  writecommand(0x53, &data, 1);
  data = 0xFF;
  writecommand(0x63, &data, 1);
  writecommand(TFT_DISPON);
  data = 0xD0;
  writecommand(0x51, &data, 1);
  data = 0x00;
  writecommand(0x58, &data, 1);
  delay(10);
  writecommand(TFT_INVOFF);
}
