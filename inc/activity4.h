/**
 * @file activity4.h
 * @author Indiya B Henly (indiyabhenly@gmail.com)
 * @brief This header contains functions the outpot temperature using UART 
 * @version 0.1
 * @date 2021-05-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY4_
#define _ACTIVITY4_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include <avr/io.h>
/**
 * @brief This function initialises the UART to transfer data
 * 
 * @param ubrr_value variable used to transmit data through UART
 */
void InitUart(uint16_t ubrr_value);
/**
 * @brief This function reads characters from sensor
 * 
 * @return char 
 */
char UartReadchar();
/**
 * @brief This function writes characters to UART port
 * 
 * @param data 
 */
void UartWrite(char data);
/**
 * @brief This function displays the temperature values on serial monitor
 * 
 */
void activity_4();

#endif