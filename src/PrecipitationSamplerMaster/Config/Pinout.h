/*
  Ice Nucleation Controller (Field Version) system pinout
  Naming pattern (all uppercase):
  P   + <I:input, T: interrupt input, A:analog input, O:output, P:pwm output>_
    + <general part name>_
    + <purpose>_
    + <where applicable: left, right, top, bottom, position etc...>
  Mads Rosenhøj Jeppesen
  Aarhus University
  2023
*/

#pragma once

#include "../modules/setup/modules.h"

// ------------------------------------------------------------ //
//                 Arduino/Arduino communication                //
// ------------------------------------------------------------ //

#define PI_ARDUINO_COM 2  // Communication from Slave to master

// ------------------------------------------------------------ //
//                    Real time clock module                    //
// ------------------------------------------------------------ //

#define PT_RTC_ALARM   2   // Interrupt signal from RTC module
#define PO_RTC_DATA    18  // I2C communication to and from RTC module
#define PO_RTC_CLK     19  // I2C Clock signal to RTC module

// ------------------------------------------------------------ //
//                          DC-Motors                           //
// ------------------------------------------------------------ //

#define PO_LID_OPEN    5  // Open signal pin
#define PO_LID_CLOSE   6  // Close signal pin

// ------------------------------------------------------------ //
//                       Optical sensors                        //
// ------------------------------------------------------------ //

#define PO_DIST_TRIG   7  // Trigger signal to make meassurement
#define PI_DIST_ECHO   8  // Echo signal to determine distance

// ------------------------------------------------------------ //
//                           SD-Card                            //
// ------------------------------------------------------------ //

#define PO_SD_CS       10  // Chip select pin
#define PO_SD_MOSI     11  // Master out Slave in
#define PI_SD_MISO     12  // MASTER IN SLAVE OUT
#define PO_SD_SCK      13  // Clock

// ------------------------------------------------------------ //
//                     Mechanical switches                      //
// ------------------------------------------------------------ //

#define PI_SWTCH_LID   14  // Limitswitch for "Lid Closed"
