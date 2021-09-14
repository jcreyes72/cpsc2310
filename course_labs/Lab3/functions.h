/** Include file for nibble routines */
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int nget(unsigned int val, int position);
unsigned int nset(unsigned int val, unsigned int nVal, int position);
unsigned int nlrotate(unsigned int val);

#endif
