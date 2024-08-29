const int ledPins[] = {2, 3, 4, 5,6,7,8,9}; // LED pins

void setup() {
  // set up serial monitor
  Serial.begin(9600);
  delay(1000);
  // Set all LED pins as output
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
      } 
}

void loop() {
  for (int count = 0; count < 256; count++) {
    displayBinary(count);
    delay(250); // Wait for 1 second
  }
}

void displayBinary(int number) {
  for (int i = 0; i < 8; i++) {
    int bit = bitRead(number, i);
    digitalWrite(ledPins[i], bit);
  }
}