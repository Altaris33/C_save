#include <stdio.h>
#include <string.h>

int main(){

    //strcat()
    printf("\n----------------------------\n");
    printf("String concatenation using strcat()");
    char source_string[60];
    char destination_string[80];

    strcpy(source_string, "We played Smash Bros twice.");
    strcpy(destination_string, "Log of today : ");

    strcat(destination_string, source_string);

    printf("Final concatenated string : |%s|", destination_string);


    //strncat()
    printf("\n----------------------------\n");
    printf("String concatenation using strncat()");
    char source_string2[60];
    char destination_string2[80];

    strcpy(source_string2, "We played Smash Bros twice.");
    strcpy(destination_string2, "Log of today : ");

    strncat(destination_string2, source_string2, 10);

    printf("Final concatenated string 2 : |%s|", destination_string2);

    return 0;
}

