#include <Servo.h>
 
Servo esc;
int throttlePin = 0;
 
void setup()
{
esc.attach(9);
esc.write(45);
Serial.begin(9600);
delay(10000);
int throttle = analogRead(throttlePin);
throttle = map(throttle, 0, 1023, 45, 156);
esc.write(throttle);
Serial.println(throttle);
delay(4000);
esc.write(0);
}
 
void loop()
{

}

