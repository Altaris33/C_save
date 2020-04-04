//This program sahll retrieve the greatest common divisor of 2 non-negative integer values and return the result (common factor)
//It will also return absolute values
//Lastly, it will return square roots.
//Takes 2 ints as parameters

//Author : Jérémie LAERA
//Date : 09/02/2020

#include <stdio.h>
#include <stdlib.h>

int greatestCommonDivisor(int u, int v);
float getAbsValue(float number);
float squareRoot(float originalNumber);


int main(){

    int resultAbs= 0;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absoluteValueResult = 0.0;

    //testing gcd function
    int resultGcd = 0;
    resultGcd = greatestCommonDivisor(150, 35);
    printf("The greatest common divisor of 150 and 35 is : %d\n", resultGcd);

    resultGcd = greatestCommonDivisor(1026, 406);
    printf("The greatest common divisor of 150 and 35 is : %d\n\n\n", greatestCommonDivisor(1026, 406));

    // Testing absolute value function
    resultAbs = getAbsValue(f1);
    printf("Absolute value of number : %.2f\n", resultAbs);
    printf("f1 = %.2f\n", f1);

    resultAbs = getAbsValue(f2) + getAbsValue(f3);
    printf("resultAbs = %.2f\n", resultAbs); 

    resultAbs = getAbsValue((float) i1);
    printf("resultAbs = %.2f\n", resultAbs);

    resultAbs = getAbsValue(i1);
    printf("resultAbs = %.2f\n", resultAbs);

    printf("%.2f\n\n\n", resultAbs (-6.0) / 4);
    
    //testin sqrt function
    printf("Testing sqrt function : \n");
    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(9));
    printf("%.2f\n", squareRoot(19));

    return 0;
}

int greatestCommonDivisor(int u, int v)
{
    int temp;
   
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp
    }
    
    return u;
}

float squareRoot(float originalNumber)
{
    
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;
    if (x < 0)
    {
        printf("Negative argument to squareRoot.\n");
        returnValue = -1.0;
        return -1;
    }
    else
    {
        while (getAbsValue (guess * guess - x) >= epsilon)
        {
            guess = (x / guess + guess) / 2.0;
            returnValue = guess;
        }
    }

    return returnValue;

    
}

float getAbsValue(float number)
{
    
    if (number < 0)
    {
        number = -number;
    }
    return number;
    
}

