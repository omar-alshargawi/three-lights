void setup() {
  // Initialize all LED pins as outputs
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // Blink LED on pin 3
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  
  // Blink LED on pin 7
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  
  // Blink LED on pin 10
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  
  delay(1000); // Optional delay between cycles
}