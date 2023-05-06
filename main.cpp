#include "mbed.h"

int main()
{
    DigitalIn p13(p13);  
    DigitalIn p16(p16); 
    DigitalOut p23(p23); 
    DigitalOut p25(p25); 

    while (1) {
        if (p13 == 1) {   
            p23 = 1;
            p25 = 0;
        } else if (p16 == 1) {
            p25 = 1;
            p23 = 0;
        } else {  
            p23 = 0;
            p25 = 0;
        }
    }
    return 0;
}
