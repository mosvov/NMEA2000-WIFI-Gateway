#ifndef __SRC_EH_DISPLAY_H__
#define __SRC_EH_DISPLAY_H__

#include <Adafruit_GFX.h>     // Core graphics library
#include <Adafruit_ST7735.h>  // Hardware-specific library for ST7735

#include "sensesp_base_app.h"

using namespace sensesp;

bool InitializeST7735(ReactESP* app, SensESPBaseApp* sensesp_app,
                      Adafruit_ST7735** display);

void PrintValue(Adafruit_ST7735* display, int row, String title, float value);
void PrintValue(Adafruit_ST7735* display, int row, String title, String value);

#endif
