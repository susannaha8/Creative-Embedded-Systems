# Creative-Embedded-Systems: Generative Art

For our module 1 installation, we used an ESP32 TTGO display to share poems, words, or images that used generation. To do this, we installed software, flashed code to our devices, and discussed different power sources. To learn more about the creative process behind this installation, visit my documentation: https://susannaha8.github.io/projects.html 


## Installing the Software 

For Mac users, install Arduino IDE version 1.8.19 (this is a Legacy version, not the most recent one). You also may need to install the driver listed on this forum (https://github.com/Xinyuan-LilyGO/LilyGo-T-Call-SIM800/issues/139#issuecomment-904390716) if you are getting errors when trying to upload code to your device.  


## Setting Up the Environment

Once in the Arduino software, add the ESP32 board by clicking on "Arduino", then "Preferences". You should see a section called "Additional Boards Manager URLs". Add the following URL: https://dl.espressif.com/dl/package_esp32_index.json

Add the correct library by clicking on "Tools", then "Library Manager". Search for TFT_eSPI and install. You should now see all library folders in the /Arduino folder on your computer. To find where your /Adruino folder is, check "Preferences" for the sketchbook location. 

To finish setup, go to /Arduino/libraries/TFT_eSPI/User_Setup_Select.h. Comment out `#include <User_Setup.h>`, and uncomment `#include <User_Setups/Setup25_TTGO_T_Display.h>` since the TTGO display we are using does have preloaded support.  


## Flashing Code to the Device

Explore the example code to familiarize yourself with the syntax. Be sure to select examples from the TFT_eSPI custom library with display size 160 x 128. Each example has code that runs in a loop, and you can time certain displays by setting delay(). In my code, I used `fillScreen()`, `setCursor()`, `setTextColor()`, and `println()`. For this assignment, to create generative art that has some degree of randomness, I used the `rand()` function. Once your code is ready, plug your ESP32 into your computer, go to "Tools" and select the correct "Port", and upload your code to your device!


## Powering the Installation

Originally, we planned to power our ESP32s with lithium ion batteries. We were provided JST connectors, and we were able to solder the connectors to the power and groud cables of the battery. 
<img src="/battery.png" alt="soldered battery"/>

Due to some safety concerns with the batteries, we ended up scrapping the batteries in favor of a board that housed all the students' ESP32s and powered them with a single battery. During the installation, we adjusted the placement of the wires to ensure the base of the structure itself wasn't conducting the current. 
<img src="/setup.HEIC"/>

Here was the final result! 

<img src="/installation.png"/>



