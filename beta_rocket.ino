#include <Servo.h>
 
Servo esc;
int throttlePin = 0;
 
void setup()
{
pinMode(7, INPUT_PULLUP);// pushbutton on digital pin (1 wire signal pin, other wire to ground)
pinMode(6, INPUT_PULLUP);// "
pinMode(5, INPUT_PULLUP);// "
pinMode(10, INPUT_PULLUP);// "
pinMode(11, INPUT_PULLUP);// "
pinMode(12, INPUT_PULLUP);// "
pinMode(13, INPUT_PULLUP);// "
esc.attach(9);
}

void loop()
{

esc.write(45);
int timer = 0; // set time period for motor to run

    if(digitalRead(10) == LOW) {
      int timer = 1000;
    }
    if(digitalRead(11) == LOW) {
      int timer = 2000;
    }
    if(digitalRead(12) == LOW) {
      int timer = 3000;
    }
    if(digitalRead(13) == LOW) {
      int timer = 4000;
    }

int throttle = analogRead(throttlePin);
throttle = map(throttle, 0, 1023, 45, 156);
    if (digitalRead(7) == LOW) { // max speed pin 7

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
        esc.write(150);
        delay(timer);
        esc.write(0);
 }
    if (digitalRead(6) == LOW) { // med. speed pin 6

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
        esc.write(100);
        delay(timer);
        esc.write(0);
 }
    if (digitalRead(5) == LOW) { // low speed pin 5

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
        esc.write(70);
        delay(timer);
        esc.write(0);
 }

delay(100);

}
