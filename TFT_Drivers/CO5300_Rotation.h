// CO5300 rotation and GRAM offset mapping.
#if defined(TFT_QSPI)
  // CO5300 does not provide a documented X/Y exchange. Use native orientation
  // on QSPI until panel-specific mirroring/rotation has been verified.
  rotation = 0;
  _width = _init_width;
  _height = _init_height;
  colstart = CO5300_COL_OFFSET1;
  rowstart = CO5300_ROW_OFFSET1;
  {
    #if defined(TFT_RGB_ORDER) && (TFT_RGB_ORDER == TFT_BGR)
      const uint8_t madctl = TFT_MAD_BGR;
    #else
      const uint8_t madctl = TFT_MAD_RGB;
    #endif
    writecommand(TFT_MADCTL, &madctl, 1);
  }
#else
  rotation = m % 4;
  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(0x00);
      _width = _init_width;
      _height = _init_height;
      colstart = CO5300_COL_OFFSET1; rowstart = CO5300_ROW_OFFSET1;
      break;
    case 1:
      writedata(0x02);
      _width = _init_height;
      _height = _init_width;
      colstart = CO5300_ROW_OFFSET1; rowstart = CO5300_COL_OFFSET2;
      break;
    case 2:
      writedata(0x07);
      _width = _init_width;
      _height = _init_height;
      colstart = CO5300_COL_OFFSET2; rowstart = CO5300_ROW_OFFSET2;
      break;
    case 3:
      writedata(0x05);
      _width = _init_height;
      _height = _init_width;
      colstart = CO5300_ROW_OFFSET2; rowstart = CO5300_COL_OFFSET1;
      break;
  }
#endif
