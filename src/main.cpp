#include <Arduino.h>
#include "blinky.h"

blinky ledrgb;
void setup()
{
  ledrgb.setup_blinky();
}

void loop()
{
  ledrgb.process_blinky();
}