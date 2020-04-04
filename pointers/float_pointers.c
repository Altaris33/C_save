//pointers that works on float program

#include <stdio.h>
#include <stddef.h>

int main(){

    float distance, *pdistance = NULL;
    float delay;
    
    printf("\nFloat pointers program!!");

    distance = 12.2;

    printf("\n\tCurrent distance set to: %f", distance);
    printf("\n\tDistance variable address is: %p", &distance);

    printf("\n\tAddress of pdistance: %p", (void*)&pdistance);
    printf("\n\t\tValue of pdistance: %d", *pdistance);

    return 0;
}


