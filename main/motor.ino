#include <Stepper.h>

#define yA 11
#define yC 10
#define yB 8
#define yD 9

#define xA 7
#define xC 6
#define xB 4
#define xD 5




const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
Stepper mySteppe2r(stepsPerRevolution, 4, 5, 6, 7);
int stepCount = 0;         // number of steps the motor has taken



int t = 3;





int yCount = 0;
int xCount = 0;
void runY(int increment){

  yCount = increment + yCount;
  if (yCount > 4) {yCount = 1;}
  if (yCount < 1) {yCount = 4;}

  Serial.print(yCount);
if (yCount == 1) {step1Y();}
if (yCount == 2) {step2Y();}
if (yCount == 3) {step3Y();}
if (yCount == 4) {step4Y();}
}
void runX(int increment){

  xCount = increment + xCount;
  if (xCount > 4) {xCount = 1;}
  if (xCount < 1) {xCount = 4;}

  Serial.print(xCount);
if (xCount == 1) {step1X();}
if (xCount == 2) {step2X();}
if (xCount == 3) {step3X();}
if (xCount == 4) {step4X();}
}

void runMotorForwardY() {
  // step one step:
  step1Y();
  delay(t);

  step2Y();
  delay(t);

  step3Y();
  delay(t);

  step4Y();
  delay(t);
}

void runMotorBackwardY() {
  // step one step:
  step4Y();
  delay(3);

  step3Y();
  delay(3);

  step2Y();
  delay(3);

    step1Y();
  delay(3);
}





void step1Y(){
  digitalWrite(yA, HIGH);
  digitalWrite(yB, HIGH);
  digitalWrite(yC, LOW);
  digitalWrite(yD, LOW);
}
void step2Y(){
  digitalWrite(yA, LOW);
  digitalWrite(yB, HIGH);
  digitalWrite(yC, HIGH);
  digitalWrite(yD, LOW);
}
void step3Y(){
  digitalWrite(yA, LOW);
  digitalWrite(yB, LOW);
  digitalWrite(yC, HIGH);
  digitalWrite(yD, HIGH);
}
void step4Y(){
  digitalWrite(yA, HIGH);
  digitalWrite(yB, LOW);
  digitalWrite(yC, LOW);
  digitalWrite(yD, HIGH);
}

//X
void step1X(){
  digitalWrite(xA, HIGH);
  digitalWrite(xB, HIGH);
  digitalWrite(xC, LOW);
  digitalWrite(xD, LOW);
}
void step2X(){
  digitalWrite(xA, LOW);
  digitalWrite(xB, HIGH);
  digitalWrite(xC, HIGH);
  digitalWrite(xD, LOW);
}
void step3X(){
  digitalWrite(xA, LOW);
  digitalWrite(xB, LOW);
  digitalWrite(xC, HIGH);
  digitalWrite(xD, HIGH);
}
void step4X(){
  digitalWrite(xA, HIGH);
  digitalWrite(xB, LOW);
  digitalWrite(xC, LOW);
  digitalWrite(xD, HIGH);
}

void runMotorForwardX() {
  // step one step:
  step1X();
  delay(t);

  step2X();
  delay(t);

  step3X();
  delay(t);

    step4X();
  delay(t);
}

void runMotorBackwardX() {
  // step one step:
  step4X();
  delay(3);

  step3X();
  delay(3);

  step2X();
  delay(3);

    step1X();
  delay(3);
}


