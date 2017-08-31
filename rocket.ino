#include <Servo.h>
 
Servo esc;
int throttlePin = 0;
int buttonPin = 2;
int buttonState = 0;
 
void setup()
{
  Serial.begin(9600);
  esc.attach(9);
  pinMode(buttonPin, INPUT);
}
 
void loop()
{

if(buttonState == LOW){
  int throttle = analogRead(throttlePin);
throttle = map(throttle, 0, 1023, 45, 156);
buttonState = digitalRead(buttonPin);
  esc.write(throttle);
  Serial.println(throttle);
  delay(5000);
  esc.write(0);
  Serial.println(throttle);
  Serial.println(buttonState);
  }
}
