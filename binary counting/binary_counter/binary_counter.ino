//Binary Counter by Agrim Sharma

const int led_1 = 2;
const int led_2 = 4;
const int led_4 = 7;
const int led_8 = 8;
const int del = 1000;
const int longDelay = 5000;

void setup(){
  
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_8, OUTPUT);
  
  }

void loop(){

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_8, LOW);
  delay(del);

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_8, LOW);
  delay(del);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_8, LOW);
  delay(del);

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_8, LOW);
  delay(del);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_8, LOW);
  delay(del);

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_8, LOW);
  delay(del);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_8, LOW);
  delay(del);

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_8, LOW);
  delay(del);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_8, HIGH);
  delay(del);

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_8, HIGH);
  delay(del);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_8, HIGH);
  delay(del);

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_8, HIGH);
  delay(del);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_8, HIGH);
  delay(del);

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_8, HIGH);
  delay(del);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_8, HIGH);
  delay(del);

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_8, HIGH);
  delay(del);

  delay(longDelay);
  
  }






  
