#include <stdio.h>
#include <string.h>

int main(){

    // length of a string strlen()
    char myString[] =  "Super smash bros melee in C";
    char string2[] = "My name is Captain";
    char temp[50];
    char firstString[] = "This is the first time.";
    char input[80];

    // copying the content of string2 inside temp using temp size aside from the terminating character
    //sizeof allows to see how many bytes are inside a character strings
    //strncpy(first param is the destination, second is the source, third is a size specifier)
    strncpy(temp, string2, sizeof(temp) - 1);

    printf("Here is the string about Smash Bros : \n%s", myString);
    printf("The temp string now is : %s", temp);
    printf("The second string's length is : %d", strlen(string2));
    printf("\nThe length of the string regarding Smash Bros is : %d", strlen(myString));

    //copying a string strcpy() -> 2 params : the string and the content to copy inside of it
    char src[50], dest[50];
    //concat a string using enhanced strncat()
    char srccat[50], destcat[50];

    strcpy(src, "This is source");
    strcpy(src, "This is a destination");
    strncat(dest, src, 15)                    //copy 15 characters length of src to dest

    printf("Final destination string : |%s|\n", dest);
    // better : strncopy() -> third argument : number of character to copy to be sure
    memset(dest,'\0', sizeof(dest));
    strcpy(src, "Hello how are you doing?");
    strncpy(dest, src, 10);                     //will copy the 10 first characters of src inside dest

    /*
    COMPARISON
    */

    //strcmp() compare strings content  == equivalent of ==
    //== in C would return memory address not a boolean
    // returns 0 if the 2 strings are equal
    // returns < 0 if string 1 is < string 2 ex A is less than B, B is less than C...
    // returns > 0 is string 1 is > string 2
    //capitals is always less than lowercase
    printf("String comparison : (\"A\" & \"A\"");    //will return 0 since A == A
    printf("%d", strcmp("A","B"));

    printf("String comparison : (\"A\" & \"B\"");    //will return < 0 cause A is < B in ASCII
    printf("%d", strcmp("A","B"));

    printf("String comparison : (\"B\" & \"A\"");    //will return > 0 cause B is > A in ASCII
    printf("%d", strcmp("B","A"));

    //strncmp() compares strings until they differ or until it has compared a number of characters
    //specified by a thrid argument

    /*
    CONCATENATION
    */

    //string concatenation
    //strcat() function takes 2 arguments: a cpy of the second string is tacked onto the first one
    //the combined becomes the new first string. The second is not altered.
    //strcat() does not check if the second string will fit in the first (risk of failed allocation)
    //strncat() also takes in a third argument, the size specifier
    printf("Enter a string to be concatenated : ");
    scanf("%s", input);
    printf("\nThe string %s concatenated with %s is : \n", firstString, input);
    printf("%s", strcat(input,firstString));



    return 0;
}