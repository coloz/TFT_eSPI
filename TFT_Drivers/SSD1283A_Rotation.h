  rotation = m % 4;
  static const uint16_t entryMode[4] = {0x6830, 0x6828, 0x6800, 0x6818};
  DC_C; tft_Write_16(0x0003); DC_D; tft_Write_16(entryMode[rotation]);
  if (rotation & 1) { _width = _init_height; _height = _init_width; }
  else { _width = _init_width; _height = _init_height; }
