#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#define FIREBASE_HOST ""
#define FIREBASE_AUTH ""
#define WIFI_SSID "Your wifi name"
#define WIFI_PASSWORD "Password of the wifi"
int led=12;
int bulb=14;
int fan=4;
int flag=0;
void setup() {
  Serial.begin(115200);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  pinMode(led,OUTPUT);
  pinMode(bulb,OUTPUT);
  pinMode(fan,OUTPUT);
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

int n = 0;

void loop() {
  // set value
  if(flag==0)
  {
  Firebase.setString("TouchPro/a", "0");
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /number failed1:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(1000);
  
  Firebase.setString("TouchPro/b", "0");
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /number failed2:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(1000);

  // set value
  Firebase.setString("TouchPro/c", "0");
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /number failed3:");
      Serial.println(Firebase.error());  
      return;
  }
  }
  delay(1000);

  flag=1;
  String x=Firebase.getString("TouchPro/a");
  String y=Firebase.getString("TouchPro/b");
  String z=Firebase.getString("TouchPro/c");


  if(x=="1")//LED

  {

    digitalWrite(led,HIGH);

    Serial.println("led on");

  }

  else

  {

    digitalWrite(led,LOW);
    Serial.println("led off");

  }

  if(y=="1")//BULB

  {

    digitalWrite(bulb,LOW);
    Serial.println("bulb on");

  }

  else

  {

    digitalWrite(bulb,HIGH);
    Serial.println("bulb off");

  }

  if(z=="1")//FAN

  {

    digitalWrite(fan,HIGH);
    Serial.println("fan on");

  }

  else

  {

    digitalWrite(fan,LOW);
    Serial.println("fan off");

  }

  delay(500);
}
