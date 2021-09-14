#include "functions.h"
/********************************
*Name: Julio Reyes              *
*CPSC2310 Fall 2020             *
*UserName: jcreyes              *
*Instructor:  Dr. Yvon Feaster  *
********************************/

void checkArg(int argc){

    // argc must be 3
    if (argc != 3){
        fprintf (stderr, "Incorrect number of command line arguments. Exiting...\n\n");
        exit(1);
    }

}


void checkFile(FILE* filePtr){

    // Failed if file pointer is NULL
    if (filePtr == NULL){
        fprintf (stderr, "fopen() failed in file %s at line #%d, of function %s\n\n", __FILE__, __LINE__, __FUNCTION__);
    }

}



int getFileCount(FILE* filePtr){

    char currentChar;
    int numChars = 0;

        // Loop through, incrementing numChars by 1 
        // each time
        while (currentChar != EOF){
            currentChar = getc(filePtr);
            numChars++;
        }

    // The loop above counts 1 more char than it should so I subtract 
    // numchars by 1
    numChars = numChars - 1;

    // Running retFP so we can set the pointers position back to 0
    retFP(filePtr);

return numChars;
}


void retFP(FILE* filePtr){

    printf ("\nBefore fseek, file pointer is currently pointing at position %ld\n", ftell(filePtr));


    // If fseek doesn't work correctly
    if ((fseek(filePtr, 0, SEEK_SET)) != 0){
        fprintf (stderr, "fseek failed. Exiting...\n");
        exit(1);
    }

    printf ("fseek successful. File pointer is currently pointing at position %ld\n\n", ftell(filePtr));

}


void readFile(char* p, FILE* filePtr, int numChars){


    // If fread fails to work
    if ((fread(p, sizeof(p), numChars, filePtr) == 0)){
        fprintf (stderr, "fread failed. Exiting...\n");
        exit(1);
    }
    else {
        retFP(filePtr);
    }

}


void ASCII(char* p, FILE* filePtr, int numChars){

    // This will be set equal to each char so we 
    // can get the ASCII values
    int chartoASCII;

    // This will keep track of what line number we 
    // are on
    int lineNum = 1;

    // This will keep track of when we need to print a
    // newline 
    int newLine = 0;

    fprintf (filePtr, "ASCII:\n");

        // Loop through entire char array, printing 
        // out the chartoASCII int
        for (int i = 0; i < numChars; i++){
            
            // Storing char as an int
            chartoASCII = p[i];

                // Prints out the line number
                if (newLine == 0){
                    fprintf (filePtr, "%d: ", lineNum);
                }

            newLine++;

            fprintf (filePtr, "%d ", chartoASCII);

                if (newLine == 9){
                    fprintf (filePtr, "\n");
                    newLine = 0;
                    lineNum++;
                }
        }

        // One more extra newline
        fprintf (filePtr, "\n");

}


void Binary(char* p, FILE* filePtr, int numChars){

    fprintf (filePtr, "\nBinary:");
    
    for (int i = 0; i < numChars; i++){
        //Newline after bits have printed
        fprintf(filePtr, "\n%d: ", i+1);
            for (int j = 7; j >= 0; j--){
                //Printing out 8 bits 
                int currPrint = p[i] >> j;
                if (currPrint & 1){
                    fprintf(filePtr, "1 ");
                }
                else {
                    fprintf(filePtr, "0 ");
                }
            }

    }
}



void print(void(*functionPtr)(char* p, FILE* filePtr, int numChars), char* p, FILE* filePtr, int numChars){

    // Using our function pointer to print either ASCII or Binary 

    (*functionPtr)(p, filePtr, numChars);
    
}