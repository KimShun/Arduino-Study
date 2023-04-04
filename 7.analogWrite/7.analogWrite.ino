void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT); // 디지털 5번핀을 출력모드로 설정
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=10; i<255; i+=10){
    analogWrite(5, i); // 아날로그 5번핀에 i만큼의 신호 출력
    delay(100); // 0.1초 대기
  }
}
