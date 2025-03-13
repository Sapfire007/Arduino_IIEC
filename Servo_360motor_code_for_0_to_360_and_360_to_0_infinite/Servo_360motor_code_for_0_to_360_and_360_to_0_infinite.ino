#include <Servo.h>

Servo myServo;
const int servoPin = 9;

// For a continuous rotation servo, 90 is stop.
// Adjust these values to get the desired speed.
const int servoForward = 130;  // Value to rotate clockwise (forward)
const int servoReverse = 50;   // Value to rotate counterclockwise (reverse)
const int servoStop = 90;      // Stop command

// Calibrated time (in milliseconds) for one full 360° rotation.
// You must determine this experimentally.
// For example, if your servo rotates one full revolution in 2000 ms, set fullRotationTime = 2000.
const unsigned long fullRotationTime = 2000;

void setup() {
  myServo.attach(servoPin);
  myServo.write(servoStop);  // Ensure the servo is stopped initially.
}

void loop() {
  // Rotate forward (clockwise) for one full revolution.
  myServo.write(servoForward);
  delay(fullRotationTime);
  myServo.write(servoStop);
  delay(500); // Short pause before reversing

  // Rotate reverse (counterclockwise) for one full revolution.
  myServo.write(servoReverse);
  delay(fullRotationTime);
  myServo.write(servoStop);
  delay(500); // Short pause before starting the next cycle
}
