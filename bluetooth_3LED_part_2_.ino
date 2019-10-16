int l1=11;
int l2=12;
int l3=13;
char i;
void setup() 
{
 pinMode(l1,OUTPUT);
 pinMode(l2,OUTPUT);
 pinMode(l3,OUTPUT);
 Serial.begin(9600);
}

void loop() 
{
  if(Serial.available() > 0)
  {
   char i=Serial.read();
  }
  if(i=='1')
    {
     digitalWrite(l1,HIGH);
    }
   else if(i=='2')
    {
      digitalWrite(l1,LOW);
    }
    else if(i=='3')
    {
      digitalWrite(l2,HIGH);
    } 
    else if(i=='4')
    {
      digitalWrite(l2,LOW);
    } 
    else if(i=='5')
    {
      digitalWrite(l3,HIGH);
    }
    else if(i=='6')
    {
      digitalWrite(l3,LOW);
    }  
  delay(50);

}
