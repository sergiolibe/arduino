#include <SoftwareSerial.h>

SoftwareSerial sergiob(10,11);

int value;
int bt;

byte incomingByte=0;

void setup(){
sergiob.begin(9600);
}

void loop(){
  if(sergiob.available()>0){
  char ch=sergiob.read();
  if(isDigit(ch)){
  value=value*10+(ch-'0');
  }
  else if(ch==10){
  bt=value;
  sergiob.print("he recibido:");
  sergiob.println(bt);
  value=0;
  }
  
  }
}
