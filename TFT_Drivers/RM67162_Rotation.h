// RM67162 rotation and GRAM offset mapping.
  rotation = m % 4;
  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(0x00);
      _width = _init_width;
      _height = _init_height;
      colstart = RM67162_COL_OFFSET1; rowstart = RM67162_ROW_OFFSET1;
      break;
    case 1:
      writedata(0x60);
      _width = _init_height;
      _height = _init_width;
      colstart = RM67162_ROW_OFFSET1; rowstart = RM67162_COL_OFFSET2;
      break;
    case 2:
      writedata(0xC0);
      _width = _init_width;
      _height = _init_height;
      colstart = RM67162_COL_OFFSET2; rowstart = RM67162_ROW_OFFSET2;
      break;
    case 3:
      writedata(0xA0);
      _width = _init_height;
      _height = _init_width;
      colstart = RM67162_ROW_OFFSET2; rowstart = RM67162_COL_OFFSET1;
      break;
  }
