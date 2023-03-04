#define joyX A0
#define joyY A1

int x, y;
int dirX, dirY;
int centX, centY;
int sens = 80; //Sensitity from centre
//To be called on init, sets joystick center values. Assumes that the joystick is physically centered on startup
void calibrateJoystick(){

  centX = analogRead(joyX);
  centY = analogRead(joyY);

}


void getJoystick(){
 // int[2] dirs= {0,0};
  x = analogRead(joyX);
  y = analogRead(joyY);

  if(x > centX + sens) dirX = 1; //posX
  else if (x < centX - sens) dirX = -1; //negX
  else dirX = 0;


  if(y > centY + sens) dirY = -1; //negY
  else if (y < centY - sens) dirY = 1; //posY
  else dirY = 0;
    Serial.print(x);
    Serial.print(", ");
    Serial.print(y);

    Serial.print(": ");

    Serial.print(dirX);
    Serial.print(", ");
    Serial.print(dirY);
    Serial.print("\n");
    Serial.print("\n");
  //dirs[0] = dirX;
  //dirs[1] = dirY;

  if (false){
    Serial.print(dirX);
    Serial.print(", ");
    Serial.print(dirY);
    Serial.print("\n");
  }


}
