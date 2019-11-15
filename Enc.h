#ifndef Enc_h
#define Enc_h

enum class encEnum : uint8_t{
    NO_CHANGE = 0,
    CW, 
    ACW
};

class Enc{
public:
    Enc();
    Enc(uint8_t pinA, uint8_t pinB);

    void init();
    void init(uint8_t pinA, uint8_t pinB);
    encEnum poll();

private:
    uint8_t pinA;
    uint8_t pinB;
    bool reversed = false;

    // button and encoder pin states
    uint8_t AB = 0xF;       // B1111 because the rotary encoder will be in neutral state and the pullups will make the readings high.
    int8_t stepCounter = 0;
};

#endif