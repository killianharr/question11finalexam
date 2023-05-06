#include "mbed.h"

int main()
{
    DigitalIn p13(p13);  // Initialize digital input on pin 13
    DigitalIn p16(p16);  // Initialize digital input on pin 16
    DigitalOut p23(p23); // Initialize digital output on pin 23
    DigitalOut p25(p25); // Initialize digital output on pin 25

    while(1) {
        if(p13 == 1) {
            p23 = 1;
            p25 = 0;
        }
        else if(p16 == 1) {
            p25 = 1;
            p23 = 0;
        }
        else {
            p23 = 0;
            p25 = 0;
        }
    }
    return 0;
}