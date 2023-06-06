/*
This ATmega controls the following:
  1) Sleep timer (RTC)
  2) Lid open close
  3) SD-card

With this, it becomes the master. It can perform all the nessesary tasks for rain detection, start collecting and write data to the SD-card.

It will first wake up periodicly to make sure the sampling only happens every 2 weeks.
After that the sleep cycles are short, where it will check if rain/snow is falling.
In case it does, it opens the lid to start collecting water/snow for 4 hours.
When the 4 hours is done, it will close the lid, and turn on the rest of the system to start the sampling process.
When this board recieves info, that the sampling is done, it will go to sleep and the cycle repeats.

By:
Mathias B. Madsen
Aarhus University
2023

*/
#include "./modules/setup/modules.h"

void setup() {
  SystemEnablePrimary();
}

void loop() {

  /*
  1) Wake up
    a) Has 2 weeks passed yet?
      i) Yes - goto next question
      ii) No - Goto "sleep - Long"
    b) Is i raining?
      i) Yes - Goto next question
      ii) no - goto "sleep - Short"
    c) Has there been zeroed?
      i) yes - goto initialize
      ii) No - goto Zero
  2) Initialize system
    a) Is there 22 samples?
      i) Yes - Power down
      ii) No - Goto "Run sampling"
  3) Run sampling
  4) Purge
  5) Get to next sampling posistion
  6) Update sample number
    a) Has it reached the end?
      i) Yes - Goto "Power down"
      ii) No - Goto "Sleep - long"

  1) Sleep
  */
}