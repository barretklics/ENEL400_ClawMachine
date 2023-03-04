



void setup() {
  // put your setup code here, to run once:
  Serial.print("Fuck you");
  Serial.begin(9600);
  calibrateJoystick();
}

void loop() {

  //Main game loop
  digitalWrite(13, LOW);
  getJoystick();

  // put your main code here, to run repeatedly:
  /*Serial.print("X: ");
  Serial.print(x);
  Serial.print("\n");
*/
  //Serial.print("Y: ");
  //Serial.print(y);
  //Serial.print("\n");




}
