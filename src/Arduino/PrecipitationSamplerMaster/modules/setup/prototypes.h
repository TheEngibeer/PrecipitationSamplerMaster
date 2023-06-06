#pragma once

#include "./modules.h"

// System
void (*systemReset)(void) = 0;
void InitAllPins();
void SystemEnableSecondary();
void SystemDisableSecondary();

// DS3231 - RTC
void InitRTC();