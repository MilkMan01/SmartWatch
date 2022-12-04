// Functions for Buttons
#include <Bounce2.h>                  // Include Debounce Library

int buttonPins[] = {25, 26, 27};      // Set Button Pins
int numButtons = 3;                   // Declare Number of Buttons
Bounce * buttons = new Bounce[3];     // Declare Button Object Array

// Initialize All Buttons
void initButtons() {
  for (int i = 0; i < numButtons; i++) {
    buttons[i].attach( buttonPins[i], INPUT);
    buttons[i].interval(25);
  }
}

// Read All Buttons
void readButtons() {
  // Write a few lines of code that checks if buttons[0] has been pushed. If it has, call the sleepToggle() function
  for (int i = 0; i < numButtons; i++) {
    buttons[i].update();
    if (buttons[i].rose()) {
      if (i == 0) {
        sleepToggle();
      } else if (i == 1) {
        curMode += 1;
        curMode = curMode % 3;
      }
    }
  }
  // Write a few lines of code tthat checks if buttons[1] has been pushed. If it has, increase the value of curMode.
  // Use the mod function (%) to make curMode go back to 0 if that last mode has been reached

}
