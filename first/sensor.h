#ifndef BUTTON_H
#define BUTTON_H


#include "boebot.h"
#include "timing.h"


/**
 * Button
 *  - basic button class. isPressed returns true/false based on current state of button
 */
class Sensor{
  const uint8_t pin;
public:
  Sensor(uint8_t p) : pin(p)
  {}
  void init(){
    pinMode(pin, INPUT_PULLUP);
  }
  
};
