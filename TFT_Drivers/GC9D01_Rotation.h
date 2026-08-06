// Rotate the GC9D01 coordinate frame and apply the panel-specific offsets.

  rotation = m % 4;

  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      colstart = GC9D01_PORTRAIT_COL_OFFSET;
      rowstart = GC9D01_PORTRAIT_ROW_OFFSET;
      break;

    case 1:
      writedata(TFT_MAD_MV | TFT_MAD_ML | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      colstart = GC9D01_LANDSCAPE_COL_OFFSET;
      rowstart = GC9D01_LANDSCAPE_ROW_OFFSET;
      break;

    case 2:
      writedata(TFT_MAD_MY | TFT_MAD_MX | TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      colstart = GC9D01_PORTRAIT_COL_OFFSET;
      rowstart = GC9D01_PORTRAIT_ROW_OFFSET;
      break;

    case 3:
      writedata(TFT_MAD_MY | TFT_MAD_MX | TFT_MAD_MV | TFT_MAD_ML | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      colstart = GC9D01_LANDSCAPE_COL_OFFSET;
      rowstart = GC9D01_LANDSCAPE_ROW_OFFSET;
      break;
  }
