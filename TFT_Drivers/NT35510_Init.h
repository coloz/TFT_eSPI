// NT35510 16-bit register initialization ported from Arduino_GFX (BSD-licensed).
{
  uint8_t ini01[] = {0x55, 0xAA, 0x52, 0x08, 0x01};
  for (uint16_t i = 0; i < sizeof(ini01); ++i) { DC_C; tft_Write_16(0xF000 + i); DC_D; tft_Write_16(ini01[i]); }
  uint8_t ini03[] = {0x34, 0x34, 0x34};
  for (uint16_t i = 0; i < sizeof(ini03); ++i) { DC_C; tft_Write_16(0xB600 + i); DC_D; tft_Write_16(ini03[i]); }
  uint8_t ini02[] = {0x0D, 0x0D, 0x0D};
  for (uint16_t i = 0; i < sizeof(ini02); ++i) { DC_C; tft_Write_16(0xB000 + i); DC_D; tft_Write_16(ini02[i]); }
  uint8_t ini05[] = {0x34, 0x34, 0x34};
  for (uint16_t i = 0; i < sizeof(ini05); ++i) { DC_C; tft_Write_16(0xB700 + i); DC_D; tft_Write_16(ini05[i]); }
  uint8_t ini04[] = {0x0D, 0x0D, 0x0D};
  for (uint16_t i = 0; i < sizeof(ini04); ++i) { DC_C; tft_Write_16(0xB100 + i); DC_D; tft_Write_16(ini04[i]); }
  uint8_t ini07[] = {0x24, 0x24, 0x24};
  for (uint16_t i = 0; i < sizeof(ini07); ++i) { DC_C; tft_Write_16(0xB800 + i); DC_D; tft_Write_16(ini07[i]); }
  uint8_t ini10[] = {0x34, 0x34, 0x34};
  for (uint16_t i = 0; i < sizeof(ini10); ++i) { DC_C; tft_Write_16(0xB900 + i); DC_D; tft_Write_16(ini10[i]); }
  uint8_t ini09[] = {0x0F, 0x0F, 0x0F};
  for (uint16_t i = 0; i < sizeof(ini09); ++i) { DC_C; tft_Write_16(0xB300 + i); DC_D; tft_Write_16(ini09[i]); }
  uint8_t ini14[] = {0x24, 0x24, 0x24};
  for (uint16_t i = 0; i < sizeof(ini14); ++i) { DC_C; tft_Write_16(0xBA00 + i); DC_D; tft_Write_16(ini14[i]); }
  uint8_t ini12[] = {0x08, 0x08};
  for (uint16_t i = 0; i < sizeof(ini12); ++i) { DC_C; tft_Write_16(0xB500 + i); DC_D; tft_Write_16(ini12[i]); }
  uint8_t ini15[] = {0x00, 0x78, 0x00};
  for (uint16_t i = 0; i < sizeof(ini15); ++i) { DC_C; tft_Write_16(0xBC00 + i); DC_D; tft_Write_16(ini15[i]); }
  uint8_t ini16[] = {0x00, 0x78, 0x00};
  for (uint16_t i = 0; i < sizeof(ini16); ++i) { DC_C; tft_Write_16(0xBD00 + i); DC_D; tft_Write_16(ini16[i]); }
  uint8_t ini17[] = {0x00, 0x89};
  for (uint16_t i = 0; i < sizeof(ini17); ++i) { DC_C; tft_Write_16(0xBE00 + i); DC_D; tft_Write_16(ini17[i]); }
  uint8_t ini20[] = {
  0x00, 0x2D, 0x00, 0x2E, 0x00, 0x32, 0x00, 0x44, 0x00, 0x53, 0x00, 0x88, 0x00, 0xB6, 0x00, 0xF3, 0x01, 0x22, 0x01, 0x64,
  0x01, 0x92, 0x01, 0xD4, 0x02, 0x07, 0x02, 0x08, 0x02, 0x34, 0x02, 0x5F, 0x02, 0x78, 0x02, 0x94, 0x02, 0xA6, 0x02, 0xBB,
  0x02, 0xCA, 0x02, 0xDB, 0x02, 0xE8, 0x02, 0xF9, 0x03, 0x1F, 0x03, 0x7F};
  for (uint16_t i = 0; i < sizeof(ini20); ++i) { DC_C; tft_Write_16(0xD100 + i); DC_D; tft_Write_16(ini20[i]); }
  for (uint16_t i = 0; i < sizeof(ini20); ++i) { DC_C; tft_Write_16(0xD400 + i); DC_D; tft_Write_16(ini20[i]); }
  for (uint16_t i = 0; i < sizeof(ini20); ++i) { DC_C; tft_Write_16(0xD200 + i); DC_D; tft_Write_16(ini20[i]); }
  for (uint16_t i = 0; i < sizeof(ini20); ++i) { DC_C; tft_Write_16(0xD500 + i); DC_D; tft_Write_16(ini20[i]); }
  for (uint16_t i = 0; i < sizeof(ini20); ++i) { DC_C; tft_Write_16(0xD300 + i); DC_D; tft_Write_16(ini20[i]); }
  for (uint16_t i = 0; i < sizeof(ini20); ++i) { DC_C; tft_Write_16(0xD600 + i); DC_D; tft_Write_16(ini20[i]); }
  uint8_t ini21[] = {0x55, 0xAA, 0x52, 0x08, 0x00};
  for (uint16_t i = 0; i < sizeof(ini21); ++i) { DC_C; tft_Write_16(0xF000 + i); DC_D; tft_Write_16(ini21[i]); }
  uint8_t ini22[] = {0x08, 0x05, 0x02, 0x05, 0x02};
  for (uint16_t i = 0; i < sizeof(ini22); ++i) { DC_C; tft_Write_16(0xB000 + i); DC_D; tft_Write_16(ini22[i]); }
  DC_C; tft_Write_16(0xB600);
  DC_D; tft_Write_16(0x0008);
  DC_C; tft_Write_16(0xB500);
  DC_D; tft_Write_16(0x0050);
  uint8_t ini24[] = {0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini24); ++i) { DC_C; tft_Write_16(0xB700 + i); DC_D; tft_Write_16(ini24[i]); }
  uint8_t ini25[] = {0x01, 0x05, 0x05, 0x05};
  for (uint16_t i = 0; i < sizeof(ini25); ++i) { DC_C; tft_Write_16(0xB800 + i); DC_D; tft_Write_16(ini25[i]); }
  uint8_t ini26[] = {0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini26); ++i) { DC_C; tft_Write_16(0xBC00 + i); DC_D; tft_Write_16(ini26[i]); }
  uint8_t ini27[] = {0x03, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini27); ++i) { DC_C; tft_Write_16(0xCC00 + i); DC_D; tft_Write_16(ini27[i]); }
  uint8_t ini28[] = {0x01, 0x84, 0x07, 0x31, 0x00, 0x01};
  for (uint16_t i = 0; i < sizeof(ini28); ++i) { DC_C; tft_Write_16(0xBD00 + i); DC_D; tft_Write_16(ini28[i]); }
  uint8_t ini30[] = {0xAA, 0x55, 0x25, 0x01};
  for (uint16_t i = 0; i < sizeof(ini30); ++i) { DC_C; tft_Write_16(0xFF00 + i); DC_D; tft_Write_16(ini30[i]); }
  DC_C; tft_Write_16(0x3500);
  DC_D; tft_Write_16(0x0000);
  DC_C; tft_Write_16(0x3A00);
  DC_D; tft_Write_16(0x0055);
  DC_C; tft_Write_16(0x1100);
  delay(120);
  DC_C; tft_Write_16(0x2900);
  delay(120);
}
