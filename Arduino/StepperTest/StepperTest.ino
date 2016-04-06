// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>


//MG: our NEMA has 200 / 1.8 ??
// Connect a stepper motor with 200 steps per revolution (1.8 degree)
// to motor port #1 (M1 and M2)
AF_Stepper motor(200, 1);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Stepper test!");

  motor.setSpeed(10);  // 10 rpm   
}

void loop() {
  Serial.println("Single coil steps");
  motor.step(100, FORWARD, SINGLE); 
  motor.step(100, BACKWARD, SINGLE); 
  
  delay(500);
  Serial.println("Double coil steps");
  motor.step(100, FORWARD, DOUBLE); 
  motor.step(100, BACKWARD, DOUBLE);

  delay(500);
  Serial.println("Interleave coil steps");
  motor.step(100, FORWARD, INTERLEAVE); 
  motor.step(100, BACKWARD, INTERLEAVE); 

  delay(500);
  Serial.println("Micrsostep steps");
  motor.step(100, FORWARD, MICROSTEP); 
  motor.step(100, BACKWARD, MICROSTEP); 
}
