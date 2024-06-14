#ifndef BLINKY_H
#define BLINKY_H

#include "Arduino.h"
#include <Adafruit_NeoPixel.h>

#define PIN 21
#define NUMPIXELS 1

class blinky {
private:
    bool flag_blink = false;
    long time_of_blinky = 0;
    Adafruit_NeoPixel pixels;

public:
    blinky();
    void setup_blinky();
    void process_blinky();
};

#endif // BLINKY_H
