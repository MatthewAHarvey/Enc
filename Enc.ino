#include "Enc.h"

Enc enc(2, 3);

void setup(){
    Serial.begin(250000);
    Serial.println("Connected to Enc.ino");
    enc.init();
    // enc.setReversedDirection(true);
}

void loop(){
    switch(enc.poll()){
        case encEnum::ACW:  Serial.println("ACW");  break;
        case encEnum::CW:   Serial.println("CW");   break;
    }
}