#include <Servo.h>

Servo sergi;
int pinsergi=8;
String ang="";
int angul;

void setup()
{
  Serial.begin(9600);
  sergi.attach(pinsergi);
  delay(500);
  sergi.write(180);
  delay(800);
  sergi.write(90);
  delay(500);
  sergi.write(0);
  delay(500);
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

/*    if (angul >= 0 && angul <= 180)
    {
      Serial.print("Enviado angulo ");
      Serial.println(angul);
      sergi.write(angul);
      //Serial.println(angul);
    }
    angul=-5;
    ang="";*/

     Serial.print("Probando valor ");
     Serial.println(0);
     sergi.write(0);
     delay(2000);
     
          Serial.print("Probando valor ");
     Serial.println(85);
     sergi.write(85);
     delay(1000);
     
          Serial.print("Probando valor ");
     Serial.println(170);
     sergi.write(170);
     delay(2000);
    
    Serial.print("Probando valor ");
     Serial.println(85);
     sergi.write(85);
     delay(1000);
}


