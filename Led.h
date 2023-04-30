#ifndef LED_H
#define LED_H

#include<Arduino.h>

class Led{

private:
int pin;

public:
Led(){}       // default constructor
Led(int pin);  // constructor

void init();   //initializing the pins as output
void off();    //turn the led off 
void on();     // turn the led on
};




#endif