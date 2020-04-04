//String search functions program

#include <stdio.h>
#include <string.h>

int main(){

    //each pointer will start at the index where the occurrences are found
    //search an occurrence of a character in a string
    char string1[] = "My name is Captain Falcon";
    char charToBeFound = 'F';
    char *pGot_char = NULL;
    pGot_char = strchr(string1, charToBeFound);           //store address where ch is found

    printf("The character found is at %d.", pGot_char);

    //search a substring inside a string (very useful)
    char stringSource[] = "One times two is two.";
    char word[] = "is";
    char *pGot_word = NULL;
    pGot_word = strstr(stringSource, word); //pGot_word = "is two"

    printf("\nThe substring found for the word |\"%s\"| inside the string |\"%s\"|is : \"%s\"", word, stringSource, pGot_word);

    return 0;
}

