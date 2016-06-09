#include "Serial_LCD_SparkFun.h"
#include "ui.h"
#include "sensors.h"
#include "motor.h"

extern Serial_LCD_SparkFun lcd = Serial_LCD_SparkFun();

int switchVar1 = 72;  //01001000

void setup() {
  lcd.clear();
  setupButtonInterrupts();
  setupSensors();

  setupMotion();

}

void loop() {

  //switchVar1 = readReedSwitches(16);

  lcd.clear();
  Serial1.print(getMenuString());
  Serial1.print("\n");
  Serial1.print(getLine2());
  //Serial.print("\n");
  delay(100);

	// Delay 500 milliseconds so it's not too fast
}
