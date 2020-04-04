//pointers ot long (integers) values
//use %ld format specifier for printing long decimal values (long)


#include <stdio.h>
#include <stddef.h>

int main(){

    long num1 = 0L;
    long num2 = 0L;
    long *pNum = NULL;

    pNum = &num1;
    *pNum = 10L;

    ++num2;
    num2 += *pNum;

    printf("\nnum1 = %ld \nnum2 = %ld \n*pNum = %ld \n*pNum + num2 = %ld\n",
                        num1, num2, *pNum, *pNum + num2);

    printf("Num1 is a long value and takes %d bytes.\n", sizeof(num1));                    

    return 0;
}

