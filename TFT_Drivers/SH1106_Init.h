// SH1106 page-buffer initialization based on Arduino_GFX.
{
  writecommand(0xAE);
  writecommand(0xD5); writecommand(0x80);
  writecommand(0xA8); writecommand(_init_height - 1);
  writecommand(0xD3); writecommand(0x00);
  writecommand(0x40);
  writecommand(0xAD); writecommand(0x8B);
  writecommand(0xA1);
  writecommand(0xC8);
  writecommand(0xDA); writecommand(0x12);
  writecommand(0x81); writecommand(0x8F);
  writecommand(0xD9); writecommand(0x1F);
  writecommand(0xDB); writecommand(0x40);
  writecommand(0x33);
  writecommand(0xA6);
  writecommand(0x20); writecommand(0x10);
  writecommand(0xA4);
  delay(100);
  writecommand(0xAF);
  memset(_monoBuffer, 0, sizeof(_monoBuffer));
  _monoFlush(0, _init_width - 1, 0, (_init_height - 1) >> 3);
}
