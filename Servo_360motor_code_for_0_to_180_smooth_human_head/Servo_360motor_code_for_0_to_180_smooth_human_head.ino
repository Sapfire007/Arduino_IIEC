#include <Servo.h>

Servo myServo;         // Create a servo object
int pos = 0;           // Variable to hold the servo position
int delayTime = 20;    // Delay (ms) between each step – adjust for smoothness

void setup() {
  myServo.attach(9);   // Attach the servo on pin 9
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (pos = 0; pos <= 180; pos++) {
    myServo.write(pos);  // Tell servo to go to position in variable 'pos'
    delay(delayTime);    // Wait a bit for smooth movement
  }
  delay(500);            // Pause at 180° for a moment
  
  // Sweep from 180 back to 0 degrees
  for (pos = 180; pos >= 0; pos--) {
    myServo.write(pos);
    delay(delayTime);
  }
  delay(500);            // Pause at 0° before starting again
  // myServo.write(360);
}
