// This is a header guard to prevent multiple definitions of the class
#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

// Declaration of the PushButton class
class PushButton {
  private:
    int pin;
  public:
    PushButton(int pin);   // Constructor to initialize the push button pin
    int isPressed();       // Function to read the push button state
};

// End of the header guard
#endif
