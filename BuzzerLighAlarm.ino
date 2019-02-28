void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(A1, INPUT);
}

void loop() {
  // read the value from the sensor:
  int lightValue = analogRead(A1);

  if(lightValue < 755)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  } 
  else if(lightValue > 755)
  {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  }
  Serial.print(lightValue);
  delay(1);
}
