long V[100];
int valemg;
long valfilt;
//int emg=A2;
long s=0;






void setup(){
Serial.begin(9600);
for (int i=0;i<100;i++){ //accede a las 100 entradas V[0]-V[99]
valemg=analogRead(A2);
V[i]=valemg;
delay(1);
}
delay(1000);

}


void loop(){

for (int i=0;i<99;i++){ // transporta las entradas V[0]-V[98]
V[i]=V[i+1];
}

valemg=analogRead(A2);
V[99]=valemg;

s=0;

for (int i=0;i<100;i++){ //suma las entradas V[0]-V[99]
s=s+V[i];
}

valfilt=s/100;
Serial.println(valfilt);
delay(1);

}

