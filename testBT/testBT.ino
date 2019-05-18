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
sergiob.println("im awake");
delay(500);
sergiob.println("im awake");
delay(500);
}

void loop(){
  //if(sergiob.available()>0){
  //char ch=sergiob.read();
  //sergiob.println(ch,DEC);
  //sergiob.println("flag1");
  //}

char ch=sergiob.read();
sergiob.println(ch);
delay(500);
  
}
