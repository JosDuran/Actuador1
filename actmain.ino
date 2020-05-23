int pinvolt = 7;
int pingnd = 6;

void setup() {
  pinMode(7, OUTPUT);    // sets the digital pin 7 as output
  pinMode(6, OUTPUT); 
}

void loop() {
  digitalWrite(pinvolt, HIGH); // sets the digital pin 7 on
  digitalWrite(pingnd, LOW);
  delay(100);            // waits for a second
  digitalWrite(pinvolt, LOW);  // sets the digital pin 7 off
  digitalWrite(pingnd, LOW);
  delay(5000);
  digitalWrite(pinvolt, LOW); // sets the digital pin 7 on
  digitalWrite(pingnd, HIGH);
  delay(100);            // waits for a second
  digitalWrite(pinvolt, LOW);  // sets the digital pin 7 off
  digitalWrite(pingnd, LOW);
   
  delay(5000);            // waits for a second
}
