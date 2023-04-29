/*
Write a program that allows the user to control the LED connected to pin 13 of the Arduino. When the program is started, the LED should be off. 
The user should open the serial monitor to communicate with the Arduino. If the user sends the character '1' through the serial monitor then the LED should turn on. 
If the user sends the character '0' through the serial monitor then the LED should turn off. 
*/

const int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Set LED pin as output
  Serial.begin(9600);  // Initialize serial communication at 9600 bps
  digitalWrite(LED_PIN, LOW);  // Turn off LED at startup
}

void loop() {
  if (Serial.available() > 0) {  // Check if data is available on serial port
    char command = Serial.read();  // Read the incoming data
    if (command == '1') {
      digitalWrite(LED_PIN, HIGH);  // Turn on LED if '1' is received
      Serial.println("LED ON");
    } else if (command == '0') {
      digitalWrite(LED_PIN, LOW);  // Turn off LED if '0' is received
      Serial.println("LED OFF");
    }
  }
}
