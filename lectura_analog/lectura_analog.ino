void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print("pinA0");
  Serial.println(analogRead(0));
  delay(50);
}
