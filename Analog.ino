// Analog Watch Functions
TFT_eSprite sTime = TFT_eSprite(&tft);
TFT_eSprite mTime = TFT_eSprite(&tft);
TFT_eSprite hTime = TFT_eSprite(&tft);
int lastSec = 0;

void initAnalog() {
  modeStates[3] = false; // Uninitialize Game
  modeStates[0] = true;  // Initialize Analog
  clearScreen();         // Clear the Screen
}

void analog() {
  if (!modeStates[0]) {
    initAnalog(); // Initialize Analog Time
  }
  if (!timeSet) {
    initTime();
  }
  if (lastSec != rtc.getSecond()) {
    TJpgDec.drawJpg(0, 0, analogFace, sizeof(analogFace));
    lastSec = rtc.getSecond();
  }
  drawSecond();
  drawMinute();
  drawHour();
}



void drawSecond() {
  int w = 2;
  int h = 70;
  int nowSec = rtc.getSecond();
  int sAngle = (360 / 60) * nowSec;

  tft.setPivot(120, 120);
  sTime.createSprite(w, h);
  sTime.fillSprite(0xF79E); //you can change color with site on discord
  sTime.setPivot(w / 2, h);
  sTime.pushRotated(sAngle);
}

void drawMinute() {
  int w = 4;
  int h = 70;
  int nowMin = rtc.getMinute();
  int mAngle = (360 / 60) * nowMin;

  tft.setPivot(120, 120);
  mTime.createSprite(w, h);
  mTime.fillSprite(0xF79E); //you can change color with site on discord
  mTime.setPivot(w / 2, h);
  mTime.pushRotated(mAngle);
}

void drawHour() {
  int w = 6;
  int h = 55;
  int nowHr = rtc.getHour();
  int hAngle = (360 / 12) * nowHr;

  tft.setPivot(120, 120);
  hTime.createSprite(w, h);
  hTime.fillSprite(0xF79E); //you can change color with site on discord
  hTime.setPivot(w / 2, h);
  hTime.pushRotated(hAngle);
}
