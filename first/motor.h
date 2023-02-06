#include <Servo.h>


class Motor{
    const uint8_t m_pin;
    Servo servo;
public:
    Motor(uint8_t pin) : m_pin{pin}{}

    void init(){
        servo.attach(m_pin, 500, 2500);
    }

    void go(int power){
        servo.writeMicroseconds(1500 + 2 * power);
    }
};
