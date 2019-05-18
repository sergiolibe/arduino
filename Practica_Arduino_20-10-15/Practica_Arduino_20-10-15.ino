int pinEntrada=A0;
int pinSalida=6;
byte brillo;


void setup()
{
  Serial.begin(57600);
  pinMode(pinSalida,OUTPUT);
}

void loop()
{
  brillo=map(analogRead(pinEntrada),0,1023,0,255);
  analogWrite(pinSalida,brillo);
  Serial.print(analogRead(pinEntrada));
  Serial.print(" ");
  Serial.println(brillo);
  delay(1);
}
