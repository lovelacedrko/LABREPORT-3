// Including the PB header file
#include "PB.h"

// Creating an instance of the PB class connected to pin 13
PB button(6);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Check if button is pressed
  if (button.isPressed()) {
    // Printing the button state to serial monitor
    Serial.print("Button state is :  ");
    Serial.println(digitalRead(6));
  }
}
