  rotation = m % 4;
  static const uint16_t outputControl[4] = {0x0027, 0x0127, 0x0127, 0x0027};
  static const uint16_t entryMode[4] = {0x0010, 0x0018, 0x0030, 0x0038};
  DC_C; tft_Write_16(0x0001); DC_D; tft_Write_16(outputControl[rotation]);
  DC_C; tft_Write_16(0x0003); DC_D; tft_Write_16(entryMode[rotation]);
  if (rotation & 1) { _width = _init_height; _height = _init_width; }
  else { _width = _init_width; _height = _init_height; }
