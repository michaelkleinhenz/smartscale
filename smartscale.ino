
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
 * Also, you'll need the ESP8266 integration for Arduino IDE
 * installed (see website for how to do that). You may need
 * to customize some libraries (the SSD 1306 library may need
 * a hardcoded setting of the 128x64 resolution of the OLED).
 * Refer to the documentation for details.
 */

#include<stdlib.h>

const char* ssid = "ssid";
const char* password = "password";

void setup() {
  Serial.begin(9600);
  //setupWifi();
  Serial.println("Booting..");  
  setupOLED();
  Serial.println("OLED initialized..");
  setupLEDRing();
  Serial.println("Smart Kitchen Scale ready.");
  ledStandby();
  Serial.println("Entering standby..");
}

static char outstr[15];

void loop() {
  float sensorValue = readScale();
  //Serial.println(sensorValue);
  dtostrf(sensorValue, 7, 2, outstr);
  displayText(outstr);
  delay(1000);
  clearOLED();
}
