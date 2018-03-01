#include <VisitSensor.h>

VisitSensor sensor(A0, A1);

void setup() {
    sensor.debug = true;
}

void loop() {

    sensor.loop();

    if (sensor.detectedDirection == IN) {
        Serial.println("Increment");
    }

    if (sensor.detectedDirection == OUT) {
        Serial.println("Decrement");
    }
}