#include <Arduino.h>

#define MY_LED 13

void setup() {
  // put your setup code here, to run once:
  pinMode(MY_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(MY_LED,HIGH);
  delay(100);
  digitalWrite(MY_LED, LOW);
  delay(1000);
}