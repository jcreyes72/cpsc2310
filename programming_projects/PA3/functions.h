/********************************
*Name: Julio Reyes              *
*CPSC2310 Fall 2020             *
*UserName: jcreyes              *
*Instructor:  Dr. Yvon Feaster  *
********************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Parameters: int - the number we are trying to convert
 * Return: int* - this function returns an integer pointer, our binary array
 * This function takes in an integer and prints its binary 
 * equivalent
 */ 
int* binaryConversion (int n);



/* Parameters: 
 * int binaryQ & binaryACC & binaryM: Our binary representation of multiplier, accumulator, multiplicand  
 * int multiplicand & accumulator & carry: References to our multiplicand, accumulator, and carry values
 * Return: void - this function returns void 
 * This function handles the multiplication portion of our code
 */ 
void binaryMultiplication (int *binaryQ, int *binaryACC, int* binaryM, int *multiplicand, int *accumulator, int* carry);



/* Parameters: 
 * int* binary: Binary representation of whatever number we have   
 * Return: void - this function returns void 
 * This function prints out our binary number (8 bit)
 */ 
void binaryPrintEightBit (int* binary);


/* Parameters: 
 * int binaryACC & binaryM: Our binary representation of accumulator, multiplicand    
 * Return: void - this function returns void 
 * This function adds our multiplicand to our accumulator
 */ 
void addMtoACC(int* binaryACC, int* carry, int* binaryM);


/* Parameters: 
 * int binaryQ & binaryACC: Our binary representation of multiplier, accumulator
 * int accumulator & carry: References to our accumulator, and carry values
 * Return: void - this function returns void 
 * This function right shifts our accumulator + multiplier
 */ 
void rightShift(int *accumulator, int *binaryQ, int *binaryACC, int* multiplier, int* carry);



/* Parameters: 
 * int *binaryNum: An int pointer with our binary array we need to convert
 * Return: int - This function returns a converted decimal
 * This function takes in our binary array and converts it to an integer
 */ 
int binaryToDecimal(int* binaryNum);