#include "Enc.h"

Enc enc(2, 3);
int16_t totalSteps = 0;

void setup(){
    Serial.begin(250000);
    Serial.println("Connected to Enc.ino");
    enc.init();
    // enc.setReversedDirection(true); // swaps the direction
}

void loop(){
    step = enc.poll();
    if(step != 0){
        totalSteps += step;
        Serial.println(totalSteps);
    }
}