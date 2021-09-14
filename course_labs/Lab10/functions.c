/********************************
*Name: Julio Reyes              *
*CPSC2310 Fall 2020             *
*UserName: jcreyes              *
*Instructor:  Dr. Yvon Feaster  *
********************************/

#include "functions.h"

int printReturn( int a, int b, int action){

      return (action == 1 ? a == b 
            : action == 2 ? a < b 
            : action == 3 ? a > b 
            : -50000);

}