#include "Enc.h"

Enc::Enc(){

}

Enc::Enc(uint8_t pinA, uint8_t pinB){
    this->pinA = pinA;
    this->pinB = pinB;
}

void Enc::init(){
    pinMode(pinA, INPUT_PULLUP);
    pinMode(pinB, INPUT_PULLUP);
}

void Enc::init(uint8_t pinA, uint8_t pinB){
    this->pinA = pinA;
    this->pinB = pinB;
    pinMode(pinA, INPUT_PULLUP);
    pinMode(pinB, INPUT_PULLUP);
}

encEnum Enc::poll(){
    
}