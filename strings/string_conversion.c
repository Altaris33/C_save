//Program that will play with string conversions
// two main methods are available: toupper() and tolower()

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char my_buff[100];    //buffer for user input
    char substring[40];   //input for string sought 

    printf("Enter a string to be searched and it must be less than %d characters.\n", 100);
    scanf("%s", my_buff);

    printf("Enter the string sought and it must be less than %d characters.\n", 40);
    scanf("%s", substring);

    printf("\nFirst string entered:\n%s\n", my_buff);
    printf("\nSecond string entered:\n%s\n", substring);

    int i;

    //converting both strings to uppercases
    for(i = 0; (my_buff[i] = (char)toupper(my_buff[i])) != '\0'; ++i);
    for(i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; ++i);
    
    //use of strstr because both strings are now in uppercase
    printf("The second string %s found in the first.\n", ((strstr(my_buff, substring) == NULL) ? "was not" : "was"));

    return 0;
}


