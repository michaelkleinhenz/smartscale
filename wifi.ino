/* 
 *  WIFI controller code.
 *  
 *  Usage:
 *  Call setupWifi() in setup() of main INO. 
 */

#include <ESP8266WiFi.h>

void setupWifi() {
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

