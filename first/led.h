#ifndef LED_H
#define LED_H

#include "boebot.h"

class LED{
  const uint8_t pin;
public:
  LED(uint8_t p) : pin(p)
  {}
  void init(){
    pinMode(pin, OUTPUT);
  }
  void turnOn() const{
    digitalWrite(pin, ON);
  }
  void turnOff() const{
    digitalWrite(pin, OFF);
  }
};


#endif
