// The CH13613 reference driver exposes source mirroring only; row mirroring
// and X/Y exchange are not supported. Keep the TFT_eSPI view in rotation 0
// instead of advertising rotations that would address the panel incorrectly.

rotation = 0;
_width  = _init_width;
_height = _init_height;
colstart = 0;
rowstart = 0;

{
  const uint8_t madctl = 0x00;
  qspiWriteCommand(TFT_MADCTL, &madctl, 1);
}
