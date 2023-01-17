int ledPin = 13;  // Declaring this outside a function makes it global scope

void setup() {
  // put your setup code here, to run once:
  
  pinMode(ledPin, OUTPUT);    // Set pin 13 as an output (so we can send a signal to it)
}

void loop() {
  // put your main code here, to run repeatedly:

  const int oneSecond = 1000;         // const makes the variable readonly after it's declared
  digitalWrite(ledPin, HIGH);         // Turn signal on for built-in LED
  delay(oneSecond);                   // Delay for 1 second (1000 milliseconds)
  digitalWrite(ledPin, LOW);          // Turn signal off for built-in LED
  delay(oneSecond);                   
}
/*
  This is
  a block
  comment
*/