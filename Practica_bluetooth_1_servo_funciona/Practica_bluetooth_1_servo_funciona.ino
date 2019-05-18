#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial sergiob(10,11);
Servo servo1;
int value;
int bt;

byte incomingByte=0;

void setup(){
sergiob.begin(9600);
servo1.attach(8);
}

void loop(){
  if(sergiob.available()>0){
  char ch=sergiob.read();
  if(isDigit(ch)){
  value=value*10+(ch-'0');
  }
  else if(ch==32){
  bt=value;
  servo1.write(bt);
  sergiob.print("he impreso en el servo:");
  sergiob.println(servo1.read());
    value=0;
  }
  
  }


  
}
