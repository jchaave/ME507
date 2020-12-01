/** @file dissect.cpp
 *      This file contains the function that will take an integer and dissect it and show its contents
 * 
 *  @author Jose Chavez
 *  @date   2020-08-Oct Original file
 *  @date   2020-09-Oct Updated the code and added comments. Code is fully functional now.
 */
 

#include "dissect.h"
// Including the math library to be able to use the power command.
#include <cmath>

/** @brief    Dissect a number into decimal, hexadecimal, and binary format.
 *  @details  This function takes unsigned 8-bit integers and
 *            prints its contents in decimal, hexadecimal, and binary formats. The hexadecimal
 *            contains "0x" and the binary contains "0b" to indicat e the base that is shown.
 *            It then lists the decimal meaning of each of the bits in the number wich are ones.
 *  @param    number // This variable contains the number that will be dissected into different formats
 */
void dissect(uint8_t number)
{
    Serial << dec << number << " == 0x" << hex << number << " == 0b" << bin << number << "==" ;
    int A = number;

      for (int i = 0; i< 8; i++)
    {
        if (A & (1 << i))
        {
        int B = pow(2,i);
        Serial << dec << B;  
        }
        else if (A & (1 << i-1))
        {
        Serial << "+" ;
        }
        else if (A == 0)
        { 
        Serial << " 0 " ;
        break; 
        }
        else {}    
    }
}
