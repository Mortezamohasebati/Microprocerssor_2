// Experiment 4: Simple Calculator
int num1, num2;
char operation;
int result;

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
  Serial.println("Enter first number:");
}

void loop() {
  if (Serial.available() > 0) {
    if (Serial.available()) {
      num1 = Serial.parseInt(); // Read the first number
      Serial.println("Enter operation (+, -, *, /):");
      while (!Serial.available()) {} // Wait for operation input
      operation = Serial.read();     // Read the operation
      Serial.println("Enter second number:");
      while (!Serial.available()) {} // Wait for the second number
      num2 = Serial.parseInt();      // Read the second number

      switch (operation) {
        case '+':
          result = num1 + num2;
          break;
        case '-':
          result = num1 - num2;
          break;
        case '*':
          result = num1 * num2;
          break;
        case '/':
          if (num2 != 0) {
            result = num1 / num2;
          } else {
            Serial.println("Error: Division by zero");
            return;
          }
          break;
        default:
          Serial.println("Invalid operation");
          return;
      }

      Serial.print("Result: ");
      Serial.println(result);
    }
  }
}
