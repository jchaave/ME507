/** @file dissect.h
 *      This file contains the header for the dissect function.The header is the first line of the
 *      funtion only, terminated with a semicolon. This shows other parts of the program how the 
 *      function is to be called. The inside of the function is not incuded in this header file.
 * 
 * @author Jose Chavez
 * @date 2020-08-Oct Original file
 */

// This code prevents error if this file is #included more than once
#ifndef DISSECT_H
#define DISSECT_H

#include <Arduino.h>
#include <PrintStream.h>


// This function dissects unsigned 8-bit integers and prints its
// contents in decimal, hexadecimal, and binary formats. The hexadecimal
// contains "0x" and the binary contains "0b" to indicat e the base that is shown.
// It then lists the decimal meaning of each of the bits in the number wich are ones.

void dissect(uint8_t number);

#endif // DISSECT_H
