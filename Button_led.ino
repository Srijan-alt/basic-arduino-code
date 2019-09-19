int buttonvalue=2;
int LED=3;
void setup() {
pinMode(buttonvalue,INPUT);
pinMode(LED,OUTPUT);
}

void loop() 
{
  int b=digitalRead(buttonvalue);
if(b !=0)
{
  digitalWrite(LED,HIGH);
}
else
{
  digitalWrite(LED,LOW);
}

}
