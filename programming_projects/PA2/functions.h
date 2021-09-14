#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

/********************************
*Name: Julio Reyes              *
*CPSC2310 Fall 2020             *
*UserName: jcreyes              *
*Instructor:  Dr. Yvon Feaster  *
********************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Parameters: int - the number of command line arguments provided 
 * Return: void - this function returns void 
 * This function ensures that the number of command line arguments 
 * entered by the user is appropriate
 */ 
void checkArg(int);


/* Parameters: FILE* - takes in a file pointer which has been created in main
 * Return: void - this function returns void 
 * This function determines whether the file has opened succesfully
 */ 
void checkFile(FILE*);


/* Parameters: FILE* - takes in a file pointer which has been created in main
 * Return: int - This function returns the numbers of characters in the file  
 * This function counts the number of chars including spaces in the file 
 * and returns them to main
 */ 
int getFileCount(FILE*);



/* Parameters: FILE* - takes in a file pointer which has been created in main
 * Return: void - This function returns void 
 * This function returns the file pointer back to the beginning of the file  
 * using fseek. Also uses ftell to print where the pointer is
 */ 
void retFP(FILE *fp);


/* Parameters: FILE* - takes in a file pointer which has been created in main
 * char* - takes in a char array for storing the information
 * int - gives the number of chars in the file
 * Return: int - This function returns void 
 */ 
void readFile(char*, FILE*, int);



/* Parameters: FILE* - takes in a file pointer which has been created in main
 * char* - takes in a char array for storing the information
 * int - gives the number of chars in the file
 * Return: This function returns void   
 * This function prints out to a file the ASCII value of each char
 * in the file 
 */ 
void ASCII(char*, FILE*, int);



/* Parameters: FILE* - takes in a file pointer which has been created in main
 * char* - takes in a char array for storing the information
 * int - gives the number of chars in the file
 * Return: This function returns void   
 * This function prints out to a file the binary value of each char
 * in the file 
 */ 
void Binary(char*, FILE*, int);



/* Parameters: *fp - This function takes in a function pointer
 * which points to whichever function, ASCII or Binary, we are 
 * trying to print
 * FILE* - takes in a file pointer which has been created in main
 * char* - takes in a char array for storing the information
 * int - gives the number of chars in the file
 * Return: This function returns void   
 * This function is used to call our ASCII and binary functions
 */ 
void print(void(*fp)(char*, FILE*, int), char*, FILE*, int);


#endif // FUNCTIONS_H_INCLUDED