#include <ESP8266WiFi.h>

#include <FirebaseArduino.h>

 

// Set these to run example.

#define FIREBASE_HOST "sample-fadbc.firebaseio.com"

#define FIREBASE_AUTH "2LfldNl0viP4cfEqG99EmJmyaie4429D3c3ZoAF5"

#define WIFI_SSID "Honor 10"

#define WIFI_PASSWORD "Shubhans10@"

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

  Firebase.setFloat("a", 0);

  // handle error

  if (Firebase.failed()) {

      Serial.print("setting /number failed1:");

      Serial.println(Firebase.error()); 

      return;

  }

  delay(1000);

 

  Firebase.setFloat("b", 0);

  // handle error

  if (Firebase.failed()) {

      Serial.print("setting /number failed2:");

      Serial.println(Firebase.error()); 

      return;

  }

  delay(1000);

 

  // set value

  Firebase.setFloat("c", 0);

  // handle error

  if (Firebase.failed()) {

      Serial.print("setting /number failed3:");

      Serial.println(Firebase.error()); 

      return;

  }

  }

  delay(1000);

 

  flag=1;

  int x=Firebase.getFloat("a");

  int y=Firebase.getFloat("b");

  int z=Firebase.getFloat("c");

 

   Serial.println(x);

  Serial.println(y);

  Serial.println(z);

 

 

  if(x==1)//LED

 

  {

 

    digitalWrite(led,HIGH);

 

    Serial.println("led on");

 

  }

 

  else

 

  {

 

    digitalWrite(led,LOW);

    Serial.println("off");

 

  }

 

  if(y==1)//BULB

 

  {

 

    digitalWrite(bulb,HIGH);

 

  }

 

  else

 

  {

 

    digitalWrite(bulb,LOW);

 

  }

 

  if(z==1)

 

  {

 

    digitalWrite(fan,HIGH);

 

  }

 

  else

 

  {

 

    digitalWrite(fan,LOW);

 

  }

 

  delay(500);

 

 

  // remove value

// Firebase.remove("number");

// delay(1000);

 

  // set string value

 

  // append a new value to /logs

}
