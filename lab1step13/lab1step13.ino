/********************************************************
 * Student: Paige Rabideaux, Andrew Nitchman and todd
 * Course: EGR348-903
 * Section: 903
 * Date: 8/29/2024
 * Instructor: Prof Ali
 * Assignment: Post Lab 1
 * Description: This code flashes an LED every second using pin 4 on the Arduino
  ************************************************************/

int led = 4;  //assigning the variable led to represent 4

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
