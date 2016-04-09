#include <Servo.h>

int pos = 0;    // variable to store the servo position

void closeGate(Servo servo) {
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

void openGate(Servo servo) {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

Servo myServo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
  myServo.attach(3);  // attaches the servo on pin x to the servo object
}

void loop() {
  int degree = 180;
  openGate(myServo);
  delay(1000);
  closeGate(myServo);
  delay(500);
}
