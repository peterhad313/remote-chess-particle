#include "Serial_LCD_SparkFun.h"
#include "ui.h"

Serial_LCD_SparkFun lcd = Serial_LCD_SparkFun();


void setup() {
  lcd.clear();
  setupButtonInterrupts();
}

void loop() {

      lcd.clear();
      Serial1.print(getMenuString());

      delay(100);

	// Delay 500 milliseconds so it's not too fast
}
