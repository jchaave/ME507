/** @file main.cpp
 *  This file contains a simple program for the ME 507 homework assingment, "Number Biology."
 * 
 *  @author Jose Chavez
 *  @date 2020-08-Oct Original file
 */

#include <Arduino.h>
#include <PrintStream.h>
#include "dissect.h"

/** @brief   This is an introductory assignment into coding with C++
 *  @details This function will dissect unsigned 8-bit integers (type uint8_t)
 *  so as to show their contents
 */
void setup()
 {
  // This initializes the serial port and pauses for 2000 milliseconds
  Serial.begin (115200);
  delay (2000);

      for (int number = 0; number<= 0; number++)
    {
        dissect(number);
      //  if (number == 4)
         // break;
    }
}
/** @brief  Continually display the dissected numbers
 *  @details  This loop will call upon the function dissect and display the
 *  contents of the chosen number.
 */
void loop() 
{
  delay(500);
   
}