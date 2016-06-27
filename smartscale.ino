
/*
 * Smart Kitchen Scale
 * 
 * A smart hardware project using ESP8266 and a lot of effort.
 * 
 * Portions based on code written by Limor Fried/Ladyada
 * for Adafruit Industries.
 * 
 * Released under the MIT license.
 * 
 * This code needs the following libraries installed in your
 * Arduino IDE setup to work:
 *    Adafruit GFX Library        
 *    Adafruit Neopixel
 *    Adafruit SSD 1306
 *    WifiManager
 * Also, you'll need the ESP8266 integration for Arduino IDE
 * installed (see website for how to do that). You may need
 * to customize some libraries (the SSD 1306 library may need
 * a hardcoded setting of the 128x64 resolution of the OLED).
 * Refer to the documentation for details.
 */

#include<stdlib.h>
#include <WiFiManager.h>

void setup() {
  Serial.begin(115200);
  Serial.println("");  
  Serial.println("");  
  
  Serial.println("Booting..");  
  setupOLED();
  Serial.println("OLED initialized..");
  setupLEDRing();
  Serial.println("Neopixels initialized..");  
  ledIndicateConnectToNetwork();
  setupWifi();
  Serial.println("Wifi initialized..");
  setupScale();
  Serial.println("Scale initialized..");  
  setupService();
  Serial.println("Web Server initialized..");
  Serial.println("Smart Kitchen Scale ready.");
  ledStandby();
  Serial.println("Entering standby..");
}

static char outstr[15];

void loop() {
  loopService();
  dtostrf(getScaleValue(), 7, 2, outstr);
  displayText(outstr);
  safeDelay(1000);
  clearOLED();
  // You have to put a yield() in your main loop to 
  // allow the underlying operating system to work.
  ESP.wdtFeed();
  yield();
}

void safeDelay(int ms) {
    int i;
    for(i=1;i!=ms;i++) {
          delay(1);
          if(i%100 == 0) {
                  ESP.wdtFeed(); 
                  yield();
          }
    }
}

