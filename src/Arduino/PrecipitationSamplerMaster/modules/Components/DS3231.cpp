#pragma once

#include "../setup/modules.h"

void InitRTC() {
    Serial.begin(9600);

    Wire.begin();

    
}