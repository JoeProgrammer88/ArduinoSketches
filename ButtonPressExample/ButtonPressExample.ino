int ledPin = 10;
int buttonPin = 8;


void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  // Detect if the button is pressed
  int buttonPressed = digitalRead(buttonPin);
  
  // If the button is pressed
  if (buttonPressed == HIGH){
    // light up the LED
    digitalWrite(ledPin, HIGH);
  }
  else { // if the button is not pressed
    // ensure LED is not lit
    digitalWrite(ledPin, LOW);
  }	
}