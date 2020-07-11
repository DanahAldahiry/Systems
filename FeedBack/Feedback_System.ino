/* Designing a feedback system using a potentiometer that resembles the internal potentiometer's feedback that will move the 2nd motor in the same direction.
- START.
1- Add a servo motor (motor_2).
2- Add a potentiometer that resembles motor_1. (the potentiometer will be conected to the analog pin resembling the 1st motor.)
3- when motor_1 (the potentiometer) moves in a certain degree.
4- motor_2 will move in the same direction.
-END
*/

#include <Servo.h>
Servo motor_2;
int motor_1=A0; // the potentiometer simulates the 1st motor.
int motor_2P=7; // motor 2 pin;
void setup()
{
 motor_2.attach(motor_2P);
}

void loop()
{
  motor_1=analogRead(A0);
  motor_1=map(motor_1,1,1023,0,180); //when motor 1 moves motor 2 will move in the same direction.
  motor_2.write(motor_1);
}
