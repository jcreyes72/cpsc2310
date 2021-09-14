#include "functions.h"

//-------------------------------------------------------------------
// Return: This function returns void
//
// Parameters: Takes in the file pointer which was set in main
//
// Description: This function checks to see if the file pointer
// set in main is NULL. If it is NULL, the message "File did not
// open!" will be printed out to the user.
//-------------------------------------------------------------------
void checkFile(FILE* file){

    if (file == NULL){
        printf("File did not open!");
        return;
    }

}
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
void checkArguments(int argc){

    // If argc is not equal to 2, which is our preferred set of
    // arguments for this program
    if (argc != 2){
        printf ("Not enough command line arguments!!\n");
    }

return;
}
//-------------------------------------------------------------------






//-------------------------------------------------------------------
// Return: This function returns void
//
// Parameters: Takes in the file pointer which was set in main
//
// Description: This function goes through the file and checks that
// each opening bracket has a closing bracket. It will also print out
// the total number of unmatched brackets
//-------------------------------------------------------------------
void checkBraces(FILE* file){

    // Character that we will use to read our
    // file char by char
    char fileChar;

    // This int will act as a indicator so that
    // we know if a bracket is closed or not.
    // 0 will be used to indicate that our
    // brackets are closed, anything larger
    // will indicate that an open bracket(s) has
    // been set and still needs to be closed.
    int bracketStat = 0;



        // The fileChar character will go through
        // the file char by char so we can analyze
        // our brackets. After reaching the end of
        // the file (EOF), the loop will stop.
        while ((fileChar = fgetc(file)) != EOF){

            // If it's an open bracket, bracketStat increases
            // by 1
            if ((fileChar == '{')){
                bracketStat++;
            }

            // If it's a close bracket, and bracketStat already
            // equals 0, print unmatched bracket, add to count
            if (fileChar == '}'){
                if (bracketStat == 0){
                    printf("Found a closing bracket before an opening bracket!\n");
                }
                // If it's a close bracket, and bracketStat does not
                // equal zero, decrease bracketStat by 1
                else if (bracketStat != 0){
                    bracketStat -= 1;
                }
            }
        }


    //Outputting the total number of unmatched brackets
    printf ("\nThere were %d unmatched opening brackets.\n", bracketStat);

return;
}
//-------------------------------------------------------------------
