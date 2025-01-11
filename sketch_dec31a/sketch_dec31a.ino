// Define the onboard LED pin
const int ledPin = LED_BUILTIN; 

// Array of blink frequencies in milliseconds
int blinkDelays[] = {1000, 500, 250, 125}; // Corresponding to 1 Hz, 2 Hz, 4 Hz, 8 Hz
const int numFrequencies = sizeof(blinkDelays) / sizeof(blinkDelays[0]);

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Iterate through the blink frequencies
  for (int i = 0; i < numFrequencies; i++) {
    // Blink the LED on and off at the current frequency
    digitalWrite(ledPin, HIGH); // Turn the LED on
    delay(blinkDelays[i]);      // Wait for the ON time
    digitalWrite(ledPin, LOW);  // Turn the LED off
    delay(blinkDelays[i]);      // Wait for the OFF time
  }
}
