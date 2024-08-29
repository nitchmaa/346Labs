const int ledPins[] = {0,1, 2, 3, 4, 5,6,7}; // LED pins

void setup() {
 // Initialize serial communication at 9600 bits per second
    Serial.begin(9600);
  // Set all LED pins as output
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int count = 0; count < 256; count++) {
    displayBinary(count);
    delay(1000); // Wait for 1 second
  }
}

void displayBinary(int number) {
  for (int i = 0; i < 8; i++) {
    int bit = bitRead(number, i);
    digitalWrite(ledPins[i], bit);
  }
}
