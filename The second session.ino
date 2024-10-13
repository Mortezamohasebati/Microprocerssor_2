// Experiment 2: Two LEDs, one 5s on, 0.5s off
int led1 = 13; // First LED
int led2 = 12; // Second LED

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(5000); // LED1 on for 5 seconds
  digitalWrite(led1, LOW);
  delay(500);  // LED1 off for 0.5 seconds

  digitalWrite(led2, HIGH);
  delay(1000); // LED2 on for 1 second
  digitalWrite(led2, LOW);
  delay(1000); // LED2 off for 1 second
}
