
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
  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3D);  // initialize with the I2C addr 0x3D (for the 128x64)
    // Show image buffer on the display hardware.
  // Since the buffer is intialized with an Adafruit splashscreen
  // internally, this will display the splashscreen.
  display.display();
  safeDelay(1000);
  // Clear the buffer.
  display.clearDisplay();
}

void clearOLED() {
  display.clearDisplay();  
}

void displayText(String text) {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println(text);
  display.display();
}

