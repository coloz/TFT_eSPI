// Rotate the SSD1331 coordinate frame. SETREMAP arguments are command bytes.

  rotation = m % 4;

  uint8_t remap;
  switch (rotation) {
    case 0:
      remap = 0x72;
      _width  = _init_width;
      _height = _init_height;
      break;
    case 1:
      remap = 0x71;
      _width  = _init_height;
      _height = _init_width;
      break;
    case 2:
      remap = 0x60;
      _width  = _init_width;
      _height = _init_height;
      break;
    default:
      remap = 0x63;
      _width  = _init_height;
      _height = _init_width;
      break;
  }

  writecommand(0xA0);
  writecommand(remap | SSD1331_COLOR_REMAP);
