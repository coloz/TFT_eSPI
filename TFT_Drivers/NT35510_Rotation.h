  rotation = m % 4;
  static const uint16_t madctl[4] = {0x00, 0x60, 0xC0, 0xA0};
  DC_C; tft_Write_16(0x3600); DC_D; tft_Write_16(madctl[rotation]);
  if (rotation & 1) { _width = _init_height; _height = _init_width; }
  else { _width = _init_width; _height = _init_height; }
