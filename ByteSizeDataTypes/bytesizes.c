// size of operator to show the size used by different data types in C programming.
// format specifiers

//display size of the following types int, char, long, long long, double, long double
//use the %zd format specifiers to format each size.
//Use the sizeof operator and test it on different computers or OS to check for the differences

#include <stdio.h>
#include <stdlib.h>

int main(){

    int myInt;
    char myChar;
    long myLong;
    long long myLongLong;
    double myDouble;
    long double myLongDouble;

    printf("This program will show the byte size of each data types in C on Windows 10 64 bits. \n\n");

    printf("The size of int data type is: %ld bytes\n", sizeof(myInt));
    printf("The size of char data type is: %c bytes\n", sizeof(myChar));
    printf("The size of long data type is: %ld bytes\n", sizeof(myLong));
    printf("The size of long long data type is: %ld bytes\n", sizeof(myLongLong));
    printf("The size of double data type is: %e bytes\n", sizeof(myDouble));
    printf("The size of long double data type is: %e bytes\n", sizeof(myLongDouble));

    return 0;
}
