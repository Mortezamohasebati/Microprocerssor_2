// Experiment 2: Two LEDs, one led on, one led off
int led1 = 12;
int led2 = 13;
void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);

}

void loop() {
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
}
