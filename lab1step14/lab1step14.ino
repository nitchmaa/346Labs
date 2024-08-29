void setup() {
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // Read the input on analog pin A0
  int sensorValue = analogRead(A0);
  
  // Convert the analog reading (0 - 1023) to a voltage (0 - 5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Print out the voltage
  Serial.println(voltage);n
  
  // Delay in between reads for stability
  delay(100);
}
