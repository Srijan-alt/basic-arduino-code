#include <ESP8266WiFi.h>
const char* wifi_name="Your wifi name";
const char* wifi_password="Your wifi password";
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
