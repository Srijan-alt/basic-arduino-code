int Pin=11;
void setup() 
{
  pinMode(Pin,INPUT);
}

void loop() 
{
  digitalWrite(Pin,HIGH);
  delay(50000);
  digitalWrite(Pin,LOW);
}
