int pinA=11;
int pinB=12;
int pinMedio=9;
boolean edoA=0;
boolean edoB=0;
boolean edoMedio=0;
int pos=0;
void setup(){
Serial.begin(9600);
pinMode(pinA,INPUT);
pinMode(pinB,INPUT);
pinMode(pinMedio,INPUT);
}

void loop(){
delay(100);
edoA=digitalRead(pinA);
edoB=digitalRead(pinB);
edoMedio=digitalRead(pinMedio);
/*Serial.print("pinA=");
Serial.print(edoA);
Serial.print("    pinB=");
Serial.print(edoB);
Serial.print("    pinMedio=");
Serial.println(edoMedio);*/
edoAviejo=edoA;
if(edoA==1);
delay(20);
if(edoB==1);


}
