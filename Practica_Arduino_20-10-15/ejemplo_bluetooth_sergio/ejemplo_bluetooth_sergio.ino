#include <SoftwareSerial.h>// import the serial library

SoftwareSerial sergiob(10, 11); // RX, TX
int ledpin=13; // led on D13 will show blink on / off
int BluetoothData; // the data given from Computer
int pinEntrada=A0;


void setup() {
  // put your setup code here, to run once:
  delay(5000);
  sergiob.begin(9600);
  sergiob.println("Bluetooth On please press 1 or 0 blink LED ..");
  
}

void loop() {
  // put your main code here, to run repeatedly:
   
   sergiob.print(analogRead(pinEntrada));
   sergiob.print(", ");
   delay(500);// prepare for next data ...


}
