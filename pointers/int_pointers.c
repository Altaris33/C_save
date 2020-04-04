//first pointer program

#include <stdio.h>
#include <stddef.h>

int main(){
    int number = 15;
    int *ppointer = &number;
    int *pnumber = NULL;
    int result = 0;

    pnumber = &number;
    result = *ppointer + 15;

    printf("\n\tThe result is : %d.", result);
    printf("\n\tAddress of the  number variable: %p", &number);

    printf("\n\tnumber variable = %i.",ppointer);
    printf("\n\tpointer's size is %d bytes.", (int)sizeof(ppointer));   //outputs the size of the pointer variable

    printf("\n\tAddress of pnumber: %p\n", (void*)&pnumber);   //Output the address of the pointer variable
    printf("\n\tSize in bytes of the pnumber pointer variable: %zd bytes.", sizeof(pnumber));  //output the size in bytes
    printf("\n\tValue of the pnumber pointer variable: %p", pnumber);                         //output the value(an address to another declared variable)
    printf("\n\tValue pointed to: %d\n", *pnumber); //value at the address stored in the pointer variable, %d since it is an int

    return 0;
}

