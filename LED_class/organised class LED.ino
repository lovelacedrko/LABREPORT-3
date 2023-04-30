#include "Led.h"

// Creating a Led object named Red and setting its pin number to 13
Led Red(13);

void setup() {
// Initializing the Red LED
Red.init();
}

void loop() {
// Turning on the Red LED and waiting for a second
Red.on();
delay(1000);

// Turning off the Red LED and waiting for a second
Red.off();
delay(1000);
}
