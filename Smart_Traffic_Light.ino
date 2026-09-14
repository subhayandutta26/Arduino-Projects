void setup() {
  pinMode(8, OUTPUT);   // Red LED
  pinMode(9, OUTPUT);   // Yellow LED
  pinMode(10, OUTPUT);  // Green LED
}

void loop() {

  // RED
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(3000);

  // RED + YELLOW
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(1000);

  // GREEN
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(3000);

  // YELLOW
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(1000);
}
