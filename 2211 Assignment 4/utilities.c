/* CS2211a 2020 */
/* Assignment number: 4 */
/* Your name: Julia Anantchenko */
/* Your student number: 251097696 */
/* Your UWO User Name: janantch */
/* Date Completed: Nov 16 2020 */

// includes the main header file
#include "headers.h"

// goes through a sentence, creating and returning a word pointer with the required information
word * storeWords() {

    // creates a word pointer and allocates memory
    word* wPtr;
    wPtr = (word*) calloc (5, sizeof(word));

    // splits the string into words based on whitespace
    char *splitPtr = strtok(str, " ");
    numWord = 0;

    // loops while there are words 
    while (splitPtr != NULL) {

        // creates a char pointer and allocates memory
        char* cPtr;
        cPtr = (char*) calloc ((strlen(splitPtr)+1), sizeof(char));

        // adds each char of the string to the char pointer
        for (int i = 0; i < strlen(splitPtr); i++) {
            cPtr[i] = splitPtr[i];
        }

        // updates word pointer information
        wPtr[numWord].c = cPtr;
        wPtr[numWord].numChar = strlen(splitPtr);
        wPtr[numWord].pos = numWord;

        // moves onto the next word
        splitPtr = strtok(NULL, " ");
        numWord ++;
        
        // reallocates memory
        wPtr = (word*) realloc (wPtr, ((numWord+1)*sizeof(word)));

    }

    // returns the word pointer
    return wPtr;

}

// stores the lines entered by a user as a sentence
void storeLines() {

    // allocates memory for the sentence pointer
    sPtr = (sentence*) calloc (1, sizeof(sentence));
    numSentence = 0;

    // loops while the input is not blank
    do {

        // prompts the user
        promptLine();
        
        // breaks if nothing was entered
        if (str[0] == '\0')
            break;

        // updates the sentence pointer information
        sPtr[numSentence].w = (storeWords());
        sPtr[numSentence].line = numSentence;
        sPtr[numSentence].numWords = numWord;

        numSentence++;
        
        // reallocates memory
        sPtr = (sentence*) realloc (sPtr, ((numSentence+1)*sizeof(sentence)));

    } while (str[0] != '\0');

}

// finds a word entered by the user in the sentence
void findWord() {

    // loops while the input is not blank
    do {

        // prompts the user
        printf("\n");
        promptWord();
        
        // returns if nothing was entered
        if (str[0] == '\0')
            return;
        
        // prints the results
        printWordSearch();

    } while (str[0] != '\0');
    
}