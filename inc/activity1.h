/**
 * @file activity1.h
 * @author Indiya B Henly (indiyabhenly@gmail.com)
 * @brief This contains all the necessary functions to switch on LED when both 
 * the driver is seated and the heater is turned on
 * @version 0.1
 * @date 2021-05-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY1_
#define _ACTIVITY1_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#define LED_PORT (PORTB) // led port number
#define LED_PIN (PB0) // led pin number
#define DRIVER_PIN (PC6) // to check whether the driver is seated
#define HEATER_PIN (PD4) // to check whether the heater is turned on

#include <avr/io.h>

/**
 * @brief It initialises the pin as input and output pin
 * 
 */
void pin_init();
/**
 * @brief It turns on LED when both the switches are turned ON,
 * else LED turns OFF
 */
void activity1_loop();
/**
 * @brief This function initialises the pin and carries out Activity 1
 * 
 */
void activity_1();

#endif