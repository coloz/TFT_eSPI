  rotation = m % 4;
  switch (rotation) {
    case 0: writecommand(0x13); writedata(0x00); writecommand(0x16); writedata(0x66); _width = _init_width; _height = _init_height; break;
    case 1: writecommand(0x13); writedata(0x10); writecommand(0x16); writedata(0x67); _width = _init_height; _height = _init_width; break;
    case 2: writecommand(0x13); writedata(0x30); writecommand(0x16); writedata(0x66); _width = _init_width; _height = _init_height; break;
    case 3: writecommand(0x13); writedata(0x20); writecommand(0x16); writedata(0x67); _width = _init_height; _height = _init_width; break;
  }
