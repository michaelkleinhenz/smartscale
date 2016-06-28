/* 
 *  WIFI controller code.
 *  
 *  Usage:
 *  Call setupWifi() in setup() of main INO.
 */

#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>

void saveConfigCallback() {
  localIp = String(WiFi.localIP()[0])+"."+String(WiFi.localIP()[1])+"."+String(WiFi.localIP()[2])+"."+String(WiFi.localIP()[3]);
  Serial.println("WiFi connected. IP: " + localIp);
  displayNetworkInfo(localIp);
  ledIndicateConnectToNetworkSuccessful();
}

void configModeCallback (WiFiManager *myWiFiManager) {
  displayNetworkConfigMode(myWiFiManager->getConfigPortalSSID());
  Serial.println("Entered config mode");
  Serial.println(WiFi.softAPIP());
  // print the ssid that we should connect to to configure the ESP8266
  Serial.print("Created config portal AP ");
  Serial.println(myWiFiManager->getConfigPortalSSID());
}

void setupWifi() {
  WiFiManager wifiManager;
  Serial.print("Setting up WiFi..");
  wifiManager.setAPCallback(configModeCallback);
  wifiManager.setSaveConfigCallback(saveConfigCallback);  
  if(!wifiManager.autoConnect("scale1")) {
    clearOLED();
    Serial.println("failed to connect and hit timeout");
    //reset and try again, or maybe put it to deep sleep
    ESP.reset();
    delay(1000);
  } 
}


