#pragma once

// Internal Libraries
#include <Arduino.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>


// Function prototypes
#include "./prototypes.h"

// Config
#include "../../Config/Constants.h"
#include "../../Config/Pinout.h"

// System Control
#include "../system/control.cpp"
#include "../system/pinconfigs.cpp"
/*
// External Libraries
#include "RTClib.h"
#include <AccelStepper.h>
#include <HCSR04.h>
#include <SD.h>

// Components
#include "../Components/DS3231.cpp"
#include "../Components/HCSR04.cpp"
#include "../Components/Lid.cpp"
#include "../Components/SD-Card.cpp"
#include "../Components/SleepControl.cpp"
*/
