// This is the implementation of the Led class constructor which takes an integer pin as input
// The constructor initializes the pin member variable of the Led class with the value of the input pin

#include "Led.h "

Led::Led(int pin){
this->pin = pin;
}

// This function initializes the pin as output
void Led::init(){
pinMode(pin, OUTPUT);
}

// This function turns on the LED
void Led::on(){
digitalWrite(pin,1);
}

// This function turns off the LED
void Led::off(){
digitalWrite(pin,0);
}
