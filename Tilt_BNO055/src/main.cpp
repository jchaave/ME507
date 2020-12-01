/** @file main.cpp
 *    This file runs the program that interacts between the Nucleo-L476RG and the
 *    BNO055 Intelligent 9-axis absolute orientation sensor through an I2C bus.

 *    Note: The BNO055 library was added to the Tilt project.
 *
 *  @author  Jose A. Chavez
 * 
 *  @date    05 Nov 2020 Original file
 */

#include <Arduino.h>
#include <PrintStream.h>
#include <Wire.h>
#include "accel.h"
#include "angles.h"
#include "taskshare.h"
#if (defined STM32L4xx || defined STM32F4xx)
    #include <STM32FreeRTOS.h>
#endif




/** @brief   Scan the I2C bus and let user know if you found the device or not
 *  @details This function is modified from the example at
 *           @c https://playground.arduino.cc/Main/I2cScanner/. The printed
 *           symbols are:
 *           * @b - No device found at this I2C bus address
 *           * @b @@ No error; a device was found at this address
 *           * @b t The I2C bus timed out trying to read from this address
 *           * @b ? Unknown error when trying to find a device at this address
 *  @param   bus A reference to the I2C/Two-Wire bus to be scanned
 *  @param   printer A reference to the stream such as @c Serial on which the
 *           results of the scan are to be printed
 */

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}