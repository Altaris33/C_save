//while loop code
#include <stdio.h>
#include <stdlib.h>

int main (){

    /* local variable definition */
    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for(enum Day day = Monday; day <= Sunday; ++day){
        if(day == Wednesday)
            continue;
        printf("Today is not Wednesday.\n");    
    }

    return 0;
}



