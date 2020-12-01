/** @file debouncer.cpp
 *    This file contains source code for the state machine that 
 *    periodically will check the state in which the program is
 *    currently in.
 * 
 *  @author Jose Chavez
 *  @date  2020-Oct-26 Original file
 */

#include <Arduino.h>
#include <PrintStream.h>
#include "debouncer.h"



/** @brief   Initializing all variables and pin mode needed to run methods.
 *  @details This constructor takes in the pin value that is being
 *           used to communicate with the nucleo-L476RG as well as
 *           the threshold in which the state machine resets itself
 *           and awaits another input. The pin mode is also initialized at this
 *           point.
 *  @param   pin The value of the pin used to communicate.
 *  @param   threshold The number of times the detected signal must
 *           surpass in order to reset the debouncer so that it is ready
 *           to detect another event.
 */

Debouncer::Debouncer(uint8_t pin, uint8_t threshold)  // WHY IS IT DOING THIS???
{
    Pin = pin;
    ThreshOLD = threshold;
    pinMode(Pin, INPUT_PULLUP); // Monitors the state of a switch by establishing serial communication between the nucleo-L476RG and the computer
    count = 0; // Initialize the count to zero
    state = 0; // Initialize the state to zero
}

bool Debouncer::update(void)
{
    bool BlueThang = digitalRead(Pin); // Reads the value from a specified digital pin, either HIGH or LOW

    // Implement the state machine here
    if (state == 0)
    {
        if (BlueThang == 0)
        {
            count = 0;
            state = 1;
        }
        Serial << "In State 0" << endl;
    }
    else if (state ==1)
    {
        if (BlueThang == 1)
        {
            count = 0;
            state = 0;
        }
        Serial << "In State 1" << endl;
        if (count > ThreshOLD)
        {
            state = 2; // Move to state 2
        }
        count += 1 // up the count
    }




}

/** @brief   Task which tests my debouncer. 
 *  @details This task sets up a filter, then runs it once at regular intervals
 *           with simulated noisy data to see if the filter can clean up the
 *           data.
 *  @param   p_params A pointer to function parameters which we don't use.
 */
void task_test_Debouncer (void* p_params)
{
    (void)p_params;                     // Shuts up a compiler warning
    static uint8_t pin = PC13;          // Making the variable static so it persists in memory

  for (;;)
  {
    Debouncer::update();
    delay(200);
  }
  }