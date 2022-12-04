
long gameTimer = 0;
long gameInterval = 5000; //every 5 seconds
long gameInterval2 = 10000; //every 5 seconds
long gameInterval3 = 15000; //every 5 seconds
long startingTime = millis();

int target = random(0, 200);

void initGame() {
  modeStates[2] = false; // Unitialize Weather
  modeStates[3] = true;  // Initiallize Game
  clearScreen();
  //TJpgDec.drawJpg(0, 0, , sizeof());

}

void game() {
  if (!modeStates[3]) {
    initGame();
  }
  //screenText("Game", 10, 100, 4);
  tft.fillCircle(120, 120, 4, TFT_RED);

  if (millis() - gameTimer >= gameInterval) {
    tft.fillCircle(100, 70, 4, TFT_GREEN);
  }
  if (millis() - gameTimer >= gameInterval2) {
    tft.fillCircle(140, 130, 4, TFT_GREEN);
  }
  if (millis() - gameTimer >= gameInterval3) {
    tft.fillCircle(127, 134, 4, TFT_GREEN);
  }

  gameTimer = millis();
}
