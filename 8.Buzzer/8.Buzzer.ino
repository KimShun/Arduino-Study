void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(5, 261.6); // 도
  delay(200); noTone(5); delay(200);
  tone(5, 311.1); // 레
  delay(200); noTone(5); delay(200);
  tone(5, 329.6); // 미
  delay(200); noTone(5); delay(200);
}
