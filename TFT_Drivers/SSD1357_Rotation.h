  rotation = m % 4;
  static const uint8_t remap[4] = {0x72, 0x71, 0x60, 0x63};
  writecommand(0xA0);
  writedata(remap[rotation]);
  writedata(0x00);
  writecommand(0xA2);
  writedata(rotation < 2 ? (128 - _init_height) : 0);
  switch (rotation) {
    case 1:
      _width = _init_height; _height = _init_width;
      colstart = SSD1357_ROW_OFFSET1; rowstart = SSD1357_COL_OFFSET2;
      break;
    case 2:
      _width = _init_width; _height = _init_height;
      colstart = SSD1357_COL_OFFSET2; rowstart = SSD1357_ROW_OFFSET2;
      break;
    case 3:
      _width = _init_height; _height = _init_width;
      colstart = SSD1357_ROW_OFFSET2; rowstart = SSD1357_COL_OFFSET1;
      break;
    default:
      _width = _init_width; _height = _init_height;
      colstart = SSD1357_COL_OFFSET1; rowstart = SSD1357_ROW_OFFSET1;
      break;
  }
