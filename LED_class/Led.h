#ifndef LED_H
#define LED_H

#include<Arduino.h>

// Class declaration for Led
class Led{

private:
int pin;

public:
// Default constructor
Led(){}
// Constructor that takes a pin number as argument
Led(int pin);

// Method to initialize the LED pin as output
void init();
// Method to turn off the LED
void off();
// Method to turn on the LED
void on();
};

// End of header guard
#endif
