        ////////////////////////////////////////////////////
        //       TFT_eSPI functions for CI130X            //
        ////////////////////////////////////////////////////

// CI130X deliberately reuses the generic pixel transfer implementation. Bus
// setup is selected in TFT_eSPI.cpp so the configured CI130X software-SPI pins
// are passed to SPI.begin(sck, miso, mosi, -1).
#include "TFT_eSPI_Generic.c"
