const int VRx = A0; //x potentiometer
const int VRy = A1; //y potentiometer
const int SW = 2; //click switch
const int up = 11; //up led
const int right = 5; //right led
const int down = 9; //down led
const int left = 6; //left led

float x, y;
int push;

int dt = 20; //delay time

void setup(){
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP);
  
  pinMode(up, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(down, OUTPUT);
  pinMode(left, OUTPUT);
}

void loop(){
  x = analogRead(VRx); //reading x voltage
  y = analogRead(VRy); //readying y voltage
  push = digitalRead(SW); //reading if click switch is active


  //the following analogWrites use linear equations to calculate the brightness of each led
  //max brightness if the joystick is pulled to their endpoints
  //0 brightness if the joystick is in the middle (515 is the middle value for y, 508 is the middle value for x)


  if(x > 508.){
    analogWrite(right, (51./103.) * x - (25908./103.));
  } else{
    analogWrite(right, 0);
  }

  if(x < 508.){
    analogWrite(left, (-255./508.) * x + 255.);
  } else {
    analogWrite(left, 0);
  }

  if(y > 515.){
    analogWrite(down, (255./508.) * y - (131325./508.));
  } else {
    analogWrite(down, 0);
  }
  
  if(y < 515.){
    analogWrite(up, (-51./103.) * y + 255.);
  } else {
    analogWrite(up, 0);
  }

  if(push == 0){
    analogWrite(up, 255);
    analogWrite(down, 255);
    analogWrite(left, 255);
    analogWrite(right, 255);
  }

  delay(dt);
}
