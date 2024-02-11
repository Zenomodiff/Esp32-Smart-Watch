#include <Arduino.h>

const int button_1 = 17;
const int button_2 = 16;
const int button_3 = 5;

void setup() {

  Serial.begin(500000);

  pinMode(button_1, INPUT);
  pinMode(button_2, INPUT);
  pinMode(button_3, INPUT);
}

void loop() {

  int buttonState1 = digitalRead(button_1);
  int buttonState2 = digitalRead(button_2);
  int buttonState3 = digitalRead(button_3);

  if (buttonState1 == LOW) {
    Serial.println("BUTTON 1");
    delay(500);
  }
  if (buttonState2 == LOW) {
    Serial.println("BUTTON 2");
    delay(500);
  }
  if (buttonState3 == LOW) {
    Serial.println("BUTTON 3");
    delay(500);
  }
}
