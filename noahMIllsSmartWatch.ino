// SmartWatch -- Hello World
// Noah Mills
// 7 NOV 2022

// Global Functions
#include <SPI.h>            // SPI Library for Communicating with Screen
#include <TFT_eSPI.h>       // Screen Library (MUST USE MODIFIED User_Setup.h file)
#include <TJpg_Decoder.h>   // Include JPEG Decoder
#include "wifi.h"           //include all wifi functions
#include "time.h"           //include all time functions
#include "blank.h"          //include the night background image for digital lol
#include "star.h"           //include the star for the 30 sec timer
#include "analog.h"         //includes the analog watch face
#include "weatherIcons.h"   //includes the weather icons
#include "game.h"           //includes the game stuff

TFT_eSPI tft = TFT_eSPI();// Screen
uint16_t* tft_buffer;     // Buffer to Save Portions of Screen
boolean isBuffer = false; // Is Buffer Saved?

// State Machine
int curMode = 3;  // Current Mode for State Machine (0 - Analog Time, 1 - Digital Time, 2 - Weather, 3 - Game)
int numModes = 4; // Number of Modes
boolean modeStates[] = {false, false, false, false};  // Mode Initialization States

void setup() {
  Serial.begin(115200);   // Begin Serial Connection
  initButtons();          // Initialize Buttons
  initScreen();
}

void loop() {
  readButtons();  // Read Button States
  if(sleepAwake()){
    switch(curMode){
      case 0: analog(); break;
      case 1: digital(); break;
      case 2: weather(); break;
      case 3: game(); break;
    }
  }
  else{
    sleepSleep();
  }
}
