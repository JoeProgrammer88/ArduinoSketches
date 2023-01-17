int ledPin = 13;      // Declaring this outside a function makes it global scope
int delayTime = 1000; // Setting our initial delay time

void setup() {
  // put your setup code here, to run once:
  
  pinMode(ledPin, OUTPUT);    // Set pin 13 as an output (so we can send a signal to it)
  Serial.begin(9600);         // Opening serial port for communication at 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledPin, HIGH);   // turn led on
  delay(delayTime);  
  digitalWrite(ledPin, LOW);    // turn led off
  delay(delayTime);
  delayTime = delayTime + 500;  // add 500ms to delay total
  // delayTime += 500;          // Alternative way of adding 500 to current variable value  
  Serial.println(delayTime); 

  if (delayTime >= 3500) {
    // if the delayTime is greater than or equal to 5000, reset delayTime back to 1000
    Serial.println("If was true");
    delayTime = 1000;
  }   
}

