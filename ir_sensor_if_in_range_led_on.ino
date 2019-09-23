int ir= A0;
int LED1=11;
int LED2=10;
//int LED3=9;
//int LED4=8;
void setup() 
{
 pinMode(ir,INPUT);
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
 //pinMode(LED3,OUTPUT);
 //pinMode(LED4,OUTPUT);
 Serial.begin(9600);
}

void loop() 
{
  int b=analogRead(ir);
  Serial.print(b);
  Serial.print('\n');
  delay(500);
  if(b < 50)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
   // digitalWrite(LED3,HIGH);
   // digitalWrite(LED4,HIGH);
  }
  else
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    //digitalWrite(LED3,LOW);
    //digitalWrite(LED4,LOW);
  }

}
