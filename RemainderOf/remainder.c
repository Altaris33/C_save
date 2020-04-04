// this program just uses if else statements to control remainders in a division.
#include <stdio.h>
#include <stdlib.h>

int main(){

    int theNumber, sign;
    int position;
    int side = 8;

    printf("Enter a number to test: ");
    scanf("%i", &theNumber);

    //remainder = theNumber % 2;

    if (theNumber < 0){
        sign = -1;
    }else if (theNumber == 0) {
        sign = 0;
    } else {
        sign = 1;   
    }
    printf("The number is this one and has this sign ==>  %i \n", sign);

    //checking for ternary operator 
    printf("Enter your position: ");
    scanf("%i", &position);
    return position > side ? position  : side ;

    printf("Position is : %i", position);
    
    return 0;
}

