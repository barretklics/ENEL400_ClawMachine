



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //initStick();
  calibrateJoystick();
}

void loop() {

  //runStick();

  runJoystick();

  runY(getY()); 
  runX(getX()); 
  delay(1);
}
  //Main game loop
 // digitalWrite(13, LOW);

  //digitalWrite(11, HIGH);
  //digitalWrite(10, HIGH);
  //digitalWrite(9, HIGH);
  //digitalWrite(8, HIGH);
  
  //runMotor();


  // put your main code here, to run repeatedly:
  /*Serial.print("X: ");
  Serial.print(x);
  Serial.print("\n");
*/
  //Serial.print("Y: ");
  //Serial.print(y);
  //Serial.print("\n");





