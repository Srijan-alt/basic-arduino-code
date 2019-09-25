int trigpin=12;
int echopin=10;
int LED1=8;
long duration;
int distance; 
void setup() 
{
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);
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
    digitalWrite(LED1,HIGH);
  }
  else 
  {
    digitalWrite(LED1,LOW);
  }
  
}
  
