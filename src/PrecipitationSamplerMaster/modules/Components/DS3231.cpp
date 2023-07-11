#pragma once

#include "../setup/modules.h"

DS3231 myRTC;

String DateTime = "00:21 5 17-06-2023";  // Test reading of the file

// Variables for time
byte year;
byte month;
byte day;
byte dOW;
byte hour;
byte minute;
byte second;

void InitDS3231() {
  // Start the serial port
  Serial.begin(57600);

  // Start the I2C interface
  Wire.begin();
}

void SetStartTime() {
  boolean gotString = false;
  char inChar;
  byte temp1, temp2;
  char inString[20];

  // Read the time from SD-card */DateTime.txt (00:14 17-06-2023) (HH:MM DD-MM-YYY)
  // Samples will be written to */Samples.txt (1 00:14 17-06-2023)  (Sample no.  HH:MM DD-MM-YYY)

  // Setting seconds to 00
  // Read year first
  temp1 = (byte)inString[0] - 48;
  temp2 = (byte)inString[1] - 48;
  hour  = temp1 * 10 + temp2;
  // now month
  temp1  = (byte)inString[3] - 48;
  temp2  = (byte)inString[4] - 48;
  minute = temp1 * 10 + temp2;
  // Read seconds (dont care about this one)
  second = 0;
  // now Day of Week
  dOW = (byte)inString[6] - 48;
  // now date
  temp1 = (byte)inString[8] - 48;
  temp2 = (byte)inString[9] - 48;
  day   = temp1 * 10 + temp2;
  // now hour
  temp1 = (byte)inString[11] - 48;
  temp2 = (byte)inString[12] - 48;
  month = temp1 * 10 + temp2;
  // now minute
  temp1 = (byte)inString[14] - 48;
  temp2 = (byte)inString[15] - 48;
  year  = temp1 * 10 + temp2;

  // TIME TO SET THE TIME AND DATE!

  // Set the time to 24h style
  myRTC.setClockMode(false);

  // Load time to RTC
  myRTC.setYear(year);
  myRTC.setMonth(month);
  myRTC.setDate(day);
  myRTC.setDoW(dOW);
  myRTC.setHour(hour);
  myRTC.setMinute(minute);
  myRTC.setSecond(second);
}

void SetAlarm() {
}