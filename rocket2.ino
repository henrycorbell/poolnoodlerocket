#include <Servo.h>

Servo esc;
int throttlePin = A0;
int buttonPin = A2;
int val = 0;


void setup() {
  esc.attach(9);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(buttonPin);
  int throttle = analogRead(throttlePin);
  throttle = map(throttle, 0, 1000, 45, 156);
 Serial.println(val);
  if(val == 1023){
    esc.write(throttle);
    delay(2000);
    esc.write(0);
  }
}
