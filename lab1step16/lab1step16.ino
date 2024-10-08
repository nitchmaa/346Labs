
/********************************************************
 * Student: Paige Rabideaux, Andrew Nitchman
 * Course: EGR348-903
 * Date: 8/29/2024
 * Instructor: Prof Ali
 * Assignment: Post Lab 1
 * Description: LEDs light up representing numbers in binary
  ************************************************************/
//this array is tha pinout LEDs
const int ledPins[] = {2, 3, 4, 5,6,7,8,9};

void setup() {
  // set up serial monitor at 9600 bps
  Serial.begin(9600);
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

  /*nombers is an 8 bit number so for-loop iterates
  8 times to look at each bit.  If the bit is a 1,
  digitalWrite is used to return the value of that
  bit with its position so that the led can match it
  value and position.  */
void displayBinary(int nombers) {
  for (int i = 0; i < 8; i++) {
    int bit = bitRead(nombers, i);
    digitalWrite(ledPins[i], bit);
  }
}