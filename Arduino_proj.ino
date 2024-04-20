#define BUZZER_PIN 3
#define LED_PIN 12

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  if (sensorValue > 200)
  {
    analogWrite(BUZZER_PIN, 50);
    digitalWrite(LED_PIN, HIGH);
  } else {
    analogWrite(BUZZER_PIN, 0);
    digitalWrite(LED_PIN, LOW);
  }
  delay(1000);
}
