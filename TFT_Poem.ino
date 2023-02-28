/*  
 Test the tft.print() viz embedded tft.write() function

 This sketch used font 2, 4, 7
 
 Make sure all the display driver and pin connections are correct by
 editing the User_Setup.h file in the TFT_eSPI library folder.

 Note that yield() or delay(0) must be called in long duration for/while
 loops to stop the ESP8266 watchdog triggering.

 #########################################################################
 ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
 #########################################################################
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
  // Set the font colour to be white with a black background, set text size multiplier to 3
  tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(3);
  // We can now plot text on screen using the "print" class
  tft.println("go ");
  int j;

  char *verbs[4] = {"run", "jump", "fly", "dance"};
  while (1){
    j = (int)(rand()%4);
    delay(500);
    tft.fillScreen(TFT_BLACK);
    tft.setCursor(100, 10);
    tft.println(verbs[j]);
  }



  while(1) yield(); // We must yield() to stop a watchdog timeout.
}
