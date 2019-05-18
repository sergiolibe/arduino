#include <Servo.h>
Servo servo1;
int delt=23;
void setup(){
Serial.begin(9600);
servo1.attach(8);

servo1.write(90-delt);
delay(1000);

servo1.write(90+delt-5);
delay(1000);

}


void loop(){

  servo1.write(90-delt);
delay(1000);
for(int i=1;i<=100;i++){
servo1.write(90+delt-5);
delay(1000);
servo1.write(90);
delay(2000);}

}

