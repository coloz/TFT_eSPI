// SH8601 initialization ported from Arduino_GFX (BSD-licensed).
// Commands are emitted directly so the sequence works with TFT_eSPI SPI and parallel buses.
{
  writecommand(0x11);
  delay(120);
  writecommand(0x13);
  writecommand(0x20);
  writecommand(0x3A);
  writedata(0x05);
  writecommand(0x29);
  writecommand(0x53);
  writedata(0x28);
  writecommand(0x51);
  writedata(0xD0);
  writecommand(0x58);
  writedata(0x00);
  delay(10);
  writecommand(TFT_INVOFF);
}
