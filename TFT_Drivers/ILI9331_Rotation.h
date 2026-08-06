  rotation = m % 4;
  static const uint16_t gateScan[4] = {0x2700, 0x2700, 0xA700, 0xA700};
  static const uint16_t sourceScan[4] = {0x0100, 0x0000, 0x0000, 0x0100};
  static const uint16_t entryMode[4] = {0x1030, 0x1038, 0x1030, 0x1038};
  DC_C; tft_Write_16(0x0060); DC_D; tft_Write_16(gateScan[rotation]);
  DC_C; tft_Write_16(0x0001); DC_D; tft_Write_16(sourceScan[rotation]);
  DC_C; tft_Write_16(0x0003); DC_D; tft_Write_16(entryMode[rotation]);
  DC_C; tft_Write_16(TFT_RAMWR); DC_D;
  if (rotation & 1) { _width = _init_height; _height = _init_width; }
  else { _width = _init_width; _height = _init_height; }
