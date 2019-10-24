int relay=3;
void setup() 
{
pinMode(relay,OUTPUT);

}

void loop() 
{
  digitalWrite(relay,HIGH);
  delay(500);
  digitalWrite(relay,LOW);
  delay(500);
}
