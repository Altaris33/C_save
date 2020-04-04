//scanf with pointers small program

#include <stdio.h>
#include <stddef.h>

int main(){


    int value = 0;
    int *pValue = &value;                //set pointer to refer to value

    printf("\nInput an integer : ");
    scanf("%d", pValue);                 //read into value via pointer

    printf("\nYou entered %d.\n", value);   //output the value entered

    return 0;
}

