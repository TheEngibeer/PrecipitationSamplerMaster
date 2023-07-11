#pragma once

// Internal Libraries
#include <Arduino.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>

// External Libraries
#include <DS3231.h>
#include <HCSR04.h>
#include <SD.h>

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
#include "../Components/HCSR04.cpp"
#include "../Components/Master.cpp"
#include "../Components/Rotiny.cpp"
#include "../Components/SDCard.cpp"
