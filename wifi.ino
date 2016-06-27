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
  clearOLED();
  displayText("WiFi connected. IP: " + WiFi.localIP());
  Serial.println("WiFi connected. IP: " + WiFi.localIP());
  ledIndicateConnectToNetworkSuccessful();
}

void configModeCallback (WiFiManager *myWiFiManager) {
  clearOLED();
  displayText("Entered config mode. Connect to: " + myWiFiManager->getConfigPortalSSID());
  Serial.println("Entered config mode");
  Serial.println(WiFi.softAPIP());
  // print the ssid that we should connect to to configure the ESP8266
  Serial.print("Created config portal AP ");
  Serial.println(myWiFiManager->getConfigPortalSSID());
}

void setupWifi() {
  WiFiManager wifiManager;
  displayText("Setting up WiFi..");
  Serial.print("Setting up WiFi..");
  wifiManager.setAPCallback(configModeCallback);
  wifiManager.setSaveConfigCallback(saveConfigCallback);  
  if(!wifiManager.autoConnect("smartscale")) {
    clearOLED();
    displayText("Connection Failed. Please reset.");
    Serial.println("failed to connect and hit timeout");
    //reset and try again, or maybe put it to deep sleep
    ESP.reset();
    delay(1000);
  } 
}


