int potValue;
int brightness;

void setup() {
  pinMode(5, OUTPUT);
}

void loop() {
  potValue = analogRead(A0);              // Read potentiometer (0–1023)
  brightness = map(potValue, 0, 1023, 0, 255); // Convert to 0–255
  analogWrite(5, brightness);             // Control LED brightness
}
