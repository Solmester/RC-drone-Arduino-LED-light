void setup(){ //Start the pins
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
}

void loop(){
  if(digitalRead(8) == HIGH){ // if the input on pin 8 is high, send high output on pin 12, 11, 10, 9.
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
  } 
  else{
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
  digitalWrite(4,HIGH); //Use this to power on the RC Reciver

}
