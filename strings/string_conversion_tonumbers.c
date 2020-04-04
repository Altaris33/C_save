//Program that convert a given string to a numeric type

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    double value = 0;

    char str[] = "3.5 2.5 1.25 14.2";   //string to be converted
    char *pstr=  str;                   //pointer to the string to be converted           
    char *ptr = NULL;                   //pointer to character position after conversion

    while(true)
    {
        value = strtod(pstr, &ptr);     //convert starting at pstr
        if(pstr == ptr)                 // pstr stored if no conversion so we are done looping
          break;
        else
        {
            printf(" %f\n", value);       //Output the resultant value and store start for next conversion
            pstr = ptr;
        }
          

    }

    return 0;
}

