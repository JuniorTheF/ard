// Used here to set a LEDpin number:
const int ledPin =  LED_BUILTIN;        // the number of the LED pin
const long interval = 1000;           // interval at which to blink (milliseconds)
const int buttonPin = 3;              //Button pin number

// Variables will change:
int ledState = LOW;             // ledState used to set the LED
int buttonState;                // For 1 or 0 state

unsigned long previousMillis = 0;        // will store last time LED was updated

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval && buttonState == 1) {
      previousMillis = currentMillis;
    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
  buttonState = 0;
}
