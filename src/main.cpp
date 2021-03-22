#include <M5Core2.h>
#include "Free_Fonts.h"

void setup() {
  M5.begin(true);
  // M5.Lcd.setFreeFont(TT1);
  M5.Lcd.print("BLAH");
}

void loop() {
   M5.Axp.SetLed(true);
   delay(50);
   M5.Axp.SetLed(false);
   delay(900);
}