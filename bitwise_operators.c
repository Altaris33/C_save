/*

Author: Altaris
Aim: This aims at manipulating bitwise operators and bits in numbers.
Bitwise are sueful to process larges amounts of data

*/

#include <stdio.h>

int main(){

    unsigned a = 8;   //0011 1100 in binary
    unsigned b = 67;   //0000 1101 in binary
    int result = 0;    //holds the result of the bitwise operations
    int resultOr = 0;  //holds the result of the bitwise operations for Or
    int resultXor = 0; //holds the result for the bitwise Xor operator 
    int resultShift = 0;
    int resultComplement = 0; //reversing every value of a variable 
    int shiftB = 0;         //var to test out right shifting

    result = a & b;   //if a = 1 and b = 1 that bit will be turned on
                       //here both a and b first ibt is 0. To return true here both have to be 1. This it not the case.
                       // applying this for every pair of bits -> //0000 1100

    resultOr = a | b;  //same application with Or bitwise operator, bits are turn off if at least one of them is  =1 in the comparison.
                       // resultOr = 0011 1101 => 61 in decimal.    
    resultXor = a ^ b; //XOR operator: the result is 1 if the corresponding bits of 2 operands are opposite.      

    resultShift = a << 1;       //shift bits and move them from 1 slot to the left
    shiftB = b >> 2;

    resultComplement = ~a;                    

    //the result from this bitwise operation will be printed converted as a decimal
    printf("The result is in decimal: %d\n", result);     
    printf("The result for the or operator in this case is: %d\n", resultOr); 
    printf("The result for the XOR bitwise operator is: %d\n", resultXor); 
    printf("Complement: %d\n", resultComplement);
    printf("Shift to the left: %d\n", resultShift);   
    printf("Shift right result in decimal : %d\n", shiftB);         

    return 0;
}

