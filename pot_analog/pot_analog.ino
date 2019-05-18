#include <Servo.h>

int pos = 0;
Servo miservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  miservo.attach(8);
  miservo.writeMicroseconds(1000);
  delay(2000);
  miservo.writeMicroseconds(2000);
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print("pinA0");
  pos = map(analogRead(0), 0, 1023, 1000, 2000);
  //Serial.println(analogRead(0));
  miservo.writeMicroseconds(pos);
  delay(50);
}
