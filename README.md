# Creative-Embedded-Systems: Module 1

For our module 1 installation, we used an ESP32 TTGO display to share poems, words, or images that used generation. To do this, we installed software, flashed code to our devices, and discussed different power sources. To learn more about the creative process behind this installation, visit my documentation: https://susannaha8.github.io/projects.html 


## Installing the Software 

For Mac users, install Arduino IDE version 1.8.19 (this is a Legacy version, not the most recent one). You also may need to install the driver listed on this forum (https://github.com/Xinyuan-LilyGO/LilyGo-T-Call-SIM800/issues/139#issuecomment-904390716) if you are getting errors when trying to upload code to your device.  


## Setting Up the Environment

Once in the Arduino software, add the ESP32 board by clicking on "Arduino", then "Preferences". You should see a section called "Additional Boards Manager URLs". Add the following URL: https://dl.espressif.com/dl/package_esp32_index.json

Add the correct library by clicking on "Tools", then "Library Manager". Search for TFT_eSPI and install. You should now see all library folders in the /Arduino folder on your computer. To find where your /Adruino folder is, check "Preferences" for the sketchbook location. 

To finish setup, go to /Arduino/libraries/TFT_eSPI/User_Setup_Select.h. Comment out `#include <User_Setup.h>`, and uncomment `#include <User_Setups/Setup25_TTGO_T_Display.h>` since the TTGO display does have preloaded support.  
