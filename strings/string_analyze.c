//string additional functions 
//need to include the header <ctype.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    //Input buffer (filter of quantity) that will store the input
    char buff[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunctuations = 0;

    printf("Enter an interesting string to be analyzed of less than %d character:\n", 100);
    scanf("%s", buff);

    int counter = 0;

    while(buff[counter])
    {
        if(isalpha(buff[counter]))
            ++nLetters;
        else if(isdigit(buff[counter]))
            ++nDigits;
        else if(ispunct(buff[counter]))
            ++nPunctuations; 
        ++counter;           
    }

    printf("\nYour string contains %d characters, %d numeric values and %d punctuation marks.\n", nLetters, nDigits, nPunctuations);

    return 0;
}

