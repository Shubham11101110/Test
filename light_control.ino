// Automatic Light Control using LDR and Relay

const int ldrPin = A0;        // LDR connected to analog pin A0
const int relayPin = 7;       // Relay module connected to digital pin 7
int threshold = 500;          // Threshold ADC value (adjust after calibration)

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  // Light OFF initially
  Serial.begin(9600);           // For debugging
}

void loop() {
  int ldrValue = analogRead(ldrPin);  // Read LDR value (0-1023)
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(relayPin, HIGH);  // It's dark, turn ON light
  } else {
    digitalWrite(relayPin, LOW);   // It's bright, turn OFF light
  }

  delay(500);  // Read every 500ms
}