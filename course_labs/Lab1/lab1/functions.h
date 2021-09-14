#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>


//-------------------------------------------------------------------
// Return: This function returns void
//
// Parameters: Takes in the file pointer which was set in main
//
// Description: This function checks to see if the file pointer
// set in main is NULL. If it is NULL, the message "File did not
// open!" will be printed out to the user.
//-------------------------------------------------------------------
void checkFile(FILE*);
//-------------------------------------------------------------------



//-------------------------------------------------------------------
// Return:  This function returns void
//
// Parameters: This function takes in an integer, argc, which holds
// the number of command line arguments provided by the user.
//
// Description: This function makes sure the user has provided the
// the correct number of command line arguments. If the correct nu-
// mber of command line arguments have not been provided, "Not enough
// command line arguments!!" will be printed out to the user
//-------------------------------------------------------------------
void checkArguments(int);
//-------------------------------------------------------------------



//-------------------------------------------------------------------
// Return:  This function returns void
//
// Parameters: This function takes in an integer, argc, which holds
// the number of command line arguments provided by the user.
//
// Description: This function makes sure the user has provided the
// the correct number of command line arguments. If the correct nu-
// mber of command line arguments have not been provided, "Not enough
// command line arguments!!" will be printed out to the user
//-------------------------------------------------------------------
void checkBraces(FILE*);
//-------------------------------------------------------------------



#endif // FUNCTIONS_H_INCLUDED
