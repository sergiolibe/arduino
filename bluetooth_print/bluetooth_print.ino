#include <SoftwareSerial.h>

SoftwareSerial sergiob(10,11);



byte incomingByte=0;

void setup(){
sergiob.begin(9600);
}

void loop(){
  if(sergiob.available()>0){
  incomingByte=sergiob.read();
  sergiob.print("he recivido:");
  sergiob.println(int(incomingByte));
  }
}
