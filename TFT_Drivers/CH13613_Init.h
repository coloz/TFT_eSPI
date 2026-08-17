// Initialization for the OSPTEK AM160Q480480LK 480 x 480 AMOLED.
// Command values adapted for TFT_eSPI from the OSPTEK reference project:
// Copyright 2026 OSPTEK, licensed under CC BY 4.0.
// https://github.com/osptek/1.6-amoled-480x480-qspi-ch13613

{
  const uint8_t data[] = {0x00};
  qspiWriteCommand(0xFE, data, sizeof(data));
}
{
  const uint8_t data[] = {0x50};
  qspiWriteCommand(0xF0, data, sizeof(data));
}
{
  const uint8_t data[] = {0x78, 0x70};
  qspiWriteCommand(0xB1, data, sizeof(data));
}
{
  const uint8_t data[] = {0x80};
  qspiWriteCommand(0xC4, data, sizeof(data));
}
{
  const uint8_t data[] = {0x00};
  qspiWriteCommand(TFT_MADCTL, data, sizeof(data));
}
{
  const uint8_t data[] = {0x55}; // RGB565
  qspiWriteCommand(0x3A, data, sizeof(data));
}
{
  const uint8_t data[] = {0x20};
  qspiWriteCommand(0x53, data, sizeof(data));
}
{
  const uint8_t data[] = {0xFF};
  qspiWriteCommand(0x51, data, sizeof(data));
  qspiWriteCommand(0x63, data, sizeof(data));
}
{
  const uint8_t data[] = {0x10};
  qspiWriteCommand(0x64, data, sizeof(data));
}
{
  const uint8_t data[] = {0x01};
  qspiWriteCommand(0x67, data, sizeof(data));
}
{
  const uint8_t data[] = {0x31};
  qspiWriteCommand(0x68, data, sizeof(data));
}
{
  const uint8_t data[] = {0x00, 0x00, 0x01, 0xDF};
  qspiWriteCommand(TFT_CASET, data, sizeof(data));
  qspiWriteCommand(TFT_PASET, data, sizeof(data));
}

qspiWriteCommand(TFT_SLPOUT, nullptr, 0);
delay(120);
qspiWriteCommand(TFT_DISPON, nullptr, 0);
delay(120);
