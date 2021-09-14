/********************************
*Name: Julio Reyes              *
*CPSC2310 Fall 2020             *
*UserName: jcreyes              *
*Instructor:  Dr. Yvon Feaster  *
********************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define ABS(a) (((a) < 0) ? (a * -1) : (a))
#define LARGEST(a, b, c) ((MAX(a, b) == a) ? (MAX(a, c)) : (MAX(b, c)))
#define SMALLEST(a, b, c) ((MIN(a, b) == a) ? (MIN(a, c)) : (MIN(b, c)))
#define DEBUG_FPRINT fprintf (stderr, "\nDEBUG_FPRINT called in file %s, in line %d\n\n", __FILE__, __LINE__);
#define ISEVEN_ODD(a) (((a % 2) == 0) ? "even" : "odd")
#define MALLOC(a, b) malloc((a) * sizeof(b))

int printReturn( int a, int b, int action);
