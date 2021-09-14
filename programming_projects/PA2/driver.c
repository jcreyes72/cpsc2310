#include "functions.h"
/********************************
*Name: Julio Reyes              *
*CPSC2310 Fall 2020             *
*UserName: jcreyes              *
*Instructor:  Dr. Yvon Feaster  *
********************************/


int main (int argc, char* argv[]){


    //printf ("Hello World!\n\n");

    //Checking the number of command line arguments

    checkArg(argc);


    //Creating our input and output file pointers 

    FILE * inputPointer;
    FILE * outputPointer;

    // Setting pointers equal to their respective files

    inputPointer = fopen(argv[1], "r");
    outputPointer = fopen(argv[2], "w");

    // Calling checkFile to make sure these worked correctly 
    
    checkFile(inputPointer);
    checkFile(outputPointer);  


    
    // Getting the number of chars in our file and storing
    // them so that we can allocate the appropriate amount
    // of memory 

    int numChars = getFileCount(inputPointer);



    // Allocating memory to char p
   
    char *p = malloc( sizeof(char) * (numChars + 1));


    // Reading our file

    readFile(p, inputPointer, numChars);



    // Creating a function pointer and pointing it to our 
    // ASCII function 

    void (*functionPtr)(char*, FILE*, int) = &ASCII;



    // Calling print

    print(functionPtr, p, outputPointer, numChars);



    // Changing functionPtr so it points to our binary function

    functionPtr = &Binary;



    // Calling print
    
    print(functionPtr, p, outputPointer, numChars);

return 0; 
}