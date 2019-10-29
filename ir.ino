int ir= 12;
int LED1=11;
void setup() {
  pinMode(ir,INPUT);
  pinMode(LED1,OUTPUT);
  // put your setup code here, to run once:

}

void loop() 
{
  if(digitalRead(ir)==1)
  {
    digitalWrite(LED1,HIGH);
  }
  else
  {
    digitalWrite(LED1,LOW);
  }
  // put your main code here, to run repeatedly:

}
