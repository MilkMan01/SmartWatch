// Weather App Functions
//28caa6b551a62dc0495dcb46912c27da
//weather icons, and 4 other things on the display at one time

//GET THE CURRENT TEMP
//weatherNow = JSON.stringify(myObject["weather"][0]["main"]);
//    weatherNow.replace("\",0);

boolean weatherSet = false;            // Has Time Been Set?



void initWeather() {
  modeStates[1] = false; // Uninitialize Analog
  modeStates[2] = true;  // Initialize Weather
  clearScreen();
}




void weather() {
  if (!modeStates[2]) {
    initWeather();
  }

  String saveWeather;
  String location;
  int tNow;
  int minT;
  int maxT;



  if (weatherSet == false) {
    String jsonBuffer;
    openWiFi();
    if ( WiFi.status() == WL_CONNECTED) {
      String serverPath = "http://api.openweathermap.org/data/2.5/weather?id=4219762&appid=28caa6b551a62dc0495dcb46912c27da"; //"http://api.openweathermap.org/data/2.5/weather?id=4219762&appid=adf16b87611299e2b0210023fcf0ec2f";
      jsonBuffer = httpGETRequest(serverPath.c_str());
      JSONVar myObject = JSON.parse(jsonBuffer);


      String weatherNow = JSON.stringify(myObject["weather"][0]["icon"]);
      weatherNow.replace("\"", 0);
      Serial.println(weatherNow);
      String tempNow = JSON.stringify(myObject["main"]["temp"]);
      String minTemp = JSON.stringify(myObject["main"]["temp_min"]);
      String maxTemp = JSON.stringify(myObject["main"]["temp_max"]);
      String locationNow = JSON.stringify(myObject["name"]);
      Serial.println(locationNow);

      saveWeather = weatherNow;
      location = locationNow;

      tNow = ktof(tempNow);
      Serial.println(tNow);
      minT = ktof(minTemp);
      Serial.println(minT);
      maxT = ktof(maxTemp);
      Serial.println(maxT);
    }
    closeWiFi();
    weatherSet = true;
    if (saveWeather.equals("01d")) {
      TJpgDec.drawJpg(5, 0, clearSun, sizeof(clearSun)); //clear day
      tft.drawCentreString("Clear Day", 120, 150, 2);

    }
    if (saveWeather.equals("01n")) {
      TJpgDec.drawJpg(5, 0, clearMoon, sizeof(clearMoon)); //clear night
      tft.drawCentreString("Clear Night", 120, 120, 2);

    }
    if (saveWeather.equals("02d")) {
      TJpgDec.drawJpg(5, 0, fewCloudsDay, sizeof(fewCloudsDay)); //few clouds day
      tft.drawCentreString("Few clouds Day", 120, 120, 2);
    }
    if (saveWeather.equals("02n")) {
      TJpgDec.drawJpg(5, 0, fewCloudsNight, sizeof(fewCloudsNight)); //few clouds night
      tft.drawCentreString("few clouds night", 120, 120, 2);
    }
    if (saveWeather.equals("03d") || saveWeather.equals("03n")) {
      TJpgDec.drawJpg(5, 0, scatteredClouds, sizeof(scatteredClouds)); //scattered clouds
      tft.drawCentreString("scattered clouds", 120, 120, 6);
    }
    if (saveWeather.equals("04d") || saveWeather.equals("04n")) {
      TJpgDec.drawJpg(5, 0, brokenClouds, sizeof(brokenClouds)); //broken clouds
      tft.drawCentreString("broken clouds", 120, 120, 2);
    }
    if (saveWeather.equals("09d") || saveWeather.equals("09n")) {
      TJpgDec.drawJpg(5, 0, showerRain, sizeof(showerRain)); //shower rain
      tft.drawCentreString("shower rain", 120, 120, 2);
    }
    if (saveWeather.equals("10d") || saveWeather.equals("10n")) {
      TJpgDec.drawJpg(5, 0, rain, sizeof(rain)); //rain
      tft.drawCentreString("rain", 120, 120, 2);
    }
    if (saveWeather.equals("11d") || saveWeather.equals("11n")) {
      TJpgDec.drawJpg(5, 0, thunderstorm, sizeof(thunderstorm)); //thunderstorm
      tft.drawCentreString("thunderstorm", 120, 120, 2);
    }
    if (saveWeather.equals("13d") || saveWeather.equals("13n")) {
      TJpgDec.drawJpg(5, 0, snow, sizeof(snow)); //snow
      tft.drawCentreString("snow", 120, 120, 2);
    }
    if (saveWeather.equals("50d") || saveWeather.equals("50n")) {
      TJpgDec.drawJpg(5, 0, mist, sizeof(mist)); //mist
      tft.drawCentreString("mist", 120, 120, 2);
    }
    tft.setTextColor(TFT_WHITE);
    tft.drawCentreString(String(tNow), 120, 170, 4);
    tft.drawCentreString(String(minT), 60, 170, 2);
    tft.drawCentreString(String(maxT), 180, 170, 2);
    tft.drawCentreString(location, 120, 25, 4);
  }

}








// Converts Kelvin (as String) to Farenheit (as float)
int ktof(String k) {
  float degreesK = k.toFloat();
  float degreesF = ((degreesK - 273.15) * 1.8) + 32;
  int intF = degreesF;
  return intF;
}
