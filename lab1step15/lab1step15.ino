void setup() {
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
  // Print a message to the Serial Monitor
  Serial.println("Enter a character:");
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming byte
    char incomingByte = Serial.read();
    
    // Print the received character
    Serial.print("You entered: ");
    Serial.println(incomingByte);
  }
}
