// pointer challenge

#include <stdio.h>
#include <stddef.h>

int main(){

    int variable = 12;
    int *pvariable = NULL;
    pvariable = &variable;

    printf("\n\nValue of variable : %d", variable);
    printf("\nAdress of the integer variable : %p", &variable);

    printf("\n\n\tAddress of the pvariable : %p", (void*)&pvariable);
    printf("\n\tValue pointed to by pvariable : %d", *pvariable);
    printf("\n\tValue of the pvariable (an address): %p", pvariable);
    printf("\n\tSize of the pvariable : %d bytes", (int)sizeof(pvariable));


    return 0;
}