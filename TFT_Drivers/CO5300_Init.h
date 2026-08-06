// CO5300 initialization ported from Arduino_GFX (BSD-licensed).
// Commands are emitted directly so the sequence works with TFT_eSPI SPI and parallel buses.
{
  writecommand(0x11);
  delay(120);
  writecommand(0xFE);
  writedata(0x00);
  writecommand(0xC4);
  writedata(0x80);
  writecommand(0x3A);
  writedata(0x55);
  writecommand(0x53);
  writedata(0x20);
  writecommand(0x63);
  writedata(0xFF);
  writecommand(0x29);
  writecommand(0x51);
  writedata(0xD0);
  writecommand(0x58);
  writedata(0x00);
  delay(10);
  writecommand(TFT_INVOFF);
}
