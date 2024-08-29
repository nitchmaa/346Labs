const int ledPins[] = {2, 3, 4, 5,6,7,8,9}; // LED pins
int inputNumber;

void setup() {
  // set up serial monitor
  Serial.begin(115200);
  delay(1000);
  Serial.println("Enter a number between 0 and 255:");
  // Set all LED pins as output
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
      } 
}

void loop() {
    for (int count = 0; count < 256; count++) {

   if (Serial.available() > 0) {
    int incomingByte = Serial.parseInt(); // Read the incoming number as an integer
    if (incomingByte >= 0 && incomingByte <= 255) {
      inputNumber = incomingByte;
      Serial.print("You entered: ");
      Serial.println(inputNumber);
    } else {
      Serial.println("Invalid input. Please enter a number between 0 and 255.");
    }
  }

    displayBinary(count);
    if(count==inputNumber)delay(1000);
    //delay(0); // Wait for 1 second
  }
}

void displayBinary(int number) {
  for (int i = 0; i < 8; i++) {
    int bit = bitRead(number, i);
    digitalWrite(ledPins[i], bit);
  }
}