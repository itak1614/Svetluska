#include <Arduino.h>
int buttonPin=10;
int buttonState;
int switcher=0;
int i=1;
int r=2;
int g=3;
int b=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(digitalRead(buttonPin)==HIGH){
  buttonState=digitalRead(buttonPin);
  switch (i) {
    case 1:
        digitalWrite(r,HIGH);
        digitalWrite(g,HIGH);
        digitalWrite(b,HIGH);
        delay(1500);
        digitalWrite(r,LOW);
        digitalWrite(g,LOW);
        digitalWrite(b,LOW);
        i++;
      break;
  case 2:
      digitalWrite(r,HIGH);
      delay(1500);
      digitalWrite(r,LOW);
      i++;
    break;
  case 3:
      digitalWrite(g,HIGH);
      delay(1500);
      digitalWrite(g,LOW);
      i++;
    break;
  case 4:
      digitalWrite(b,HIGH);
      delay(1500);
      digitalWrite(b,LOW);
      i++;
    break;
  case 5:
  do{
      digitalWrite(r,HIGH);
      delay(500);
      digitalWrite(r,LOW);
      digitalWrite(g,HIGH);
      delay(500);
      digitalWrite(g,LOW);
      digitalWrite(b,HIGH);
      delay(500);
      digitalWrite(b,LOW);
      switcher++;
    }while(switcher==3);
      i=1;
      switcher=0;
    break;
    default:
      digitalWrite(r,LOW);
      digitalWrite(g,LOW);
      digitalWrite(b,LOW);
      }
  }
}
