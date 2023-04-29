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

/*
To send data through the serial monitor in the Arduino IDE, follow these steps:

Open the Arduino IDE and connect your Arduino board to your computer using a USB cable.
In the Arduino IDE, select the appropriate board and serial port from the "Tools" menu.
Open a new sketch or load an existing one that includes serial communication code.
In your code, initialize the serial communication using the Serial.begin() function. For example, you could use Serial.begin(9600) to set the baud rate to 9600 bits per second.
In your code, use the Serial.print() or Serial.println() function to send data to the serial monitor. For example, you could use Serial.println("Hello, world!") to send the string "Hello, world!" to the serial monitor.
Upload the code to your Arduino board using the "Upload" button in the Arduino IDE.
Open the serial monitor by clicking the magnifying glass icon in the top right corner of the Arduino IDE, or by selecting "Tools" -> "Serial Monitor" from the menu.
In the serial monitor, select the appropriate baud rate from the dropdown menu in the bottom right corner. This should match the baud rate you set in your code using the Serial.begin() function.
Send data to the Arduino by typing into the serial monitor's input field at the top of the window and pressing "Enter" or "Return". The Arduino should receive the data and respond accordingly based on your code.
*/
