const int ldrPin = A0;        // LDR connected to analog pin A0
const int ledPin = 9;         // LED connected to digital pin 9
const int threshold = 600;    // Threshold value for darkness (adjustable based on lighting conditions)

void setup() {
  pinMode(ledPin, OUTPUT);    // Set LED pin as an output
  Serial.begin(9600);         // Begin Serial communication for debugging
}

void loop() {
  int ldrValue = analogRead(ldrPin);    // Read the LDR value (0-1023)
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);             // Print LDR value for debugging

  // If the LDR value is below the threshold, it is dark, and LEDs should turn on
  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH);         // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW);          // Turn off the LED
  }

  delay(500);                           // Small delay for stability
}
