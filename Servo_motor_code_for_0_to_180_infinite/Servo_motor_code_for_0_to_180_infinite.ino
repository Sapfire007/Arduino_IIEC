// This code runs the motor from 0 to 180 and back from 180 to 0 for inifinite time

#include <ESP32Servo.h>

Servo myServo;  // Create a servo object
int servoPin = 18; // Using GPIO 18

void setup() {
    myServo.attach(servoPin);
}

void loop() {
    // Move from 0 to 180 degrees
    for (int pos = 0; pos <= 180; pos++) {
        myServo.write(pos);
        delay(15); // Adjust for smooth movement
    }

    delay(1000); // Pause at 180 degrees

    // Move from 180 to 0 degrees
    for (int pos = 180; pos >= 0; pos--) {
        myServo.write(pos);
        delay(15);
    }

    delay(1000); // Pause at 0 degrees
}
