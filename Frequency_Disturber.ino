#define Trig 2

void setup() {
  pinMode(Trig,OUTPUT);
}

void loop() {
  for (int i =0 ; i < 100; i++){
    digitalWrite(Trig,HIGH);
    delayMicroseconds(12);
    digitalWrite(Trig,LOW);
    delayMicroseconds(12);
  } 
  delay(1);
}
