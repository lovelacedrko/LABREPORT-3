#include "LED.h"
#include "PushButton.h"

// Define the pins for the LEDs and the push button
const int LED1 = 9;
const int LED2 = 10;
const int LED3 = 11;
const int LED4 = 12;
const int Bpin = 6;

// Define the current LED index
int currentLed = 0;

// Initialize the LEDs and the push button
LED led1(LED1);
LED led2(LED2);
LED led3(LED3);
LED led4(LED4);
PushButton button(Bpin);

void setup() {
}

void loop() {
  // Check if the button is pressed
  if (button.isPressed()) {
    // Turn off all the LEDs
    led1.off();
    led2.off();
    led3.off();
    led4.off();

    // Increment the current LED index
    currentLed++;
    if (currentLed > 4) {
      currentLed = 1;
    }

    // Light up the current LED
    if (currentLed == 1) {
      led1.on();
    } else if (currentLed == 2) {
      led2.on();
    } else if (currentLed == 3) {
      led3.on();
    } else if (currentLed == 4) {
      led4.on();
    }

    // Wait for a short period to debounce the button
    delay(500);
  }
