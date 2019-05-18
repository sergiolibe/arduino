#include <Servo.h>
Servo miservo;
int pinemg,emg;

void setup()
{
  Serial.begin(57600);
miservo.attach(8);
miservo.write(90); 
pinemg=A0;

}

void loop()
{
  emg=analogRead(pinemg);
  Serial.println(emg);
  delay(1);
  //miservo.write(map(emg,0,1023,0,180));
  
}
