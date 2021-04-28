#include <avr/io.h>
#include <util/delay.h>

#include "activity1.h"
#include "activity2.h"

int main(){
    uint16_t data;
    pin_init();

    InitAdc();
    while(1){
        activity1_loop();
        data = ReadAdc(0);
    }
}