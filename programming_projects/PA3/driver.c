/********************************
*Name: Julio Reyes              *
*CPSC2310 Fall 2020             *
*UserName: jcreyes              *
*Instructor:  Dr. Yvon Feaster  *
********************************/


#include "functions.h"


int main (){

    // Our main variables 
    int multiplicand;
    int multiplier;
    int carry = 0;
    int accumulator = 0;

    // The binary equivalent of our variables
    int* binaryM;
    int* binaryQ;
    int* binaryACC;


        //Getting our multiplicand and multiplier from the user 
        //Loop in case number is out of bounds
        while (1){

            printf ("\nPlease enter your multiplicand (between 0 and 255)\nMultiplicand: ");
            scanf ("%d", &multiplicand);

            printf ("\n\nPlease enter your multiplier (between 0 and 255)\nMultiplier: ");
            scanf ("%d", &multiplier);

            if (multiplicand > 255 || multiplicand < 0){
                printf ("\nERROR: Your multiplicand, %d, must be between 0 and 255\n", multiplicand);
            }
            else if (multiplier > 255 || multiplier < 0){
                printf ("\nERROR: Your multiplier, %d, must be between 0 and 255\n", multiplier);
            }
            else {
                break;
            }
        }

    // Some stuff for our check section
    int originalM = multiplicand;
    int originalQ = multiplier;
    int finalAnswer = multiplicand * multiplier;

    //Printing out our values for our variables 
    printf ("\n\nM = Multiplicand = %d\nQ = Multiplier = %d\n", multiplicand, multiplier);
    printf ("C = Carry = %d\nACC = Accumulator = %d\n\n", carry, accumulator);


    //Printing out step 0, outputting our numbers in binary 
    printf ("STEP 0\t\tInitialize the data M = ");
    binaryM = binaryConversion(multiplicand);
    binaryPrintEightBit(binaryM);
    printf (" (%d) ", multiplicand);
    printf ("C = 0 ACC = 0 Q = ");
    binaryQ = binaryConversion(multiplier);
    binaryPrintEightBit(binaryQ);
    printf (" (%d) ", multiplier);
    printf ("\n\n");
    
    

        // Looping through steps 1-8
        for (int i = 1; i <= 8; i++){

            printf ("\t\tC\t\tACC\t\tQ\n");
            printf ("STEP %d\t\t%d\t\t", i, carry);
            binaryACC = binaryConversion(accumulator);
            binaryPrintEightBit(binaryACC);
            printf ("\t");
            binaryConversion(multiplier);
            binaryPrintEightBit(binaryQ);
            binaryMultiplication(binaryQ, binaryACC, binaryM, &multiplicand, &accumulator, &carry);

            printf("\n\t\t\t\t------------------------");
            printf("\n\t\t%d\t\t", carry);

            binaryPrintEightBit(binaryACC);
            printf("\t");
            binaryPrintEightBit(binaryQ);

            printf("\n\t\t\t\t\t\t\t   Shift >> 1");

            rightShift(&accumulator, binaryQ, binaryACC, &multiplier, &carry);
            printf("\n\t\t%d\t\t", carry);
            binaryPrintEightBit(binaryACC);
            printf("\t");
            binaryPrintEightBit(binaryQ);
            printf("\n\n");
        }


    // CHECK SECTION

    printf ("\n\nCheck Section\n");
    printf ("-------------\n");
    printf ("Final Result: %d * %d = %d\n", originalM, originalQ, finalAnswer);
    printf ("Result in Binary: ");
    binaryPrintEightBit(binaryACC);
    printf (" ");
    binaryPrintEightBit(binaryQ);
    printf ("\n\n");


return 0;    
}