#include <Adafruit_DotStarMatrix.h>
#include <gamma.h>
#include <Adafruit_DotStar.h>
#include <Adafruit_BusIO_Register.h>
#include <Adafruit_I2CDevice.h>
#include <Adafruit_I2CRegister.h>
#include <Adafruit_SPIDevice.h>



// www.Pishnam.com
//Mohammad rafiei   10 shahrivar 1403

//*****************************************************

//////////////////  CS   D/C   RST   DIN   CLK    VCC   GND
//Arduino Mega2560  9    10    8     51    52     5V    GND
//Arduino Uno       9    10    8     11    13     5V    GND

//*****************************************************

//#include <Adafruit_GFX.h>     // Core graphics library
#include <Adafruit_ST7735.h>  // Hardware-specific library
#include "E:/Pishnam/Extension/Libs/Adafruit_GFX_Library/Adafruit_GFX.h"

//****************************************************

#define TFT_RST    8  // you can also connect this to the Arduino reset in which case, set this #define pin to -1! 
#define TFT_CS     9
#define TFT_DC     10

//FASTTTTTTTTTTTTTTTTTTTTT

// Option 1 (recommended): must use the hardware SPI pins
// (for UNO thats sclk = 13 and sid = 11) and pin 10 must be
// an output. This is much faster - also required if you want
// to use the microSD card (see the image drawing example)
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);


//SLOWWWWWWWWWWWWWWWWWWWWWWWWW

// Option 2: use any pins but a little slower!
//#define TFT_SCLK 13   // set these to be whatever pins you like!
//#define TFT_MOSI 11   // set these to be whatever pins you like!
//Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

//****************************************************
//char Color [5]={ST7735_BLUE,ST7735_GREEN,ST7735_ORANGE,ST7735_YELLOW};

void setup(void)
{
  tft.initR(INITR_BLACKTAB);   // initialize a ST7735S chip, black tab
  tft.setRotation(0);

  tft.fillScreen(ST7735_BLACK);

  tft.setTextWrap(0);

  //////////////////////////////////////////////

  // tft.setCursor(15, 10);
  // tft.setTextColor(ST7735_RED, ST7735_GREEN);
  // tft.setTextSize(2);
  // tft.println("Pishnam");

  // tft.fillRoundRect(25, 30, 20, 20, 3, ST7735_WHITE);
  // tft.drawRect(55, 30, 20, 20, ST7735_WHITE);
  // tft.fillRect(85, 30, 20, 20, ST7735_GREEN);
  tft.drawRoundRect(0, 0, 50, 60, 4, ST7735_WHITE);

  tft.drawFastHLine(10, 70, 30, ST7735_WHITE);
  tft.drawFastVLine(10, 80, 30, ST7735_RED);

  tft.fillCircle(80, 100, 15, ST7735_BLUE);
  tft.drawCircle(40, 100, 15, ST7735_ORANGE);

  tft.drawLine(30, 130, 100, 150, ST7735_WHITE);

   tft.fillTriangle(50, 50, 50, 70, 70, 60, ST77XX_RED);
   tft.drawTriangle(80, 50, 80, 70, 100, 60, ST77XX_RED);


  int w = tft.width();
  int h = tft.height();

  tft.setCursor(10, 125);
  tft.setTextColor(ST7735_BLACK, ST7735_GREEN);
  tft.setTextSize(2);
  tft.println(w);
  tft.setCursor(10, 140);
  tft.println(h);
  
  

}

//****************************************************

void loop()
{
/* 
for(int j = 0; j < 5; j++){
  for(int i = 0; i < 100; i++){
    tft.fillCircle(64, 80, i, ST7735_MADCTL_BGR);
    delay(100);
  }
}
for(int i = 1; i < 100; i++){
  tft.fillCircle(64, 80, i, ST7735_BLACK);
  delay(100);
}
*/
}
