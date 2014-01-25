
/*useless library that only turns on and off a pin*/

#include <digitalw.c>
#include <delay.c>

void blinkled_32(int pin, int repeat, unsigned int delay_on, unsigned int delay_off)
{
    int i;
    for (i=0; i<repeat; i++){
        digitalwrite(pin, 1);
        Delayms(delay_on);
        digitalwrite(pin, 0);
        Delayms(delay_off);
    }
}
