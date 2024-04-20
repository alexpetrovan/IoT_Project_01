# IoT Gas Leakage Detector

This is a simple IoT project that demonstrates how to build a gas leakage detector using an Arduino Uno board, a gas sensor, a buzzer, and a LED light. When the gas sensor detects a certain level of gas, the buzzer will sound and the LED light will turn on to indicate the gas leakage.

## Components Used
- Arduino Uno board
- Gas sensor
- Buzzer
- LED
- Breadboard
- Jumper wires
- 125 Ohm Resistor

## Installation
1. Connect the components according to the circuit diagram.
2. Upload the provided code (`gas_leakage_detector.ino`) to your Arduino Uno board.

## Code
```cpp
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
```

## Usage
1) Power up your Arduino Uno board.
2) Once the code is uploaded, the gas sensor will start detecting gas levels.
3) When the gas level exceeds a threshold (200 in this code), the buzzer will sound and the LED will turn on.
