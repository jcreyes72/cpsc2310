#include "functions.h"

int* convert2Binary(unsigned int num){

    int numToBin[50];
    int i = 0;

        while (num != 0){

            int temp = 0;
            temp = num % 2;
            num = num / 2;

            numToBin[i] = temp;

            i++;

        }

        int end = i;
        int start = 0;
        int temp;

        // Reversing our array
        //while (start < end) {
        //    if (i == 1){
       //        break;
       //     }
      //      temp = numToBin[start];
      //      numToBin[start] = numToBin[end];
      //     numToBin[end] = temp;
       //     start++;
       //     end--;
      //  }

        int* mainBinary = malloc(32 * sizeof(int));

        //int zeroFill = (32 - i);

        for (int j = 0; j < i; j++){
            mainBinary[j] = numToBin[j];
        }


        while (i < 32){
            mainBinary[i] = 0;
            i++;
        }


return mainBinary;
}

char* convert2Hex(unsigned int num){

    char numToHex[30];
    int i = 0;
    char reverseNum[30];

        while (num != 0){

            int temp = 0;
            temp = num % 16;
            num = num / 16;

                if (temp == 10){
                   numToHex[i] = 'A';
                }
                else if (temp == 11){
                   numToHex[i] = 'B';
                }
                else if (temp == 12){
                   numToHex[i] = 'C';
                }
                else if (temp == 13){
                   numToHex[i] = 'D';
                }
                else if (temp == 14){
                   numToHex[i] = 'E';
                }
                else if (temp == 15){
                   numToHex[i] = 'F';
                }
                else if (temp == 0){
                   numToHex[i] = '0';
                }
                else if (temp == 1){
                   numToHex[i] = '1';
                }
                else if (temp == 2){
                   numToHex[i] = '2';
                }
                else if (temp == 3){
                   numToHex[i] = '3';
                }
                else if (temp == 4){
                   numToHex[i] = '4';
                }
                else if (temp == 5){
                   numToHex[i] = '5';
                }
                else if (temp == 6){
                   numToHex[i] = '6';
                }
                else if (temp == 7){
                   numToHex[i] = '7';
                }
                else if (temp == 8){
                   numToHex[i] = '8';
                }
                else if (temp == 9){
                   numToHex[i] = '9';
                }
                else {
                    numToHex[i] = temp;
                }
            i++;
        }


        // Char pointer we will put our hex in
        char* finalHex = malloc(i * sizeof(char));

        // m will be used to fill finalHex
        int m = 0;

        m = 8 - i;

        for (int s = 0; s < m; s++){
            finalHex[s] = '0';
        }

        // Putting our values into finalHex
        for(int j = i-1; j >= 0; j--){
            finalHex[m] = numToHex[j];
            m++;
        }


return finalHex;
}



void printHex(char* num){

    int i = 0;
    int insertSpace = 0;

    while (i < 8){
        printf("%c", num[i]);
        insertSpace++;
        i++;
        if (insertSpace == 2){
            printf(" ");
            insertSpace = 0;
        }
    }

}

void printBinary(int* num){

    int i = 31;
    int insertSpace = 0;

    printf("\n");

    while (i >= 0){
        printf("%d", num[i]);
        insertSpace++;
        i--;
        if (insertSpace == 4){
            printf(" ");
            insertSpace = 0;
        }
    }


}

