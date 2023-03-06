/*  
Creative Embedded Systems 3930
Susannah Abrams sma2243
randomly display verbs that demand motion or feeling
 */


#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

void setup(void) {
  tft.init();
  tft.setRotation(1);
}

void loop() {
  
  // Fill screen with grey so we can see the effect of printing with and without 
  // a background colour defined
  tft.fillScreen(TFT_BLACK);
  
  // Set "cursor" at top left corner of display (2,2) and select font 2
  // (cursor will move to next line automatically during printing with 'tft.println'
  //  or stay on the line is there is room for the text with tft.print)
  tft.setCursor(6, 4, 2);
  tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(2);
  int j;

  //for documentation video
  char *ces[3] = {"CREATIVE", "EMBEDDED", "SYSTEMS"};
  tft.setCursor(100,40);
  tft.fillScreen(TFT_PINK);
  tft.setTextColor(TFT_WHITE,TFT_PINK);
  tft.println(ces[0]);
  delay(1000);
  tft.setCursor(70,50);
  tft.fillScreen(TFT_YELLOW);
  tft.setTextColor(TFT_WHITE,TFT_YELLOW);
  tft.println(ces[1]);
  delay(1000);
  tft.setCursor(40,60);
  tft.fillScreen(TFT_GREEN);
  tft.setTextColor(TFT_WHITE,TFT_GREEN);
  tft.println(ces[2]);
  delay(1000);


  // Set the font colour to be white with a black background, set text size multiplier to 3
  tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(3);
  tft.fillScreen(TFT_BLACK);
  delay(1000);

  tft.setCursor(70, 10);
  tft.println("go ");

  char *verbs[10] = {"go", "run", "jump", "fly", "dance","cry","cheer","draw","need","feel"};
  while (1){
    j = (int)(rand()%10);
    delay(500);
    tft.fillScreen(TFT_BLACK);
    if (j == 0){
      tft.setCursor(70, 10);
    }
    else
      tft.setCursor(100, 10);
    tft.println(verbs[j]);
  }



  while(1) yield(); // We must yield() to stop a watchdog timeout.
}
