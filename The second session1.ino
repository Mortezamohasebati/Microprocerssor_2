// Experiment 2: Two LEDs, Two 1s on, 1s off
int led1 = 12;
int led2 = 13;
void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);

}

void loop() {
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
delay(1000);
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
delay(1000);

}
