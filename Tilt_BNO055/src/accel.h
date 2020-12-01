/** @file accel.h
 *      This file contains the header for the  functions that deal with the accelerometer.The header is the first line of the
 *      funtion only, terminated with a semicolon. This shows other parts of the program how the 
 *      function is to be called. The inside of the function is not incuded in this header file.
 * 
 *  @author  Jose A. Chavez
 * 
 *  @date    05 Nov 2020 Original file
 */

// This code prevents error if this file is #included more than once
#ifndef ACCEL_H
#define ACCEL_H

#include <Arduino.h>
#include <PrintStream.h>

// /* Operation mode settings*/
// #define Config_Mode			0X00 /This mode is used to configure BNO, wherein all output data is reset to zero and sensor fusion is halted.
// #define OPERATION_MODE_ACCONLY			0X01
// #define OPERATION_MODE_MAGONLY			0X02
// #define OPERATION_MODE_GYRONLY			0X03
// #define OPERATION_MODE_ACCMAG			0X04
// #define OPERATION_MODE_ACCGYRO			0X05
// #define OPERATION_MODE_MAGGYRO			0X06
// #define OPERATION_MODE_AMG				0X07
// #define IMU			0X08 / IMU mode the relative orientation of the BNO055 in space is calculated from the accelerometer and gyroscope data
// #define OPERATION_MODE_COMPASS			0X09
// #define OPERATION_MODE_M4G				0X0A
// #define OPERATION_MODE_NDOF_FMC_OFF		0X0B
// #define NDOF				0X0C

// /* BNO055 Power mode settings*/
// #define POWER_MODE_NORMAL 		0x00
// #define POWER_MODE_LOW_POWER 	0x01
// #define POWER_MODE_SUSPEND		0x02

  ///* Accel data register*/
// #define BNO055_ACC_DATA_X_LSB_ADDR			0X08
// #define BNO055_ACC_DATA_X_MSB_ADDR			0X09
// #define BNO055_ACC_DATA_Y_LSB_ADDR			0X0A
// #define BNO055_ACC_DATA_Y_MSB_ADDR			0X0B
// #define BNO055_ACC_DATA_Z_LSB_ADDR			0X0C
// #define BNO055_ACC_DATA_Z_MSB_ADDR			0X0D

// /* Accelerometer Offset registers*/
// #define ACC_OFFSET_X_LSB_ADDR				0X55
// #define ACC_OFFSET_X_MSB_ADDR				0X56
// #define ACC_OFFSET_Y_LSB_ADDR				0X57
// #define ACC_OFFSET_Y_MSB_ADDR				0X58
// #define ACC_OFFSET_Z_LSB_ADDR				0X59
// #define ACC_OFFSET_Z_MSB_ADDR				0X5A

// /* Mode registers*/
// #define BNO055_OPR_MODE_ADDR				0X3D
// #define BNO055_PWR_MODE_ADDR				0X3E

/* Temperature data register*/

// #define BNO055_TEMP_ADDR					0X34

// /* Status registers*/
// #define BNO055_CALIB_STAT_ADDR				0X35
// #define BNO055_ST_RESULT_ADDR				0X36
// #define BNO055_INT_STA_ADDR					0X37
// #define BNO055_SYS_STATUS_ADDR				0X39
// #define BNO055_SYS_ERR_ADDR					0X3A

// /* Unit selection register*/
// #define BNO055_UNIT_SEL_ADDR				0X3B
// #define BNO055_DATA_SEL_ADDR				0X3C

// /* Linear acceleration data registers*/
// #define BNO055_LIA_DATA_X_LSB_ADDR			0X28
// #define BNO055_LIA_DATA_X_MSB_ADDR			0X29
// #define BNO055_LIA_DATA_Y_LSB_ADDR			0X2A
// #define BNO055_LIA_DATA_Y_MSB_ADDR			0X2B
// #define BNO055_LIA_DATA_Z_LSB_ADDR			0X2C
// #define BNO055_LIA_DATA_Z_MSB_ADDR			0X2D

// This task function will read the accelerometer data
void task_read (void* p_params);

// This task function prints the data found
void task_print (void* p_params);



//char* convert_int16_to_str(int16_t i);

#endif //ACCEL_H