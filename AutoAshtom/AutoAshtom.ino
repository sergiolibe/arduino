#include <SoftwareSerial.h>
#include <Servo.h>


SoftwareSerial sergiob(10,11);
int value;
int bt;

boolean varCambio=false;//true -> modo bluetooth, false-> modo potenciometro

byte contled=0;
boolean led=false;


byte pinServoLineal=9;
byte pinServoRot=8;
byte pinPot=A0;
Servo miservo1;
Servo miservo2;
int posicion1=0;
int posicion2=0;

void setup() {
  //Serial.begin(9600);
  sergiob.begin(9600);

  pinMode(5,OUTPUT);//Salida Digital ON/OFF HIGH/LOW 5V/0V
  
  miservo1.attach(pinServoLineal);//pin 9
  miservo2.attach(pinServoRot);
  //pinMode(pinPot,INPUT);

  delay(500);

  miservo1.writeMicroseconds(1000);
  //miservo2.write(0);
  delay(1000);
  miservo1.writeMicroseconds(1500);
  //miservo2.write(90);
  delay(1000);
  miservo1.writeMicroseconds(2000);
  //miservo2.write(180);
  delay(1000);

  
}

void loop() {

  if(sergiob.available()>0){//173 -> 1... 7... ultimo ->3
  char ch=sergiob.read();
  if(isDigit(ch)&&varCambio==true){
  value=value*10+(ch-'0');
  }
  else if(ch==32){
  bt=map(value,0,180,1000,2000);
  miservo1.writeMicroseconds(bt);
  sergiob.print("he impreso en el servo: ");
  sergiob.println(bt);
  //sergiob.println(miservo1.read());
    value=0;
  }

  if(ch==109){//m->cambio de modo
    sergiob.println("cambio");
    varCambio=!varCambio;
    contled=0;
    }
  
  }






  if(varCambio==false){//modo potenciometro
  posicion1=analogRead(pinPot);//entre 0 y 1023
  //posicion2=analogRead(pinPot);

  sergiob.print(posicion1);
  sergiob.print(" ");
    
  //posicion2=map(posicion2,0,1023,0,180);// 0-1023 a 0-180
  //miservo2.write(posicion2);
  
  //sergiob.print(posicion2);
  //sergiob.print(" ");
  
  posicion1=map(posicion1,0,1023,1000,2000);
  miservo1.writeMicroseconds(posicion1);
  
  sergiob.println(posicion1);//512 1500 <- se ve esto en monitor serie
  }

  if(contled==50&&varCambio==false){// al cabo de 1s en modo potenciometro
  if(led){//led es variable true/false que me indica si el led se ha encendido o no
  digitalWrite(5,HIGH);//enciendo puerto en pin 5
  contled=0;led=false;
  }else{
    digitalWrite(5,LOW);contled=0;led=true;
    }
  }

  if(contled==25&&varCambio==true){// al cabo de 0.5s en modo bluetooth
    if(led){
  digitalWrite(5,HIGH);
  contled=0;led=false;
  }else{
    digitalWrite(5,LOW);contled=0;led=true;
    }
  }
  
  contled+=1;//aumenta en 1 el valor
  delay(20);//20ms

  //sergiob.println(contled);
}
