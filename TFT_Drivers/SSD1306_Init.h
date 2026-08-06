// SSD1306 page-buffer initialization based on Arduino_GFX.
{
  uint8_t comPins = ((_init_width == 128) && (_init_height == 32)) || ((_init_width == 96) && (_init_height == 16)) ? 0x02 : 0x12;
  uint8_t contrast = ((_init_width == 128) && (_init_height == 64)) ? 0x9F :
                     (((_init_width == 128) && (_init_height == 32)) ? 0x8F :
                     (((_init_width == 96) && (_init_height == 16)) ? 0x10 : 0x82));
  writecommand(0xAE);
  writecommand(0x81); writecommand(contrast);
  writecommand(0xA6);
  writecommand(0x2E);
  writecommand(0x20); writecommand(0x00);
  writecommand(0xA1);
  writecommand(0xA8); writecommand(_init_height - 1);
  writecommand(0xC8);
  writecommand(0xD3); writecommand(0x00);
  writecommand(0xDA); writecommand(comPins);
  writecommand(0xD5); writecommand(0x80);
  writecommand(0xD9); writecommand(0x22);
  writecommand(0xDB); writecommand(0x40);
  writecommand(0x8D); writecommand(0x14);
  writecommand(0x40);
  writecommand(0xA4);
  delay(100);
  writecommand(0xAF);
  memset(_monoBuffer, 0, sizeof(_monoBuffer));
  _monoFlush(0, _init_width - 1, 0, (_init_height - 1) >> 3);
}
