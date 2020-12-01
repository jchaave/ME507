/** @file debouncer.h
 *    This file contains the headers for a class, Debouncer, that contains a method,
 *    update(), that will be called periodically to read the state of the digital pin.
 * 
 *  @author Jose Chavez
 *  @date  2020-Oct-26 Original file
 */


/** @brief   Class which debounces a signal.
 *  @details If a number of zeros exceeding a threshold are detected, the class returns true
 *    from just one call of update() . Then a number of ones exceeding the threshold
 *    must be detected to reset the debouncer so that it is ready to detect another event.
 */

class Debouncer
{
protected:
    /// Protecting the pin that will be used for the signal input and the threshold
    uint8_t Pin;
    uint8_t ThreshOLD;
    int count = 0; // Initialize the count to zero
    int state = 0; // Initialize the state to zero

public:
    // Constructor for the Debouncer class
    Debouncer (uint8_t pin, uint8_t threshold);
    bool update (void);
};
