void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == 1) {
    digitalWrite(5, HIGH);
  }
  else {
    digitalWrite(5, LOW);
  }
}
