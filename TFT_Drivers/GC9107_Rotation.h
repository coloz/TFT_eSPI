// Rotate the GC9107 coordinate frame and map a cropped panel into GRAM.

  rotation = m % 4;

  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0: // Portrait
      writedata(TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      colstart = GC9107_COL_OFFSET;
      rowstart = GC9107_ROW_OFFSET;
      break;

    case 1: // Landscape (portrait + 90 degrees)
      writedata(TFT_MAD_ML | TFT_MAD_MV | TFT_MAD_MX | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      colstart = GC9107_ROW_OFFSET;
      rowstart = GC9107_COL_OFFSET;
      break;

    case 2: // Inverted portrait
      writedata(TFT_MAD_MY | TFT_MAD_MX | TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      colstart = GC9107_RAM_WIDTH - _init_width - GC9107_COL_OFFSET;
      rowstart = GC9107_RAM_HEIGHT - _init_height - GC9107_ROW_OFFSET;
      break;

    case 3: // Inverted landscape
      writedata(TFT_MAD_MY | TFT_MAD_MV | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      colstart = GC9107_RAM_HEIGHT - _init_height - GC9107_ROW_OFFSET;
      rowstart = GC9107_RAM_WIDTH - _init_width - GC9107_COL_OFFSET;
      break;
  }
