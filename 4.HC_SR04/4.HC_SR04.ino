int trig = 7; // tring에 연결된 핀모드 값
int echo = 6; // echo에 연결된 핀모드 값

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); // delay()와 마찬가지로 일정시간 멈추는 함수 (1초 = 1000밀리초, 1초 = 1000000마이크로초)
  digitalWrite(trig, LOW);
  // 'pulseIn(echo, HIGH)' = 시간 / '340' = 초음파의 속도는 초당 340m / '2' = 왕복거리의 시간을 대입했기에 %2 / '10000' = cm로 변환하기 위함
  int distance = pulseIn(echo, HIGH) * 340 / 2 / 10000;
  Serial.print(distance);
  Serial.println("cm");
  delay(100); // 0.1초 지연
}

