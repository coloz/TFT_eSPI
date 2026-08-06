// GC9106 rotation and GRAM offset mapping.
  rotation = m % 4;
  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(0x08);
      _width = _init_width;
      _height = _init_height;
      colstart = GC9106_COL_OFFSET1; rowstart = GC9106_ROW_OFFSET1;
      break;
    case 1:
      writedata(0x68);
      _width = _init_height;
      _height = _init_width;
      colstart = GC9106_ROW_OFFSET1; rowstart = GC9106_COL_OFFSET2;
      break;
    case 2:
      writedata(0xC8);
      _width = _init_width;
      _height = _init_height;
      colstart = GC9106_COL_OFFSET2; rowstart = GC9106_ROW_OFFSET2;
      break;
    case 3:
      writedata(0xA8);
      _width = _init_height;
      _height = _init_width;
      colstart = GC9106_ROW_OFFSET2; rowstart = GC9106_COL_OFFSET1;
      break;
  }
