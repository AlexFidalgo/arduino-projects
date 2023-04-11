void blink (int pin, int time_delay) {
  
  digitalWrite(pin, HIGH);
  delay(time_delay);
  digitalWrite(pin, LOW);
  delay(time_delay);
}

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  int i;
  for (i = 0; i <= 5; i++) {
    blink(LED_BUILTIN, 500);
  }
  for (i = 0; i <= 5; i++) {
    blink(LED_BUILTIN, 2000);
  }
}
