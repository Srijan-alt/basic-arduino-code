#include<AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
char i;
void setup() {
motor1.setSpeed(255);
motor2.setSpeed(255);
Serial.begin(9600);
}

void loop() {
if(Serial.available() > 0)
{
 char i=Serial.read();
}
if(i=="FORWARD")
{
motor1.run(FORWARD);
motor2.run(FORWARD);
delay(1000);
}
if(i=="RIGHT")
{
motor1.run(FORWARD);
motor2.run(BACKWARD);
delay(550);
}
if(i=="BACKWARD")
{
motor1.run(BACKWARD);
motor2.run(BACKWARD);
delay(1000);
}
if(i=="LEFT")
{
motor1.run(BACKWARD);
motor2.run(FORWARD);
delay(550);
}
}
