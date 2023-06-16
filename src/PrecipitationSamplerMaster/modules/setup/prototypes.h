#pragma once

#include "./modules.h"

// System
//void SystemEnablePrimary();
void InitAllPins();

// DS3231 - RTC
void InitRTC();
void Sleep();
void SetNextAlarm();
void SetAlarmLong();
void SetAlarmShort();
void WakeISR();

// SD-Card
void InitSD();
void SeperateDate();

void GetStartDate();
void WriteDate();
void processDate();