#include <Servo.h>
 
Servo esc;
int throttlePin = 0;
 
void setup()
{
Serial.begin(9600);
esc.attach(9);
}
 
void loop()
{
int throttle = analogRead(throttlePin);
throttle = map(throttle, 0, 1023, 80, 155);
esc.write(throttle);
Serial.println(throttle);
}
