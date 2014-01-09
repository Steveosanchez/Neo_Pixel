#include <Adafruit_NeoPixel.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#ifndef PSTR
 #define PSTR // Make Arduino Due happy
#endif
#define PIN 6

Adafruit_NeoPixel strip = Adafruit_NeoMatrix(5, 8, 6,NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE, NEO_GRB + NEO_KHZ800);

uint32_t topRowColor = strip.Color(204, 0, 0);
uint32_t secondRowColor = strip.Color(0, 0, 255);
uint32_t thirdRowColor = strip.Color(0, 255, 0);
uint32_t fourthRowColor = strip.Color(255, 0, 255);
uint32_t fifthRowColor = strip.Color(255, 128, 0);
uint32_t zeroColor = strip.Color(0,0,0);
    
uint8_t wait = 50;

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  
}

uint32_t checkDigit = 0;


void loop() {
  // Some example procedures showing how to display to the pixels:
  strip.show();
  if(checkDigit > 0)
  {
      strip.setPixelColor((checkDigit - 1), zeroColor);
  }
  
      if(checkDigit > 39)
    {
        checkDigit = 0;
    }
    if(checkDigit < 8)
    {
        strip.setPixelColor(checkDigit, topRowColor);
    }else if(checkDigit > 7 && checkDigit < 16){
        strip.setPixelColor(checkDigit, secondRowColor);
    }else if(checkDigit > 15 && checkDigit < 24){
        strip.setPixelColor(checkDigit, thirdRowColor);
    }else if(checkDigit > 23 && checkDigit < 32){
        strip.setPixelColor(checkDigit, fourthRowColor);
    }else if(checkDigit > 31 && 41){
        strip.setPixelColor(checkDigit, fifthRowColor);
    }
    checkDigit ++;

  delay(wait);
  
}
