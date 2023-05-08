const int greenLed = 3;
const int potentiometer = A0;

//analog inputs are measured from 0 - 1023
//PMW digital outputs are measured from 0 - 255
const double ANALOG_TO_PMW = 255./1023.;

int delayTime = 50;
double readVal;

void setup() {
  //initialize pins
  pinMode(greenLed, OUTPUT);
  pinMode(potentiometer, INPUT);
}

void loop() {
  //converts input from potentiometer to PMW digital output
  readVal = analogRead(potentiometer) * ANALOG_TO_PMW;

  //outputs value to LED
  analogWrite(greenLed, readVal);

  //delay before next update
  delay(delayTime);
}
