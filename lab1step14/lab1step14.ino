/********************************************************
 * Student: Paige Rabideaux, Andrew Nitchman
 * Course: EGR348-903
 * Date: 8/29/2024
 * Instructor: Prof Ali
 * Assignment: Post Lab 1
 * Description: This code reads analog input from a potentiometer 
 *              and prints to serial monitor on the range 0V-5V.
 ************************************************************/
void setup() {
  Serial.begin(9600);   // Initialize serial comms at 9600 bps
}

void loop() {
    int sensorValue = analogRead(A0); // Read the input on analog pin A0
  
  // Convert the analog reading (0 - 1023) to a voltage (0 - 5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Print out the voltage
  Serial.println(voltage);
  
  // Delay in between reads for stability
  delay(100);
}
