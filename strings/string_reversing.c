// PROGRAM that works on string functions
// write a program that displays a string in reverse order
//  - should read input from the keyboard
//  - need to use the strlen string function
// alternative with gets() function to read an input string


//write a program that sorts the strings of an array using a bubble sort
//  -   need to use the strcmp and strcpy functions
//  -   asks the user to input a string of number or word and sort them as output.



//scanf will read a string until a space
//gets will read the full string 

#include <stdio.h>
#include <string.h>

int main(){

    char wordInput[40], wordRead[40];
    int begin, end, count;

    printf("Please enter a word : ");
    scanf("%s", wordInput);
    printf("Here is your word: |%s|.\n And its length: %d", wordInput, strlen(wordInput));

    while(wordInput[count] != '\0')
    {
        count++;
    }

    end = count - 1;

    for(begin = 0; begin < count; begin++)
    {
        wordRead[begin] = wordInput[end];
        end--;
    }

    wordRead[begin] = '\0';

    printf("\nThe reverse of your string is : |%s|.\n", wordRead);

    return 0;
}

