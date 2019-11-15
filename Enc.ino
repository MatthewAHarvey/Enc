#include "Enc.h"

Enc enc(2, 3);

void setup(){
    Serial.begin(250000);
    enc.init();
}

void loop(){
    switch(enc.poll()){
        case encEnum::ACW:  Serial.println("ACW");  break;
        case encEnum::CW:   Serial.println("CW");   break;
    }
}