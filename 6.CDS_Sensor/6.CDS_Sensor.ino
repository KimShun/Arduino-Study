int cds = 0; // 변수 cds를 0으로 초기설정

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  cds = analogRead(A0); // 입력받는 아날로그 값(A0) 즉, 조도센서의 저항값 ( 밝기 크기 ) 저항값이 클수록 밝기가 큼
  Serial.println(cds);
  delay(100);
}
