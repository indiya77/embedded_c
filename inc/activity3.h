/**
 * @file activity3.h
 * @author Indiya B Henly (indiyabhenly@gmail.com)
 * @brief This header contains functions to generate PWM signal from ADC values
 * @version 0.1
 * @date 2021-05-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY3_
#define _ACTIVITY3_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include <avr/io.h>

#define OUT_PIN (PB1) // pin for timer 1
/**
 * @brief This function initialises the PWM
 * 
 */
void InitPwm();
/**
 * @brief This function decides OCR1A values and generates PWM signals
 * 
 * @param var variable which contains temperature values to compare
 * @return char 
 */
char activity3_loop (uint16_t var);
/**
 * @brief It generates PWM signal and carries out Activity 3
 * 
 */
void activity_3();

#endif