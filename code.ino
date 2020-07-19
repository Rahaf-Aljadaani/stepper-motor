

#include <Stepper.h>

const int stPerRev = 200;  


//the stepper library
Stepper myStepper(stPerRev, 8, 9, 10, 11);

int stepCount = 0;  

void setup() {
}

void loop() {
  int sensorReading = analogRead(A0);
  int motorSpeed = map(sensorReading, 0, 1023, 0, 250);
  if (motorSpeed > 0) {
    myStepper.setSpeed(motorSpeed);
    myStepper.step(stPerRev / 100);
  }
}