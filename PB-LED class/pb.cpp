// Implementation of the PushButton class member functions
#include "PushButton.h"
#include "Arduino.h"

// Constructor that sets up the pin and enables internal pull-up resistor
PushButton::PushButton(int pin) {
  this->pin = pin;
  pinMode(pin, INPUT_PULLUP);
}

// Returns whether the button is currently pressed or not
int PushButton::isPressed() {
  return digitalRead(pin) == LOW;
}
