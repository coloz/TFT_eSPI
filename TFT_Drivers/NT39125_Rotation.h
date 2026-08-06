// NT39125 rotation and GRAM offset mapping.
  rotation = m % 4;
  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(0x48);
      _width = _init_width;
      _height = _init_height;
      colstart = NT39125_COL_OFFSET1; rowstart = NT39125_ROW_OFFSET1;
      break;
    case 1:
      writedata(0x28);
      _width = _init_height;
      _height = _init_width;
      colstart = NT39125_ROW_OFFSET1; rowstart = NT39125_COL_OFFSET2;
      break;
    case 2:
      writedata(0x88);
      _width = _init_width;
      _height = _init_height;
      colstart = NT39125_COL_OFFSET2; rowstart = NT39125_ROW_OFFSET2;
      break;
    case 3:
      writedata(0xE8);
      _width = _init_height;
      _height = _init_width;
      colstart = NT39125_ROW_OFFSET2; rowstart = NT39125_COL_OFFSET1;
      break;
  }
