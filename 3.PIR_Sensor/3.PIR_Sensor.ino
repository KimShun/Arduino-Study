int val = 0; // 정수형 val을 0으로 시작함.

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); // 디지털 2번핀을 입력모드로 설정한다. -> 2번핀과 연결된 단자가 PIR의 신호 출력단자와 연결되었기 때문이다.
  pinMode(3, OUTPUT); // 디지털 3번핀을 출력모드로 설정한다.
  Serial.begin(9600); // 시리얼 통신을 시작하며, 통신속도는 9600
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(2); // 정수형 val값에 디지털 2번핀의 입력신호 값을 대입시킨다.
  if(val == HIGH) { // 입력신호 값이 '1' 이라면,
    digitalWrite(3, HIGH); // 디지털 3번핀에 출력 값 '1'을 준다.
  }
  else { // '0' 이라면,
    digitalWrite(3, LOW); // 출력 값 '0'을 준다.
  }
  Serial.println(val); // 시리얼 모니터에 val값을 실시간으로 출력한다.
}
