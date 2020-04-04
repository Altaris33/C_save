// write a function that counts the number of characters within a string (length) without using strlen()
    //function should take a character array as a parameter
    //should return an int (the length)

//write a function that concatenates 2 character strings
    //cannot use the strcat library 
    //function should take 3 parameters: 
        // char result[]
        //const char str1[]
        //const char str2[]
        //can return void    

//write a function that determines if two strings are equal
    //cannot use the strcmp library
    //function should take two const char arrays as paramters and return a Boolean of true if they are equal and false otherwise (\0) to know when to stop       

//PROGRAM
//CONST CHAR becasue we do not want the paramters to change

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int str_length = 40;

//function declarations (prototype)
int stringCounter(const char strToCount[]);
void concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main(){


    const char word1[] = "captain";
    const char word2[] = "kirby";
    const char word3[] = "Falcon";
    const char word4[] = "Link";
    const char word5[] = "Falcon";

    char result[50];


    printf("\n%d\t %d\t %d\t %d\n", stringCounter(word1), stringCounter(word2), stringCounter(word3), stringCounter(word4));
    
    concat(result, word1, word2);    

    printf("\n%s", result);

    printf("\n%d\n", equalStrings(word1, word3));
    printf("%d\n", equalStrings(word3, word5));

    return 0;
}

int stringCounter(const char strToCount[])
{
    int count = 0;
    
    while(strToCount[count] != '\0')
    {
        count++;
    }
    return count;
}

void concat(char result[], const char str1[], const char str2[])
{
    int i, j;

    for ( i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }

    for ( j = 0; str2[j] != '\0'; ++j)
    {
        result [ i + j] = str2[j];
    }
    result[i+j] = '\0';
}

// returns 1 if ture
// returns 0 if false
bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isEquals = false;

    while ( s1[i] == s2[i]  && s1[i] != '\0' && s2[i] != '\0')
        ++i;
    if (s1[i] == '\0' && s2[i] == '\0')
        isEquals = true;
    else
        isEquals = false;
    return isEquals;        
}

