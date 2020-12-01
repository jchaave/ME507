/** @file main.cpp
 *    This file contains a program that implements a finite state machine
 *    in which it waits in a state until a method, called update(), periodically
 *    checks on the input to see if a button has been pressed. This program continually
 *    prints a zero until a button is pressed and then prints a one. Once  the the threshold
 *    is reached it will reset itself and wait for another press.
 *  
 *
 *  @author  Jose Chavez
 * 
 *  @date  2020-Oct-26 Original file
 */

// Defining the constants used for this program
//#define PC13 13
//#define threshold 20;

// Libraries needed to run program
#include <Arduino.h>
#include <PrintStream.h>
#if (defined STM32L4xx || defined STM32F4xx)
    #include <STM32FreeRTOS.h>
#endif
#include "debouncer.h"

#define threshold 10
#define PC13 13

/** @brief   Task which tests a simple first-order filter class. 
 *  @details This task sets up a filter, then runs it once at regular intervals
 *           with simulated noisy data to see if the filter can clean up the
 *           data.
 *  @param   p_params A pointer to function parameters which we don't use.
 */



/** @brief   Arduino setup function which runs once at program startup.
 *  @details This function sets up a serial port for communication and creates the
 *           tasks which will be run.
 */
void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);
  delay (2000);
  uint8_t pin = PC13;
}

/** @brief   Arduino's low-priority loop function, which we don't use.
 *  @details A non-RTOS Arduino program runs all of its continuously running
 *           code in this function after @c setup() has finished. When using
 *           FreeRTOS, @c loop() implements a low priority task on most
 *           microcontrollers, and crashes on some others, so we'll not use it.
 */
void loop() {
  // put your main code here, to run repeatedly:
}