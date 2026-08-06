  rotation = m % 4;
  writecommand(0x16);
  switch (rotation) {
    case 0: writedata(0x88); _width = _init_width; _height = _init_height; break;
    case 1: writedata(0x68); _width = _init_height; _height = _init_width; break;
    case 2: writedata(0x48); _width = _init_width; _height = _init_height; break;
    case 3: writedata(0xA8); _width = _init_height; _height = _init_width; break;
  }
