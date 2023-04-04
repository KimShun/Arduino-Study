void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(8) == HIGH) {
    tone(3, 130.8);
  }
  else if(digitalRead(9) == HIGH) {
    tone(3, 155.6);
  }
  else if(digitalRead(10) == HIGH) {
    tone(3, 164.8);
  }
  else {
    noTone(3);
  }
}
