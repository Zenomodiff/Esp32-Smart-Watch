const int threshold = 50;

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int hallSensorValue = hallRead();

  Serial.print("Hall Sensor Value: ");
  Serial.println(hallSensorValue);

if (hallSensorValue > threshold) {
    digitalWrite(LED_BUILTIN, HIGH); 
    Serial.println("LED ON");
  } else {
    digitalWrite(LED_BUILTIN, LOW); 
    Serial.println("LED OFF");
  }

  delay(500); 
}
