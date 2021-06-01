#include <M5Stack.h>
#include <stdio.h>

#include "PotMain.h"

// from Free_Fonts.h
#define GFXFF 1
#define FF19 &FreeSans18pt7b
#define FF24 &FreeSansBold24pt7b

TFT_eSprite img = TFT_eSprite(&M5.lcd);

void setup() {
  M5.begin();
  img.setColorDepth(8);
  img.createSprite(M5.Lcd.width(), M5.Lcd.height());
  img.fillSprite(TFT_BLACK);
}

void loop() {
  activate();
}

void input(int* buttonA, int* buttonB, int* buttonC, int* elapsed) {
  M5.update();
  *buttonA = M5.BtnA.read();
  *buttonB = M5.BtnB.read();
  *buttonC = M5.BtnC.read();
  *elapsed = millis();
}

void draw(int heater, int battery, int time, int temperature, int boillamp, int keeplamp, int locklamp, int mode, int buzzer, int water, int supply, int test) {
  char bufheater[7];
  char bufbattery[7];
  char buftime[8];
  char buftemp[9];
  char bufboil[7];
  char bufkeep[7];
  char buflock[7];
  char bufmode[7];
  char bufbuzzer[7];
  char bufwater[7];
  char bufsupply[7];
  char buftest[8];

  snprintf(bufheater, 7, "heat:%01d", heater);
  snprintf(bufbattery, 7, "batt:%01d", battery);
  snprintf(buftime, 8, "time:%02d", time);
  snprintf(buftemp, 9, "temp:%03d", temperature);
  snprintf(bufboil, 7, "boil:%01d", boillamp);
  snprintf(bufkeep, 7, "keep:%01d", keeplamp);
  snprintf(buflock, 7, "lock:%01d", locklamp);
  snprintf(bufmode, 7, "mode:%01d", mode);
  snprintf(bufbuzzer, 7, "buzz:%01d", buzzer);
  snprintf(bufwater, 7, "watr:%01d", water);
  snprintf(bufsupply, 7, "supp:%01d", supply);
  snprintf(buftest, 7, "test:%01d", test);
  
  img.setFreeFont(FF19);
  img.drawString(bufheater,0,0,GFXFF);
  img.drawString(bufbattery,0,30,GFXFF);
  img.drawString(buftime,0,60,GFXFF);
  img.drawString(buftemp,0,90,GFXFF);
  img.drawString(bufboil,0,120,GFXFF);
  img.drawString(bufkeep,0,150,GFXFF);
  img.drawString(buflock,170,0,GFXFF);
  img.drawString(bufmode,170,30,GFXFF);
  img.drawString(bufbuzzer,170,60,GFXFF);
  img.drawString(bufwater,170,90,GFXFF);
  img.drawString(bufsupply,170,120,GFXFF);
  img.drawString(buftest,170,150,GFXFF);
}

void output(int* heater, int* battery, int* time, int* temperature, int* boillamp, int* keeplamp, int* locklamp, int* mode, int* buzzer, int* water, int* supply, int* test) {
  img.fillSprite(TFT_BLACK);
  draw(*heater, *battery, *time, *temperature, *boillamp, *keeplamp, *locklamp, *mode, *buzzer, *water, *supply, *test);
  img.pushSprite(0,0);
  delay(10);
}
