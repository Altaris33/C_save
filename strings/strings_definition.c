// Program that use the notion of strings in C
// Author : J LAERA
// Date : 23/02/2020

#include <stdio.h>

int main(void){
    
    char str1[] = "To be or not to be";
    char str2[] = ",that is the question";
    unsigned int count = 0;                 //Stores the string length

    //increment count until we reach the terminating character
    while(str1[count] != '\0')
    {
        ++count;
    }

    printf("The length of the string \"%s\" is %d characters.\n", str1, count);

    //reset count for the next string and redo looping
    count = 0;

    while(str2[count] != '\0')
    {
        ++count;
    }

    printf("The length of the string \"%s\" is %d characters.\n", str2, count);

    return 0;
}

