#include "activity1.h"

void pin_init(){
    DDRB |= (1<<PB0); // Set pin for LED
    DDRD &= ~(1<<PD4); // clear bit
    DDRC &= ~(1<<PC6); // clear bit

    PORTD |= (1<<PD4); // set bit
    PORTC |= (1<<PC6); // set bit
}

void delay_loop(){
    if (!((PIND&(1<<PD4)) || (PINC&(1<<PC6)))){
        PORTB |= (1<<PB0); // switch ON LED
    }
    else{
        PORTB &= ~(1<<PB0); // switch OFF LED
}
}