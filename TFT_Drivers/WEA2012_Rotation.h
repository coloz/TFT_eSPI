// WEA2012 rotation and GRAM offset mapping.
  rotation = m % 4;
  if (rotation & 1) { _width = _init_height; _height = _init_width; }
  else { _width = _init_width; _height = _init_height; }
  colstart = 0; rowstart = 0;
