#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

#define TFT_RST 8
#define TFT_CS 9
#define TFT_DC 10

#define fill_circle_black tft.fillCircle(80, 70, 19, ST7735_BLACK)
#define block_1 tft.fillRoundRect(72.5, 38 ,16 , 10, 1, ST7735_CYAN)
#define block_2 tft.fillRoundRect(72.5, 28 ,16 , 10, 1, ST7735_YELLOW)
#define block_3 tft.fillRoundRect(72.5, 18 ,16 , 10, 1, ST7735_ORANGE)
#define block_4 tft.fillRoundRect(72.5, 8 ,16 , 10, 1, ST7735_RED)

#define block_1_bg tft.fillRoundRect(72.5, 38 ,16 , 10, 1, ST7735_BLACK)
#define block_2_bg tft.fillRoundRect(72.5, 28 ,16 , 10, 1, ST7735_BLACK)
#define block_3_bg tft.fillRoundRect(72.5, 18 ,16 , 10, 1, ST7735_BLACK)
#define block_4_bg tft.fillRoundRect(72.5, 8 ,16 , 10, 1, ST7735_BLACK)

int color=0;


Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  
  tft.initR(INITR_BLACKTAB);
  tft.setRotation(1);
  tft.fillScreen(ST7735_BLACK);
  tft.drawCircle(80, 70, 20, ST7735_MAGENTA);
  tft.drawRoundRect(70, 5 ,20 , 60, 1, ST7735_MAGENTA);
  fill_circle_black;
  
  
  
  
  //

  
}

void loop() {

  for(int i=0;i<=100;i++){
  
  tft.setCursor(70, 65);
  tft.setTextColor(color, ST7735_BLACK);
  tft.setTextSize(1);
  tft.println(i);
  tft.setCursor(90, 65);
  tft.println("C");
  delay(200);
  fill_circle_black;
  int result=map(i,0,50,1,4);
  if(result == 1){
    color = ST7735_BLUE;
    block_1;
    block_2_bg;
    block_3_bg;
    block_4_bg;
  }
  else if(result == 2){
    color = ST7735_YELLOW;
    block_1;
    block_2;
    block_3_bg;
    block_4_bg;
  }
  else if(result == 3){
    color = ST7735_ORANGE;
    block_1;
    block_2;
    block_3;
    block_4_bg;
  }
  else if(result == 4){
    color = ST7735_RED;
    block_1;
    block_2;
    block_3;
    block_4;
  }

  }



}
