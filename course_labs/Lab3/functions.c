/** CPSC 2310 Lab 5

    Nibble routines

    Nibbles are 4-bit parts of a 32 bit unsigned integer variable.
    Nibbles are numbered 0-7 from left to right.

**/
#include "functions.h"

/** nget()
    Returns the nibble value in "val" at nibble position "position"
**/
unsigned int nget(unsigned int val, int position) {

    unsigned int mask = 0xF;
    int length = 7;
    int zeroFill = length - position;

    printf ("\t\t\t\tDEBUG: Length is: %d\n\n", length);
    printf ("\t\t\t\tDEBUG: ZeroFill is: %d\n\n", zeroFill);

        for (int i = 0; i < zeroFill; i++){
            mask = mask * 10;
        }
    printf ("\t\t\t\tDEBUG: Mask is: %d\n\n", mask);

    unsigned int postNibble = val&mask;

   return(postNibble);
}

/** nset()
    Returns an unsigned integer based on the original value "val"
    but with the nibble at position "position" set to "nVal".
**/
unsigned int nset(unsigned int val, unsigned int nVal, int position) {
   /** STUBBED **/
   return(0);
}

/** nlrotate()
    Rotate the nibbles in "val" left one nibble position (4 bits), and
    place the nibble that rotated out of the left of the integer back
    into the nibble at the right (left circular shift).
**/
unsigned int nlrotate(unsigned int val) {
   /** STUBBED **/
   return(0);
}
