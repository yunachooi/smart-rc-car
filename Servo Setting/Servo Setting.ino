// servo setting
Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(2); // servo moter 연결 핀
  Serial.begin(9600); // 통신 속도 설정
  
  servo.write(90); // 90도 회전
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
