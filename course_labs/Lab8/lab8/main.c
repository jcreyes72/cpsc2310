#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){

    int firstArray[4] = {1, 2, 3, 4};
    int secondArray[5] = {1, 2, 3, 4, 5};

    printf("First Array is: ");                              // Printing arrays before reversal

        for (int i = 0; i < 4; i++){
            printf("%d ", firstArray[i]);
        }

    printf("\nSecond Array is: ");

        for (int i = 0; i < 5; i++){
            printf("%d ", secondArray[i]);
        }

   reverse_array(firstArray, 4);                            // Reversing arrays
   reverse_array(secondArray, 5);

    printf("\n\nAfter reversing, First Array is now: ");

        for (int i = 0; i < 4; i++){
            printf("%d ", firstArray[i]);
        }

    printf("\nAfter reversing, Second Array is now: ");

        for (int i = 0; i < 5; i++){
            printf("%d ", secondArray[i]);
        }

        printf ("\n\n");                                     // Couple extra new lines


        printf ("fun1: 0x00000076 returns %d\n", fun1(0x00000076));
        printf ("fun2: 0x00000076 returns %d\n\n", fun2(0x00000076));

        printf ("fun1: 0x87654321 returns %d\n", fun1(0x87654321));
        printf ("fun2: 0x87654321 returns %d\n\n", fun2(0x87654321));

        printf ("fun1: 0x000000C9 returns %d\n", fun1(0x000000C9));
        printf ("fun2: 0x000000C9 returns %d\n\n", fun2(0x000000C9));

        printf ("fun1: 0xEDCBA987 returns %d\n", fun1(0xEDCBA987));
        printf ("fun2: 0xEDCBA987 returns %d\n\n", fun2(0xEDCBA987));


return 0;
}
