// NV3023 rotation and GRAM offset mapping.
  rotation = m % 4;
  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(0x88);
      _width = _init_width;
      _height = _init_height;
      colstart = NV3023_COL_OFFSET1; rowstart = NV3023_ROW_OFFSET1;
      break;
    case 1:
      writedata(0xE8);
      _width = _init_height;
      _height = _init_width;
      colstart = NV3023_ROW_OFFSET1; rowstart = NV3023_COL_OFFSET2;
      break;
    case 2:
      writedata(0x48);
      _width = _init_width;
      _height = _init_height;
      colstart = NV3023_COL_OFFSET2; rowstart = NV3023_ROW_OFFSET2;
      break;
    case 3:
      writedata(0x28);
      _width = _init_height;
      _height = _init_width;
      colstart = NV3023_ROW_OFFSET2; rowstart = NV3023_COL_OFFSET1;
      break;
  }
