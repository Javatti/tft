#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>


#define TFT_RST 8
#define TFT_CS 9
#define TFT_DC 10

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

#define line_1 tft.fillRoundRect(22, 39.5, 15, 52, 5, ST7735_RED)
#define line_2 tft.fillRoundRect(42, 39.5, 15, 52, 5, ST7735_MAGENTA)
#define line_3 tft.fillRoundRect(62, 39.5, 15, 52, 5, ST7735_YELLOW)
#define line_4 tft.fillRoundRect(82, 39.5, 15, 52, 5, ST7735_GREEN)
#define line_5 tft.fillRoundRect(102, 39.5, 15, 52, 5, ST7735_BLUE)

#define line_1_c tft.fillRoundRect(22, 39.5, 15, 52, 5, ST7735_BLACK)
#define line_2_c tft.fillRoundRect(42, 39.5, 15, 52, 5, ST7735_BLACK)
#define line_3_c tft.fillRoundRect(62, 39.5, 15, 52, 5, ST7735_BLACK)
#define line_4_c tft.fillRoundRect(82, 39.5, 15, 52, 5, ST7735_BLACK)
#define line_5_c tft.fillRoundRect(102, 39.5, 15, 52, 5, ST7735_BLACK)

int b;

int a;

char y[50];
char text[50];

void setup() {

  tft.initR(INITR_BLACKTAB);
  tft.setRotation(1);

  tft.fillScreen(ST7735_BLACK);

  tft.setTextWrap(0);

  Serial.begin(9600);
  

  tft.drawRoundRect(20, 35, 105, 60, 5, ST7735_WHITE);
  tft.fillRoundRect(124, 53, 10, 25, 1, ST7735_WHITE);
}

void loop() {

 float x  = (((analogRead(A0) * 5.0) / 1023) * 3) - 0.17;
 
  a = map(x, 0, 12, 1, 5);

  tft.setCursor(35, 15);
  tft.setTextColor(ST7735_GREEN, ST7735_);
  tft.setTextSize(2);
  dtostrf(x,3,2,text);
 // sprintf(y,"%s",text);
  tft.println(text);
  Serial.println(text);
  
  
  

  if (a == 1) {
    line_1;
    line_2_c;
    line_3_c;
    line_4_c;
    line_5_c;
  } else if (a == 2) {
    line_1;
    line_2;
    line_3_c;
    line_4_c;
    line_5_c;
  } else if (a == 3) {
    line_1;
    line_2;
    line_3;
    line_4_c;
    line_5_c;
  } else if (a == 4) {
    line_1;
    line_2;
    line_3;
    line_4;
    line_5_c;
  } else if (a == 5) {
    line_1;
    line_2;
    line_3;
    line_4;
    line_5;
  }

  else {
    line_1_c;
    line_2_c;
    line_3_c;
    line_4_c;
    line_5_c;
  }
}
