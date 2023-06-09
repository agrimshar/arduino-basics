#include <Servo.h>

const int servoPin = 9;
const int photoresistor = A1;
const float ANALOG_TO_DEGREES = 170./1023.;

int brightness;
float position;

int delayTime = 50;

Servo myServo;

void setup(){
  myServo.attach(servoPin);
  pinMode(photoresistor, INPUT);
  Serial.begin(9600);
}

void loop(){
  brightness = analogRead(photoresistor);
  Serial.println(brightness);
  position = ANALOG_TO_DEGREES * brightness;
  myServo.write(position);
  delay(delayTime);

}
