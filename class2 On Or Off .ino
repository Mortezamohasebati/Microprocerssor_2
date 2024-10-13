// Experiment 3: Turn LEDs on/off using Serial Monitor commands
int ledPin = 13; // LED pin

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readString(); // Read input from serial monitor
    command.trim(); // Remove any extra whitespace
    if (command == "on") {
      digitalWrite(ledPin, HIGH); // Turn the LED on
      Serial.println("LED is ON");
    } else if (command == "off") {
      digitalWrite(ledPin, LOW);  // Turn the LED off
      Serial.println("LED is OFF");
    } else {
      Serial.println("Invalid command. Use 'on' or 'off'.");
    }
  }
}
