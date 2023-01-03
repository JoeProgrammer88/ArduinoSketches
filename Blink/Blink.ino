// Pin 13 has an LED connected on most Arduino boards.
// Give it a name:
int led = 13;

void setup(){
    // Put your setup code here, to run once:
    pinMode(led, OUTPUT);
}

void loop(){
    // Put your main code here, to run repeatedly:
    digitalWrite(led, HIGH);    // Turn the LED on (HIGH is the voltage level)
    delay(1000);                // Wait for 1000 milliseconds (1 second)
    digitalWrite(led, LOW);     // Turn off the LED
    delay(1000);                // Wait for another second
}