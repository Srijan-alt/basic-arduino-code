#include<Servo.h>
int pos=55;
Servo s;
void setup() 
{
  s.attach(12);
}

void loop() 
{
 s.write(pos);
}
