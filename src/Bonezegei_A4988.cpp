/*
  This Library is written for A4988 Module
  Author: Bonezegei (Jofel Batutay)
  Date: March 2024 
*/

#include "Bonezegei_A4988.h"

Bonezegei_A4988::Bonezegei_A4988(int dir, int step){
  _dir=dir;
  _step=step;
  _speed=500;
}

bool Bonezegei_A4988::begin(){
  pinMode(_dir, OUTPUT);
  pinMode(_step, OUTPUT);
  return 1;
}

void Bonezegei_A4988::setSpeed(unsigned long speed){
  _speed=speed/2;
}


void Bonezegei_A4988::step(int dir, int step){
  digitalWrite(_dir,dir);
  
  for(int a=0; a<step;  a++){
    digitalWrite(_step,LOW);
    delayMicroseconds(_speed);
    digitalWrite(_step,HIGH);
    delayMicroseconds(_speed);
  }
}
