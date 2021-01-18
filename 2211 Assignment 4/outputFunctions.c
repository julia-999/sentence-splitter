/* CS2211a 2020 */
/* Assignment number: 4 */
/* Your name: Julia Anantchenko */
/* Your student number: 251097696 */
/* Your UWO User Name: janantch */
/* Date Completed: Nov 16 2020 */

// includes the main header file
#include "headers.h"

// print each and every word out, each word on a single line, in the order entered by the user. 
void printWord() {

    printf("\nThis is all the words printed out one line at a time: \n");

    // for loops that go through the sentences, words and finally chars
    for (int i = 0; i < numSentence; i++) {
        for (int j = 0; j < sPtr[i].numWords; j++) {
            for (int k = 0; k < sPtr[i].w[j].numChar; k++) {
                printf("%c", (sPtr[i].w[j].c[k]));
            }
            printf("\n");
        }
    }

}

// print out each sentence in its entirety in the order it was entered by the user. 
void printSentence() {

    printf("\nThis is all the words printed out on the same line as entered: \n");

    // for loops that go through the sentences, words and finally chars
    for (int i = 0; i < numSentence; i++) {
        for (int j = 0; j < sPtr[i].numWords; j++) {
            for (int k = 0; k < sPtr[i].w[j].numChar; k++) {
                printf("%c", (sPtr[i].w[j].c[k]));;
            }
            printf(" ");
        }
        printf("\n");
    }
}

// finds a word, prints out which line and position the word was found in or states message saying it doesn't exist
void printWordSearch() {
    
    // variables to track if there is a match
    int match = 0;
    int matchTotal = 0;

    // for loops that go through the sentences, words and finally chars
    for (int i = 0; i < numSentence; i++) {
        for (int j = 0; j < sPtr[i].numWords; j++) {
            
            // sets match to 1, will be changed if the word compared does not match
            match = 1;
            
            for (int k = 0; k < sPtr[i].w[j].numChar; k++) {
                if (str[k] != sPtr[i].w[j].c[k]) {
                    match = 0;
                }
            }
            
            // prints the word and details if it is found
            if (match == 1) {
                matchTotal++;
                printf("%s found in line %d position %d\n", str, sPtr[i].line+1, sPtr[i].w[j].pos+1);
            }
        }
    }
    
    // if no matches were made, prints a message
    if (matchTotal == 0)
        printf("%s was not found in this file\n", str);
    
}