// Funshield constants
#ifndef BOEBOT_H
#define BOEBOT_H

#include <Arduino.h>
#include <stdint.h>

// convenience constants for switching on/off
constexpr int ON = LOW;
constexpr int OFF = HIGH;


// LEDs
constexpr int led_pin = 11;

// buttons
constexpr int button_pin = 2;


constexpr int left_servo_pin = 12;
constexpr int right_servo_pin = 13;


constexpr int line_sensors[] {3, 4, 5, 6, 7};

#endif
