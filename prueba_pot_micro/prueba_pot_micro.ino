#include <Servo.h>

int pinPot=A0;
int valorPot=0;
int pinServo=9;
int valormap=0;
Servo servo1;

void setup() {
Serial.begin(9600);
servo1.attach(pinServo);
servo1.writeMicroseconds(1500);
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
valorPot=analogRead(pinPot);
valormap=map(valorPot,0,1023,700,2300);
Serial.println(valormap);
servo1.writeMicroseconds(valormap);
delay(50);

}
