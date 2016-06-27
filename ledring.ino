
/* 
 *  LED ring controller code.
 *  
 *  Usage:
 *  Call setupLEDRing() in setup() of main INO. Then call the methods to show
 *  different situations of the scale:
 *  
 *    ledStandby()
 *    ledIndicateStart()
 *    ledShowProgress(uint8_t percent)
 *    ledIndicateFinished()
 * 
 *  All functions are nonblocking but may have a delay playing a short
 *  animation before exiting.
 */

#include <Adafruit_NeoPixel.h>

// we're using an Adafruit Neopixel Ring with 16 LEDs connected to pin 13
Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, 13, NEO_GRB + NEO_KHZ800);

void setupLEDRing() {
  strip.begin();
  // Initialize all pixels to 'off'
  strip.show(); 
}

// set to standby lighting (rainbow)
void ledStandby() {
  uint16_t step = 255 / strip.numPixels();
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i*step) & 255));
  }
  strip.show();
}

// indicate start of a process, wipe with green, stay on green
void ledIndicateStart() {
  colorWipe(strip.Color(0, 255, 0), 50);  
}

// indicate connection to network
void ledIndicateConnectToNetwork() {
  colorWipe(strip.Color(0, 255, 255), 50);  
}

// indicate connection to network successful
void ledIndicateConnectToNetworkSuccessful() {
  colorWipe(strip.Color(0, 255, 0), 50);  
}

// sets the LEDs to a color between green (0) and red (100)
void ledShowProgress(uint8_t percent) {
  uint16_t color = (255 / 100) * percent;
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((color) & 255));
  }
  strip.show();  
}

// indicates the end of a process (red flashing) 
void ledIndicateFinished() {
  theaterChase(strip.Color(127, 0, 0), 50);
}

// system functions follow

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    safeDelay(wait);
  }
}

// displays a rainbow of fading colors
void rainbow(uint8_t wait) {
  uint16_t i, j;
  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    safeDelay(wait);
  }
}

// slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;
  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    safeDelay(wait);
  }
}

// theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();
      safeDelay(wait);
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

// theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
      }
      strip.show();
      safeDelay(wait);
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

// calculate combined color value from wheel position
// input a value 0 to 255 to get a color value.
// the colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
