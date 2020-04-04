#include <stdio.h>

int main()
{
    //2 steps for enums: defining the type and creating variables out of it
    enum gender {male, female, hybrid};
    //creating a variable
    enum gender myGender;
    //assigning a valid value from the definition of enum
    myGender = male;

    enum gender anotherGender = female;

    //bool isMale = (myGender== anotherGender);
    //printf()

    char myCharacter = 'j';

    char test = '\n';

    printf('%c', myCharacter); 

//directions enums exo
    enum directions {north, south, east, west, front, back };

    enum directions controller;
    controller = south;


    return 0;
}