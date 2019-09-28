int LED =6;
int button=11;
int buttoncurrent;
int buttonprevious=LOW;
int LEDstate=HIGH;


void setup() 
{
 pinMode(LED,OUTPUT);
 pinMode(button,INPUT);
}

void loop() 
{
 buttoncurrent=digitalRead(button);
 LEDstate=digitalRead(LED);
 if(buttoncurrent == HIGH && buttonprevious == LOW)
{
   if(LEDstate == HIGH)
  {
    digitalWrite(LED,LOW);
  } 
   else
  {
    digitalWrite(LED,HIGH);
  }
}
 buttonprevious=buttoncurrent;
 delay(50);
}
