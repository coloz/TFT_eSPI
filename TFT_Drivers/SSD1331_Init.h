// SSD1331 96 x 64 RGB OLED initialisation. Command arguments remain in
// command mode on this controller, so writecommand() is used for both.
{
  writecommand(TFT_DISPOFF);
  writecommand(0x81); // Contrast A
  writecommand(0x91);
  writecommand(0x82); // Contrast B
  writecommand(0x50);
  writecommand(0x83); // Contrast C
  writecommand(0x7D);
  writecommand(0x87); // Master current
  writecommand(0x06);
  writecommand(0x8A); // Precharge A
  writecommand(0x64);
  writecommand(0x8B); // Precharge B
  writecommand(0x78);
  writecommand(0x8C); // Precharge C
  writecommand(0x64);

  writecommand(0xA0); // Set remap
  writecommand(0x72 | SSD1331_COLOR_REMAP);
  writecommand(0xA1); // Start line
  writecommand(0x00);
  writecommand(0xA2); // Display offset
  writecommand(0x00);
  writecommand(TFT_INVOFF);
  writecommand(0xA8); // Multiplex ratio
  writecommand(0x3F);
  writecommand(0xAD); // Master configuration
  writecommand(0x8E);
  writecommand(0xB0); // Power save mode
  writecommand(0x0B);
  writecommand(0xB1); // Phase 1/2 period
  writecommand(0x31);
  writecommand(0xB3); // Clock divider / oscillator frequency
  writecommand(0xF0);
  writecommand(0xBB); // Precharge voltage
  writecommand(0x3A);
  writecommand(0xBE); // VCOMH
  writecommand(0x3E);
  writecommand(TFT_DISPON);
}
