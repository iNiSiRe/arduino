#include <VisitSensor.h>

VisitSensor sensor(A0, A1);

void setup() {
    Serial.begin(9600);
    sensor.debug = true;
}

void loop() {

    sensor.loop();

    if (sensor.detectedDirection == IN) {
        Serial.println("Increment");
        digitalWrite(13, HIGH);
    }

    if (sensor.detectedDirection == OUT) {
        Serial.println("Decrement");
        digitalWrite(13, HIGH);
    }

    if (sensor.detectedDirection == NONE) {
        digitalWrite(13, LOW);
    }
}