
/********************************************************
 * Student: Paige Rabideaux, Andrew Nitchman
 * Course: EGR348-903
 * Date: 8/29/2024
 * Instructor: Prof Ali
 * Assignment: Post Lab 1
 * Description: LEDs light up representing numbers in binary
                following an input from serial monitor.
  ************************************************************/
const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9}; // LED pins
int inputNumber;

void setup() {
  // set up serial monitor
  Serial.begin(115200);
  delay(1000);
  //prompts user for input
  Serial.println("Enter a number between 0 and 255:");
  // Set all LED pins as output
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
      } 
}

void loop() {
    for (int count = 0; count < 256; count++) {


   //reads input from serial monitor if available and assigns it to a
   //variable.  Plus dose some communicating with user about
   //the validity of their input.  
   if (Serial.available() > 0) {
    int incomingByte = Serial.parseInt(); // Read the incoming integer
      if (incomingByte >= 0 && incomingByte <= 255) {
      inputNumber = incomingByte;
      Serial.print("You entered: ");
      Serial.println(inputNumber);
    } else {
      Serial.println("Invalid input. Please enter a number between 0 and 255.");
    }
  }

    displayBinary(count);
    //the program rapidly shows every number 0-255 but so fast that its 
    //imperceptable but pauses the program when the users desired number
    //is the current showing.
    if(count==inputNumber)delay(1000);
    //delay(0); // Wait for 1 second
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