// including the LED header file and the Arduino library
#include "LED.h"
#include "Arduino.h"

// defining the LED constructor which takes the pin number as input
LED::LED(int pin) {
  this->pin = pin;    // assigning the pin number to the LED object's pin attribute
  pinMode(pin, OUTPUT);   // setting the pin mode as output
}

// defining the function to turn the LED on
void LED::on() {
  digitalWrite(pin, HIGH);   // setting the pin voltage to HIGH to turn the LED on
}

// defining the function to turn the LED off
void LED::off() {
  digitalWrite(pin, LOW);   // setting the pin voltage to LOW to turn the LED off
}
