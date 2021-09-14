/********************************
*Name: Julio Reyes              *
*CPSC2310 Fall 2020             *
*UserName: jcreyes              *
*Instructor:  Dr. Yvon Feaster  *
********************************/


#include "functions.h"



int* binaryConversion (int n){

    //int array used to hold binary values 
    int *binary = (int*)malloc(8 * sizeof(int));
    int i = 0;
    int j = 0;
    int zeroPads;

    int temp = n;

        // Getting the amount of binary digits in our num
        while (temp > 0){
            temp = temp / 2;
            j++;
        }

    //Padding the front of our int with 0's
    zeroPads = 8 - j;


        // Storing our num into binary array
        while (n > 0){
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        //Putting our zeros at the front of our binary
        for (int w = 0; w < zeroPads; w++){
            binary[i] = 0;
            i++;
        }    


return binary;
}



void binaryMultiplication (int *binaryQ, int *binaryACC, int *binaryM, int *multiplicand, int *accumulator, int *carry){


    // If our least significant bit is 1
    if (binaryQ[0] == 1){

        printf("   lsb = 1 add M to the ACC");
        printf("\n\t\t +\t\t");
        binaryPrintEightBit(binaryM);
        
        // Adding our multiplicand to our accumulator
        *accumulator += *multiplicand;

        // Adding our binary accumulator and multiplicand
        addMtoACC(binaryACC, carry, binaryM);


        // Updating our binary representation of accumulator
        binaryACC = binaryConversion(*accumulator);
    }
    else {
        printf("   lsb = 0 no add to ACC");
        printf("\n\t\t +\t\t00000000");
    }


}



void binaryPrintEightBit (int* binary){

     //Printing out our binary num
    for (int j = 7; j >= 0; j--){
        printf ("%d", binary[j]);
    }

}



void addMtoACC(int* binaryACC, int* carry, int* binaryM){
    //Setting our carry equal to 0
    *carry = 0;
    // Performing binary addition for our multiplicand and accumulator
    for (int j = 0; j <= 7; j++){
        if (((binaryM[j] == 0) && (binaryACC[j] == 0))){
            if (*carry != 0){
                binaryACC[j] = 1;
                *carry = *carry - 1;
            }
            else {
                binaryACC[j] = 0;
            }
        }
        else if ((binaryM[j] == 0) && (binaryACC[j] == 1)){
            if (*carry > 0){
                binaryACC[j] = 0;
            }
            else {
                binaryACC[j] = 1;
            }
        }
        else if ((binaryM[j] == 1) && (binaryACC[j] == 0)){
            if (*carry > 0){
                binaryACC[j] = 0;
            }
            else{
                binaryACC[j] = 1;
            }
        }
        else if ((binaryM[j] == 1) && (binaryACC[j] == 1)){
            if (*carry > 0){
                binaryACC[j] = 1;
            }
            else {
                binaryACC[j] = 0;
                *carry = *carry + 1;
            }
        }
    }
}


void rightShift(int *accumulator, int *binaryQ, int *binaryACC, int* multiplier, int* carry){

    // We will use this array to combine our binaryQ and binaryACC
    int combineBinary[16];
    // This is our shifted binary 
    int shiftedBinary[16];
    // This i will allow us to start at the last element of the array
    int i = 7;

        // Adding our ACC to the combineBinary
        for (int j = 15; j >= 8; j--){
            combineBinary[j] = binaryACC[i];
            i--;
        }
        // Adding our multiplier to the combineBinary
        for (int j = 7; j >= 0; j--){
            combineBinary[j] = binaryQ[j];
        }

    // If we have a carry then this will determine
    // what are shifted binary array has at the front
    if (*carry == 1){
        shiftedBinary[15] = 1;
    }
    else{
        shiftedBinary[15] = 0;
    }

        // Adding our combineBinary values to our 
        // shifted binary array
        for (int j = 14; j >= 0; j--){
            shiftedBinary[j] = combineBinary[j+1];
        }

        int k = 7;

        // Taking the accumulator values from our shift 
        // and updating our accumulator 
        for (int j = 15; j >= 7; j--){
            binaryACC[k] = shiftedBinary[j];
            k--;
        }
     k = 7;

        // Taking the accumulator values from our shift
        // and updating our accumulator
        for (int j = 7; j >= 0; j--){
            binaryQ[k] = shiftedBinary[j];
            k--;
        }
        *accumulator = binaryToDecimal(binaryACC);
        *multiplier = binaryToDecimal(binaryQ);

        *carry = 0;
}


int binaryToDecimal(int* binaryNum){

    // The number we will get from our binary
    int decimal = 0;

    // Going through binary array
    for (int i = 7; i >= 0; i--){
        if (binaryNum[i] == 1){
            decimal = decimal + pow(2, i);    
        } 
    }

return decimal;
}