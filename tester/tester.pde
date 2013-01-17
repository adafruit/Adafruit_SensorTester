#include <Adafruit_Sensor.h>
#include <Adafruit_SensorTester.h>

Adafruit_SensorTester tester = Adafruit_SensorTester(-1);

void setup(void) {
  Serial.begin(9600);
  Serial.print("hello!");
}

void loop() {
  delay(500);
}