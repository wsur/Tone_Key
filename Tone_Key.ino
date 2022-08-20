#include "pitches.h"
int sensorReading = 0;
const int threshold = 20; // порог срабатывания
void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorReading = analogRead(0);
  Serial.println(sensorReading);
  delay(50);

  if(sensorReading > threshold)
    tone(8, NOTE_C7, 100); // цифровой пин, нота и длительность
}
