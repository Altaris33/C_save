//test of seeing memory allocation
#include <stdio.h>
#include <stdlib.h>

int main(){

    int var1;
    int var2;
    double midValue;
    char var3[10];

    printf("Adress of var1 variable: %x\n", &var1);
    printf("Adress of var2 variable: %x\n", &var2);
    printf("Address of var3 variable: %x\n", &var3);

    return 0;
}