const byte ledPin = 13; // choose the pin for the LED. attiny85 = 0; teensy = 11
const byte inPin1 = 1;   // choose the input pin
bool val = 0;     // variable for reading the pin status


void setup() {
  pinMode(ledPin, OUTPUT);  // declare LED as output
  
  pinMode(inPin1, INPUT);    // declare as input
  digitalWrite(inPin1, HIGH); //enable pull up resistor
  
}

void loop(){
  
  //ground inPin1 to get continuity. toggle led when triggered
  val = digitalRead(inPin1);  // read input value
  if (val == HIGH) {         // check if the input is HIGH (if no cont..)
    digitalWrite(ledPin, LOW);  // turn LED OFF
  } else {
    digitalWrite(ledPin, HIGH);
  }
}
