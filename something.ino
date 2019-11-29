#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
const char* wifi_name="name of your wifi";
const char* wifi_password="wifi password";
void setup() 
{
 Serial.print(115200);
  WiFi.begin(wifi_name, wifi_password);
  Serial.print("connectting to wifi");
    if( WiFi.status()==WL_CONNECTED)
    {
      Serial.print("connected");
      Serial.print(WiFi.localIP() );
    }
    else
    {
      Serial.print("not connected"); 
    }
}
void loop()
{}
