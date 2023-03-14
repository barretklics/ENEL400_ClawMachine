
#define X_PIN A0
#define Y_PIN A1
#define SW_PIN 2

// define the joystick thresholds for each direction
//#define JOYSTICK_THRESHOLD 512
#define JOYSTICK_DEADZONE 100

  int count = 0;
  int x_start;
  int y_start;

void initStick() {
  pinMode(SW_PIN, INPUT_PULLUP);

}

void runStick() {
  if (count == 0){
    int x_start = analogRead(X_PIN);
    int y_start = analogRead(Y_PIN); 
    count++;
  } else{
    count++;
  }
  int x = analogRead(X_PIN); // read the x-axis value of joystick
  int y = analogRead(Y_PIN); // read the y-axis value of joystick
  //int sw = digitalRead(SW_PIN); // read the button state of joystick

  // check if joystick is in the left position
  if (x < x_start - JOYSTICK_DEADZONE) {
    Serial.println("Left");
  }

  // check if joystick is in the right position
  else if (x > x_start + JOYSTICK_DEADZONE) {
    Serial.println("Right");
  }

  // check if joystick is in the up position
  else if (y < y_start - JOYSTICK_DEADZONE) {
    Serial.println("Up");
  }

  // check if joystick is in the down position
  else if (y > y_start + JOYSTICK_DEADZONE) {
    Serial.println("Down");
  }

  // check if joystick button is pressed
  //if (sw == LOW) {
    //Serial.println("Button Pressed");
  //}


}