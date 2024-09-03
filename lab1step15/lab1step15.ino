/********************************************************
 * Student: Paige Rabideaux, Andrew Nitchman
 * Course: EGR348-903
 * Date: 8/29/2024
 * Instructor: Prof Ali
 * Assignment: Post Lab 1
 * Description: This code takes user input in the form of a 
 *              character, and displays it on the serial monitor
  ************************************************************/

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

