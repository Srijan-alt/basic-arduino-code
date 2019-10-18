#include<Servo.h>

Servo S;
int pos=90;
void setup() 
{
  S.attach(12);
}

void loop() 
{
  for(pos=0;pos<180;pos++)
  {
    S.write(pos);
    delay(10);
  }
  for(pos=180;pos>0;pos--)
  {
    S.write(pos);
    delay(10);
  }
  delay(10);
}
