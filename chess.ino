#include "Serial_LCD_SparkFun.h"
#include "ui.h"
#include "sensors.h"

extern Serial_LCD_SparkFun lcd = Serial_LCD_SparkFun();

int switchVar1 = 72;  //01001000

void setup() {
  lcd.clear();
  setupButtonInterrupts();
  setupSensors();


}

void loop() {

  switchVar1 = readReedSwitches(16);

  lcd.clear();
  Serial1.print(switchVar1,BIN);
  delay(100);
      //Serial1.print(getMenuString());
	// Delay 500 milliseconds so it's not too fast
}
