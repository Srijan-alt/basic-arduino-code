#include<Servo.h>
#include <SPI.h>
#include <MFRC522.h>
int flag=0;
int i=0;
Servo s;
int pos=0;//position for close door
int pos1=30;//position for open door
 
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
 
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  s.attach(8);
 
}
void loop() 
{
int ar1[10]={22,180,99,67};
//  Look for new cards
 if ( ! mfrc522.PICC_IsNewCardPresent()) 
 {
   return;
 }
  // Select one of the cards
 if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
  return;
  }
 
  for(int i=0;i<4;i++)
  {
    if(mfrc522.uid.uidByte[i]==ar1[i])
    {
      flag++;
    }
    else
    {
      flag=0;
    }
    if(flag==4)
    {
      s.write(pos);
      delay(7000);
      s.write(pos1);
    }
    else
    {
      s.write(pos);
      }
   }
   mfrc522.PICC_HaltA();
   // Stop encryption on PCD
  mfrc522.PCD_StopCrypto1();
}
 
