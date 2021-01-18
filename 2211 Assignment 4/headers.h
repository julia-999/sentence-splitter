/* CS2211a 2020 */
/* Assignment number: 4 */
/* Your name: Julia Anantchenko */
/* Your student number: 251097696 */
/* Your UWO User Name: janantch */
/* Date Completed: Nov 16 2020 */

// if undefined, defines
#ifndef mH
#define mH

// includes some c library header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// includes the definitions header
#include "definitions.h"

// the functions in other c files:

void promptLine();
int promptWord();

void printWord();
void printSentence();
void printWordSearch();

word * storeWords();
void storeLines();
void findWord();

#endif // mH