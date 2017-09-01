#include <Servo.h>
 
Servo esc;
int throttlePin = 0;
 
void setup()
{
pinMode(7, INPUT_PULLUP); // pushbutton on digital pin 7 (1 wire signal pin, other wire to ground)
esc.attach(9);
}

void loop()
{

esc.write(45);

int throttle = analogRead(throttlePin);
throttle = map(throttle, 0, 1023, 45, 156);
    if (digitalRead(7) == LOW) {

        int beep = 0;
        while(beep < 5){
        noTone(5);
        tone(5, 3000, 700);
        delay(700);
        noTone(5);
        delay(800);    
        beep++;
        }
        tone(5, 3000, 1500);
        delay(1500);
        noTone(5);
        esc.write(throttle);
        delay(4000);
        esc.write(0);
 }
 
delay(100);

}
