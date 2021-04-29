#include "activity2.h"
#include "activity1.h"
#include <util/delay.h>

void InitAdc(){
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN) | (7<<ADPS0);
}

uint16_t ReadAdc(uint8_t ch){
    ADMUX &= 0Xf8;
    ch &= 0b00000111;
    ADMUX |= ch;
    ADCSRA |= (1<<ADSC);
    while(!(ADCSRA&(1<<ADIF)));
        ADCSRA |= (1<<ADIF);
        return(ADC);
        }

void activity2_loop(){
    uint16_t data;
    InitAdc();
    while(1){
        data = ReadAdc(0);
        _delay_ms(200);
    }
    return;
}

void activity_2(){
    if(!((PIND & (1<<HEATER_PIN)) || (PINC & (1<<LED_PIN)))){
        activity2_loop();
    }
    else{
        LED_PORT &= ~(1<<LED_PIN);
    }
}
    



