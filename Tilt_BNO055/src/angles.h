/** @file angles.h
 *      This file contains the header for the functions that deal with the Euler angles.The header is the first line of the
 *      funtion only, terminated with a semicolon. This shows other parts of the program how the 
 *      function is to be called. The inside of the function is not incuded in this header file.
 * 
 *  @author  Jose A. Chavez
 * 
 *  @date    05 Nov 2020 Original file
 */

// This code prevents error if this file is #included more than once
#ifndef ANGLES_H
#define ANGLES_H

#include <Arduino.h>
#include <PrintStream.h>


// This task function will read the Euler angle data
void task_read (void* p_params);

// This task function prints the data found
void task_print (void* p_params);



//char* convert_int16_to_str(int16_t i);

#endif //ANGLES_H