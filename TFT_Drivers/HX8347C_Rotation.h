  rotation = m % 4;
  switch (rotation) {
    case 0: writecommand(0x36); writedata(0x07); writecommand(0x16); writedata(0x40); _width = _init_width; _height = _init_height; break;
    case 1: writecommand(0x36); writedata(0x03); writecommand(0x16); writedata(0x60); _width = _init_height; _height = _init_width; break;
    case 2: writecommand(0x36); writedata(0x03); writecommand(0x16); writedata(0x00); _width = _init_width; _height = _init_height; break;
    case 3: writecommand(0x36); writedata(0x07); writecommand(0x16); writedata(0x20); _width = _init_height; _height = _init_width; break;
  }
