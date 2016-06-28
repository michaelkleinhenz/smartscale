
/* 
 *  OLED controller code.
 *  
 *  Usage:
 *  Call setupOLED() in setup() of main INO. Then call the methods to show
 *  different situations of the scale:
 *  
 *    clearOLED()
 *    displayText(String text)
 * 
 *  All functions are nonblocking but may have a delay playing an
 *  animation before exiting.
 */

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 12
Adafruit_SSD1306 display(OLED_RESET);

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setupOLED()   {                
  display.begin(SSD1306_SWITCHCAPVCC, 0x3D);  // initialize with the I2C addr 0x3D (for the 128x64)
  // Show image buffer on the display hardware.
  // Since the buffer is intialized with an Adafruit splashscreen
  // internally, this will display the splashscreen.
  display.clearDisplay();
  display.drawBitmap(0, 0, splashBitmap, 128, 64, 1);
  display.display();
  safeDelay(2000);
  // Clear the buffer.
  display.clearDisplay();
}

void clearOLED() {
  display.clearDisplay();  
}

void clearUserArea() {
  display.fillRect(0, 0, 128, 48, 0);
}

void clearSystemArea() {
  display.fillRect(0, 48, 128, 16, 0);
}

void displayNetworkInfo(String ipAdress) {
  clearSystemArea();
  display.drawBitmap(112, 48, wifiIcon, 16, 16, 1);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(20, 53);
  display.println(ipAdress);
  display.display();
}

void displayNetworkConfigMode(String apName) {
  clearUserArea();
  display.drawBitmap(0, 0, setupBackground, 128, 48, 1);  
  clearSystemArea();
  display.drawBitmap(112, 48, wifiIcon, 16, 16, 1);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 53);
  display.println("Connect to: " + apName);
  display.display();
}

void displayWeightFrame() {
  clearUserArea();
  display.drawBitmap(0, 0, scaleBackground, 128, 48, 1);  
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(115, 10);
  display.println("g");
  display.display();
}

void displayWeight(float value) {
  static char outstr[15];
  dtostrf(value, 7, 0, outstr);
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(30, 10);
  display.fillRect(68, 10, 45, 14, 0);
  display.println(outstr);
  display.display();
}

