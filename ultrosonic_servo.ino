#include<Servo.h>
Servo S;
int pos=90;
int pos1=15;
int trigpin=12;
int echopin=10;
long duration;
int distance; 
void setup() 
{
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);
 S.attach(13);
 Serial.begin(9600); 
}
void loop() 
{
  digitalWrite(trigpin,LOW);
  delay(2);
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);

  duration=pulseIn(echopin,HIGH);
  distance=duration*0.0343/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  if(distance > 25)
  {
    S.write(pos1);//close door
  }
  else 
  {
    S.write(pos);//open door
  }
  
}
  
