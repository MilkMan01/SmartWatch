// Digital Watch Functions

//minute timer
long digitalTimer = 0;
long digitalInterval = 60000; //every minute

//star timer
long starTimer = 0;
long starInterval = 15000; //every 15 seconds
long starInterval2 = 30000;
long starInterval3 = 45000;
//ADD 2 MORE. ONE EVERY 15 SECONDS

//cloud timer
//long cloudTimer = 0;
//long cloudInterval = 3000; //every 30 seconds


int nowSec = 0;
int nowMin = 0;
int nowHr = 0;
int nowDay = 0;
int nowMonth = 0;
int nowYr = 0;


void initDigital() {
  modeStates[0] = false;  // Uninitialize Analog
  modeStates[1] = true;   // Initialize Digital
  clearScreen();          //clearScreen
  TJpgDec.drawJpg(10, 10, blank, sizeof(blank));
}

void digital() {
  if (!modeStates[1]) {
    initDigital();
  }
  if (!timeSet) {
    initTime();
  }

  nowSec = rtc.getSecond();
  nowHr = rtc.getHour();
  nowMin = rtc.getMinute();

  //screenText("Digital Time", 10, 100, 4);


  if (nowSec == 0) {
    TJpgDec.drawJpg(10, 10, blank, sizeof(blank));
  }

  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString(rtc.getDate(), 120, 50, 4);
  tft.drawCentreString(String(nowHr), 100, 100, 6);
  tft.drawCentreString(":", 120, 100, 6);
  tft.drawCentreString(String(nowMin), 150, 100, 6);

  if (millis() - starTimer >= starInterval) {
    TJpgDec.drawJpg(190, 160, star, sizeof(star));
  }
  if (millis() - starTimer >= starInterval2) {
    TJpgDec.drawJpg(195, 140, star, sizeof(star));
  }
  if (millis() - starTimer >= starInterval3) {
    TJpgDec.drawJpg(200, 110, star, sizeof(star));
  }

}
