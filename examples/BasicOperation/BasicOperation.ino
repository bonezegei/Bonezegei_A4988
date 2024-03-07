/*
  This Library is written for A4988 Basic operation Example
  Author: Bonezegei (Jofel Batutay)
  Date: March 2024 
*/

#include <Bonezegei_A4988.h>

#define FORWARD 1
#define REVERSE 0

#define PIN_DIR  8
#define PIN_STEP 9

Bonezegei_A4988 stepper(PIN_DIR, PIN_STEP);

void setup(){
  stepper.begin();
}

void loop(){
  stepper.step(FORWARD, 200);
  delay(1000);
  stepper.step(REVERSE, 200);
  delay(1000);
}
