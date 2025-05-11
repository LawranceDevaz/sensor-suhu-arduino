const int lm35Pin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(lm35Pin);
  float voltage = analogValue * (5.0 / 1023.0);
  float temperatureC = voltage * 100;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000);
}
