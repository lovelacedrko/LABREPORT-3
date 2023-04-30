#include "PB.h" // Include PB header file

PB::PB(int pin) { // Constructor implementation for PB class
  _pin = pin;
  _lastState = false; // Set the initial last state of button to false
  _lastChangeTime = 0; // Set the initial last change time to 0
  _debounceDelay = 50; // Set the debounce delay to 50ms
  pinMode(_pin, INPUT_PULLUP); // Set button pin to input mode with pull-up resistor
}

bool PB::isPressed() { // isPressed method implementation
  bool currentState = !digitalRead(_pin); // Read the current state of button pin (inverse logic due to pull-up resistor)
  unsigned long currentTime = millis(); // Get the current time in milliseconds
  if (currentState != _lastState) { // Check if button state has changed
    _lastChangeTime = currentTime; // Record the time of state change
  }
  if ((currentTime - _lastChangeTime) > _debounceDelay) { // Check if enough time has passed since last state change
    if (currentState != _lastState) { // Check if button state has changed
      _lastState = currentState; // Record the new button state
      return _lastState; // Return the new button state
    }
  }
  return false; // Button is not pressed
}
