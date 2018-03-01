#include "libraries/VisitSensor/VisitSensor.h"

VisitSensor sensor(A0, A1);

void setup() {
    sensor.debug = true;
}

void loop() {

    sensor.loop();

    if (sensor.detectedDirection == VisitSensor::IN) {
        Serial.println("Increment");
    }

    if (sensor.detectedDirection == VisitSensor::OUT) {
        Serial.println("Decrement");
    }
}