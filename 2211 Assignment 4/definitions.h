/* CS2211a 2020 */
/* Assignment number: 4 */
/* Your name: Julia Anantchenko */
/* Your student number: 251097696 */
/* Your UWO User Name: janantch */
/* Date Completed: Nov 16 2020 */

// if undefined, defines
#ifndef dH
#define dH

// word structure used for word related data
typedef struct wordStruct {
    char *c;
    int numChar;
    int pos;
} word;

// sentence structure used for storing sentence related data
typedef struct sentenceStruct {
    word *w;
    int line;
    int numWords;
} sentence;

// the pointer which will hold all the sentences
sentence* sPtr;

// the char array to hold the input string
char str[1000];

// the number of sentences
int numSentence;

// the number of words in the sentence
int numWord;

#endif // dH