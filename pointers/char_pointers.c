//char pointers program

#include <stdio.h>
#include <stddef.h>

int main(){

    char myChar = 'J';
    char *pmyChar = NULL;

    pmyChar = &myChar;

    printf("Address of myChar variable : %p", &myChar);
    printf("\nValue of myChar: %c", myChar);

    printf("\n\nAddress of the char pointer : %p", (void*)&pmyChar);
    printf("\nValue of the char pointer : %p", pmyChar);
    printf("\nActual value that the pointer is pointing to : %c", *pmyChar);


    char myOtherChar =  'U';
    char *const pMyOtherChar  = &myOtherChar;

    printf("\n\nAnother pointer variable, this time a constant.\n");

    *pMyOtherChar = 'I';       //should end as an error

    printf("\nActual value that the pointer is pointing to : %c", *pMyOtherChar);
    

    return 0;
}