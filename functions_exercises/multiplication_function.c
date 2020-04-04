//Program that performs multiplications

//Author : Jérémie LAERA
//Date : 08/02/2020

#include <stdio.h>

int multiplyTwoNumbers(int x, int y);

int main(void){

    int resultMultiplication = 0;
    resultMultiplication = multiplyTwoNumbers(8,6);
    printf("The result is : %d.", resultMultiplication);

    return 0;

}

int multiplyTwoNumbers(int x, int y){
    int resultMultiplication = x * y;
    return resultMultiplication; 
}


