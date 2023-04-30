// The goal of this program is to create an easy way to read and monitor analog signals from an oscilloscope using an Arduino.

int value; // Declare a global variable 'value' of type integer

// Setup function runs only once when the board is powered on or reset
void setup() {

  Serial.begin(9600);// Initialize serial communication at a baud rate of 9600 bits per second
}

// Loop function runs continuously until the board is powered off
void loop() {

  int value = analogRead(A0); // Read the analog input value from pin A0 and store it in a local variable 'value'
  Serial.println(value);// Print the value to the serial monitor
  delay(50); // Delay for 50 milliseconds before reading again
}
