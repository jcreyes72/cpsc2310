/********************************
*Name: Julio Reyes              *
*CPSC2310 Fall 2020             *
*UserName: jcreyes              *
*Instructor:  Dr. Yvon Feaster  *
********************************/



#include "functions.h"


int main() {
   
    int action = 1;
    int a = 3;
    int b = 5;
    int c = 23;
    char variableReturn;                        // I couldn't think of any other way to print the variable names out




//------------------ PRINT RETURN FUNCTION ----------------------------------------------------------------//

    printf ("\n\tPRINT RETURN FUNCTION");
    
    printf ("\nAction is 1. The function has returned %d\n", printReturn(a, b, action));

    action = 2;

    printf ("Action is 2. The function has returned %d\n", printReturn(a, b, action));

    action = 3;

    printf ("Action is 3. The function has returned %d\n", printReturn(a, b, action));

    action = 4;

    printf ("Action is 4. The function has returned %d\n\n", printReturn(a, b, action));




//------------------ MAX MACRO ----------------------------------------------------------------------------//

    printf ("\n\tMAX MACRO\nData Point\t\tOutput\n");

    printf ("5, 4\t\t\tMax: %d\n", MAX(5,4));
    printf ("10.5, 11.9\t\tMax: %.1f\n", MAX(10.5, 11.9));

        if (MAX(a, b) == a){
            variableReturn = 'a';
        }
        else{
            variableReturn = 'b';
        }

    printf ("'a', 'b'\t\tMax: %c\n", variableReturn);       // I feel this is still acceptable since my 
                                                            // variableReturn is still dependent upon my
                                                            // MAX macro working correctly.





//------------------ MIN MACRO ----------------------------------------------------------------------------//

    printf ("\n\tMIN MACRO\nData Point\t\tOutput\n");

    printf ("5,4\t\t\tMin: %d\n", MIN(5,4));
    printf ("10.5, 11.9\t\tMin: %.1f\n", MIN(10.5, 11.9));

        if (MIN(a, b) == a){
            variableReturn = 'a';
        }
        else{
            variableReturn = 'b';
        }

    printf ("'a', 'b'\t\tMin: %c\n", variableReturn);       // I feel this is still acceptable since my 
                                                            // variableReturn is still dependent upon my
                                                            // MIN macro working correctly.






//------------------ ABS MACRO ----------------------------------------------------------------------------//

    printf ("\n\tABS MACRO\nData Point\t\tOutput\n");

    printf ("-3\t\t\tABS: %d\n", ABS(-3));
    printf ("3\t\t\tABS: %d\n", ABS(3));
    printf ("0\t\t\tABS: %d\n", ABS(0));




//------------------ LARGEST MACRO -------------------------------------------------------------------------//


    printf ("\n\tLARGEST MACRO\nData Point\t\tOutput\n");

    printf ("1, 2, 3\t\t\tLARGEST: %d\n", LARGEST(1, 2, 3));


        if (LARGEST(a, b, c) == a){
            variableReturn = 'a';
        }
        else if (LARGEST(a, b, c) == b){
            variableReturn = 'b';
        }
        else {
            variableReturn = 'c';
        }

    printf ("a, b, c\t\t\tLARGEST: %c\n", variableReturn);      // I feel this is still acceptable since my 
                                                                // variableReturn is still dependent upon my
                                                                // LARGEST macro working correctly.

        if (LARGEST(c, b, a) == a){
            variableReturn = 'a';
        }
        else if (LARGEST(c, b, a) == b){
            variableReturn = 'b';
        }
        else {
            variableReturn = 'c';
        }

    printf ("c, b, a\t\t\tLARGEST: %c\n", variableReturn);      // I feel this is still acceptable since my 
                                                                // variableReturn is still dependent upon my
                                                                // LARGEST macro working correctly.


//------------------ SMALLEST MACRO -------------------------------------------------------------------------//


    printf ("\n\tSMALLEST MACRO\nData Point\t\tOutput\n");

    printf ("1, 2, 3\t\t\tSMALLEST: %d\n", SMALLEST(1, 2, 3));


        if (SMALLEST(a, b, c) == a){
            variableReturn = 'a';
        }
        else if (SMALLEST(a, b, c) == b){
            variableReturn = 'b';
        }
        else {
            variableReturn = 'c';
        }

    printf ("a, b, c\t\t\tSMALLEST: %c\n", variableReturn);      // I feel this is still acceptable since my 
                                                                // variableReturn is still dependent upon my
                                                                // SMALLEST macro working correctly.

        if (SMALLEST(c, b, a) == a){
            variableReturn = 'a';
        }
        else if (SMALLEST(c, b, a) == b){
            variableReturn = 'b';
        }
        else {
            variableReturn = 'c';
        }

    printf ("c, b, a\t\t\tSMALLEST: %c\n", variableReturn);      // I feel this is still acceptable since my 
                                                                // variableReturn is still dependent upon my
                                                                // SMALLEST macro working correctly.







//------------------ DEBUG_FPRINT MACRO -------------------------------------------------------------------------//

    printf ("\n\tDEBUG_FPRINT MACRO\n\n");

    printf ("Calling DEBUG_FPRINT Macro\n");

    DEBUG_FPRINT;




//------------------ ISEVEN_ODD MACRO -------------------------------------------------------------------------//


    printf ("\n\tISEVEN_ODD MACRO\nData Point\t\tOutput\n");

    printf ("4\t\t\t%s\n", ISEVEN_ODD(4));
    printf ("1\t\t\t%s\n", ISEVEN_ODD(1));



//------------------ MALLOC MACRO -------------------------------------------------------------------------//

    printf ("\n\tMALLOC MACRO\n\n");

    int *ptr = NULL;

    ptr = MALLOC(5, int);

    if (ptr != NULL){
        printf ("The address of ptr is: %p\n\n", ptr);
    }



return 0;
}
