/**
 * @file activity2.h
 * @author Indiya B Henly (indiyabhenly@gmail.com)
 * @brief This function initialises the ADC and and reads analog values 
 * from the temperature sensor
 * @version 0.1
 * @date 2021-05-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY2_
#define _ACTIVITY2_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include <avr/io.h>
/**
 * @brief This function initialises ADC
 * 
 */
void InitAdc();
/**
 * @brief This function reads analog values from the temperature sensor
 * @param ch Variable used to select channel for MUX
 * @return uint16_t returns channel value
 */
uint16_t ReadAdc(uint8_t ch);
/**
 * @brief It initialises ADC and carries out Activity 2 
 * 
 */
void activity_2();

#endif