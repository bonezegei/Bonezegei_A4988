/*
  This Library is written for A4988 Module
  Author: Bonezegei (Jofel Batutay)
  Date: March 2024 
*/
#ifndef _BONEZEGEI_A4988_H_
#define _BONEZEGEI_A4988_H_

#include <Arduino.h>

class Bonezegei_A4988{
public:
  //param1 = Dir Pin Direction Pin
  //param2 = Step Pin 
  Bonezegei_A4988(int dir, int step);
  bool begin();

  //speed in Micro Seconds
  void setSpeed(unsigned long speed);

  // param1 = Direction of rotation
  // param2 = Number of Steaps
  void step(int dir, int step);

  unsigned long _speed;
  int _dir;
  int _step;
};

#endif
