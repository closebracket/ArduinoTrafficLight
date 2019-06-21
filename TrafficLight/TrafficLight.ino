
/* 
Traffic Light for Arduino - By https://mr.edwarcharl.es

*/

// Set constants - They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int Green =  10;      // Green led for the traffic light 
const int Yellow = 11;      // Yellow led for the traffic light 
const int Red = 12;        // Red led for the traffic light 
const int Blue = 13;       // Blue led on the Arduino

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
// read the state of the pushbutton  value:
  buttonState = digitalRead(buttonPin);
  
if (buttonState == HIGH)
{ 
  // Begin the traffic light sequence. We're starting from red.
  digitalWrite(Red, HIGH);         // Turn the red led __on__.
  digitalWrite(Yellow, LOW);       // Yellow stays off.
  digitalWrite(Green, LOW);        // Green stays off.
  digitalWrite(Blue, LOW);         // Blue stays off.
  delay(4000);                     // Delay changing from red to yellow for 4 seconds.
  digitalWrite(Red, LOW);          // Turn the red led __off__.
  digitalWrite(Yellow, HIGH);      // Turn the Yellow led __on__.
  digitalWrite(Green, LOW);        // Green stays off.
  digitalWrite(Blue, LOW);         // Blue stays off.
  delay(2000);                     // Delay changing from yellow to yellow for 2 seconds.
  digitalWrite(Red, LOW);          // Red stays off.
  digitalWrite(Yellow, LOW);       // Turn the Yellow led __off__.
  digitalWrite(Green, HIGH);       // Turn the Green led __on__.
  digitalWrite(Blue, LOW);         // Blue stays off.
  delay(10000);                    // Delay the traffic light to blue led state change for 10 seconds.
  digitalWrite(Red, LOW);          // Red stays off.
  digitalWrite(Yellow, LOW);       // Yellow stays off.
  digitalWrite(Green, LOW);        // Turn the Green led __off__.
  digitalWrite(Blue, HIGH);        // Turn the Blue led __on__.
  delay(40000);                    // Delay 40 seconds before looping.
}
  
