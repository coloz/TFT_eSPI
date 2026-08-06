// HX8369A rotation and GRAM offset mapping.
  rotation = m % 8;
  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(0x00);
      _width = _init_width;
      _height = _init_height;
      colstart = HX8369A_COL_OFFSET1; rowstart = HX8369A_ROW_OFFSET1;
      break;
    case 1:
      writedata(0x60);
      _width = _init_height;
      _height = _init_width;
      colstart = HX8369A_ROW_OFFSET1; rowstart = HX8369A_COL_OFFSET2;
      break;
    case 2:
      writedata(0xC0);
      _width = _init_width;
      _height = _init_height;
      colstart = HX8369A_COL_OFFSET2; rowstart = HX8369A_ROW_OFFSET2;
      break;
    case 3:
      writedata(0xA0);
      _width = _init_height;
      _height = _init_width;
      colstart = HX8369A_ROW_OFFSET2; rowstart = HX8369A_COL_OFFSET1;
      break;
    case 4:
      writedata(0x40);
      _width = _init_width;
      _height = _init_height;
      colstart = HX8369A_COL_OFFSET2; rowstart = HX8369A_ROW_OFFSET1;
      break;
    case 5:
      writedata(0xE0);
      _width = _init_height;
      _height = _init_width;
      colstart = HX8369A_ROW_OFFSET2; rowstart = HX8369A_COL_OFFSET2;
      break;
    case 6:
      writedata(0x80);
      _width = _init_width;
      _height = _init_height;
      colstart = HX8369A_COL_OFFSET1; rowstart = HX8369A_ROW_OFFSET2;
      break;
    case 7:
      writedata(0x20);
      _width = _init_height;
      _height = _init_width;
      colstart = HX8369A_ROW_OFFSET1; rowstart = HX8369A_COL_OFFSET1;
      break;
  }
