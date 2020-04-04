//for loop code

#include <stdio.h>
#include <stdlib.h>

int main (){

    for (int i = 1, j = 2; i <= 6; i++, j = j + 2){
        printf(" %5d", i*j);
    }

    return 0;
}

