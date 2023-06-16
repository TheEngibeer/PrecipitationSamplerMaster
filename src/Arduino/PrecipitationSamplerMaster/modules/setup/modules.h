#pragma once

// Internal Libraries
#include <Arduino.h>
// #include <SD.h>
#include <Wire.h>
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

// Components
#include "../Components/DS3231.cpp"
// #include "../Components/HCSR04.cpp"
// #include "../Components/Lid.cpp"
// #include "../Components/SD-Card.cpp"
#include "../Components/SleepControl.cpp"

// External Libraries
#include <AccelStepper.h>
#include <HCSR04.h>
#include <uRTCLib.h>
