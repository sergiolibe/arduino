#include <Servo.h>

int pinPot=A0;
int valorPot=0;
int pinServo3=9;
int pinServo2=6;
int pinServo1=5;
int valormap=0;
Servo servo1;
Servo servo2;
Servo servo3;

void setup() {
Serial.begin(9600);
servo1.attach(pinServo1);
servo2.attach(pinServo2);
servo3.attach(pinServo3);
servo1.writeMicroseconds(1500);
delay(1000);
servo2.writeMicroseconds(1500);
delay(1000);
servo3.writeMicroseconds(1500);
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
valorPot=analogRead(pinPot);
valormap=map(valorPot,0,1023,100,2000);
Serial.println(valormap);
servo1.writeMicroseconds(valormap);
delay(5);
servo2.writeMicroseconds(valormap);
delay(5);
servo3.writeMicroseconds(valormap);
delay(5);
}
