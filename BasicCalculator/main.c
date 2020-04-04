/*
This program is able to make calculations based on the user input
Author: Altaris33
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double firstNumber, secondNumber;

    printf("Enter an operator ( +, -, *, /): ");
    scanf("%c", &operator);

    printf("\nEnter two operands : ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch(operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber + secondNumber);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber * secondNumber);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber / secondNumber);
        break;

        //if the operator does not match any case constant (+, -, *, /)
    default:
        printf("Error! The operator is not valid for making calculations");
    }
    return 0;
}
