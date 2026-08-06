// OTM8009A 16-bit register initialization ported from Arduino_GFX (BSD-licensed).
{
  uint8_t ini01[] = {0x80, 0x09, 0x01, 0x01};
  for (uint16_t i = 0; i < sizeof(ini01); ++i) { DC_C; tft_Write_16(0xFF00 + i); DC_D; tft_Write_16(ini01[i]); }
  uint8_t ini02[] = {0x80, 0x09};
  for (uint16_t i = 0; i < sizeof(ini02); ++i) { DC_C; tft_Write_16(0xFF80 + i); DC_D; tft_Write_16(ini02[i]); }
  DC_C; tft_Write_16(0xF5B6);
  DC_D; tft_Write_16(0x0006);
  uint8_t ini03[] = {0x30, 0x83};
  for (uint16_t i = 0; i < sizeof(ini03); ++i) { DC_C; tft_Write_16(0xC480 + i); DC_D; tft_Write_16(ini03[i]); }
  DC_C; tft_Write_16(0xC48A);
  DC_D; tft_Write_16(0x0040);
  DC_C; tft_Write_16(0xC0A3);
  DC_D; tft_Write_16(0x001B);
  DC_C; tft_Write_16(0xC0BA);
  DC_D; tft_Write_16(0x0050);
  DC_C; tft_Write_16(0xC181);
  DC_D; tft_Write_16(0x0066);
  DC_C; tft_Write_16(0xC1A1);
  DC_D; tft_Write_16(0x000E);
  DC_C; tft_Write_16(0xC582);
  DC_D; tft_Write_16(0x0083);
  uint8_t ini04[] = {0x96, 0x2B, 0x01, 0x33, 0x34};
  for (uint16_t i = 0; i < sizeof(ini04); ++i) { DC_C; tft_Write_16(0xC590 + i); DC_D; tft_Write_16(ini04[i]); }
  DC_C; tft_Write_16(0xC5B1);
  DC_D; tft_Write_16(0x00A9);
  uint8_t ini05[] = {0x86, 0x01, 0x00, 0x85, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini05); ++i) { DC_C; tft_Write_16(0xCE80 + i); DC_D; tft_Write_16(ini05[i]); }
  uint8_t ini06[] = {0x18, 0x04, 0x03, 0x21, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini06); ++i) { DC_C; tft_Write_16(0xCEA0 + i); DC_D; tft_Write_16(ini06[i]); }
  uint8_t ini07[] = {0x18, 0x03, 0x03, 0x22, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini07); ++i) { DC_C; tft_Write_16(0xCEA7 + i); DC_D; tft_Write_16(ini07[i]); }
  uint8_t ini08[] = {0x18, 0x02, 0x03, 0x23, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini08); ++i) { DC_C; tft_Write_16(0xCEB0 + i); DC_D; tft_Write_16(ini08[i]); }
  uint8_t ini09[] = {0x18, 0x01, 0x03, 0x24, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini09); ++i) { DC_C; tft_Write_16(0xCEB7 + i); DC_D; tft_Write_16(ini09[i]); }
  uint8_t ini10[] = {0x01, 0x01, 0x20, 0x20, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini10); ++i) { DC_C; tft_Write_16(0xCFC0 + i); DC_D; tft_Write_16(ini10[i]); }
  DC_C; tft_Write_16(0xCFC6);
  DC_D; tft_Write_16(0x0001);
  uint8_t ini11[] = {0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini11); ++i) { DC_C; tft_Write_16(0xCFC7 + i); DC_D; tft_Write_16(ini11[i]); }
  DC_C; tft_Write_16(0xCFD0);
  DC_D; tft_Write_16(0x0000);
  uint8_t ini12[] = {0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini12); ++i) { DC_C; tft_Write_16(0xCBC0 + i); DC_D; tft_Write_16(ini12[i]); }
  uint8_t ini13[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini13); ++i) { DC_C; tft_Write_16(0xCBD0 + i); DC_D; tft_Write_16(ini13[i]); }
  uint8_t ini14[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini14); ++i) { DC_C; tft_Write_16(0xCBE0 + i); DC_D; tft_Write_16(ini14[i]); }
  uint8_t ini15[] = {0x00, 0x26, 0x09, 0x0B, 0x01, 0x25, 0x00, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini15); ++i) { DC_C; tft_Write_16(0xCC80 + i); DC_D; tft_Write_16(ini15[i]); }
  uint8_t ini16[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x0A, 0x0C, 0x02};
  for (uint16_t i = 0; i < sizeof(ini16); ++i) { DC_C; tft_Write_16(0xCC90 + i); DC_D; tft_Write_16(ini16[i]); }
  uint8_t ini17[] = {0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  for (uint16_t i = 0; i < sizeof(ini17); ++i) { DC_C; tft_Write_16(0xCCA0 + i); DC_D; tft_Write_16(ini17[i]); }
  DC_C; tft_Write_16(0x3A00);
  DC_D; tft_Write_16(0x0055);
  DC_C; tft_Write_16(0x1100);
  delay(100);
  DC_C; tft_Write_16(0x2900);
  delay(50);
}
