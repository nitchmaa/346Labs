const int ledPins[] = {0,1, 2, 3}; // LED pins
int count;
int input= 5;

void setup() {
  Serial.begin(9600); // Start the serial communication
  delay(1000); //wait for serial port to connect
  Serial.println("Enter a numer between 0 and 15:");

  for (int i = 0; i < 4; i++) {   // Set all LED pins as output
    pinMode(ledPins[i], OUTPUT);  // Set all LED pins as output
  }
}

void loop() {
  
  for (int count = 0; count < 16; count++) {
    displayBinary(count);
    if(count==input){
    delay(1000); // Wait for 1 second
    }
   
  }
}

void displayBinary(int number) {
  for (int i = 0; i < 4; i++) {
    int bit = bitRead(number, i);
    digitalWrite(ledPins[i], bit);
  }
}
