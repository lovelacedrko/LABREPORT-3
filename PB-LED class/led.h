#ifndef LED_H
#define LED_H

// The LED class has a private integer variable for the pin and public functions for on() and off() methods.
class LED {
  private:
    int pin;
  public:
    LED(int pin); // Constructor that takes an integer value for the LED pin
    void on();    // Method to turn on the LED
    void off();   // Method to turn off the LED
};

#endif
