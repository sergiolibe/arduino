#include <Servo.h>
Servo Servo1;
int pinservo=9;
String ang="";
int angul;
void setup()
{
  Serial.begin(9600);
  Servo1.attach(9);
  Servo1.write(120);
  delay(800);
  Servo1.write(30);
}

void loop()
{

   while (Serial.available())
  {
    delay(5);
    if (Serial.available()>0){
    char c = Serial.read();
    ang=ang+c;
    angul=ang.toInt();
       }  }
    //Serial.println(ang);
    
    //Serial.println(angul);
    if (angul >= 0 && angul <= 180)
    {
      Serial.print("Enviado angulo ");
      Serial.println(angul);
      Servo1.write(angul);
    }
    angul=-5;
    ang="";
    
}
