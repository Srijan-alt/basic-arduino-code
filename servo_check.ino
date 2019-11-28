#include<Servo.h>

Servo S;
int pos=90;
void setup() 
{
  S.attach(13);
}

void loop() 
{
  S.write(pos);
}
