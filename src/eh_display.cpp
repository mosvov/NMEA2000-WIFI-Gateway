#include "eh_display.h"

// 8 for font size 1
// 18 for font size 2
int rowHeight = 18;
using namespace sensesp;

bool InitializeST7735(ReactESP* app, SensESPBaseApp* sensesp_app,
                      Adafruit_ST7735** display) {
  *display = new Adafruit_ST7735(10, 8, 9);

  delay(100);

  (*display)->initR(INITR_BLACKTAB);  // Init ST7735S chip, black tab
  (*display)->setFont();
  (*display)->fillScreen(ST7735_BLACK);
  (*display)->setTextColor(ST7735_WHITE,
                           ST7735_BLACK);  // white on black background
  (*display)->setRotation(1);
  (*display)->setTextSize(2);
  (*display)->setCursor(0, 0);
  (*display)->printf("Host: %s\n", sensesp_app->get_hostname().c_str());

  return true;
}

void PrintValue(Adafruit_ST7735* display, int row, String title, float value) {
  display->setCursor(0, rowHeight * row);
  display->printf("%s: %.1f", title.c_str(), value);
}

void PrintValue(Adafruit_ST7735* display, int row, String title, String value) {
  display->setCursor(0, rowHeight * row);
  display->printf("%s: %s", title.c_str(), value.c_str());
}
