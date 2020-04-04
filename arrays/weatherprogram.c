//weather program

//Author : J LAERA
//Date : 01/02/2020

#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main(){

    //2D arrays - rainfall data for 2011-2015 (5 years)
    float weatherarray [YEARS][MONTHS] = 
    {
        {4.3,4.3,4.2,4.4,4.1,5.1,5.1,4.2,4.6,4.8,5.1,5.2},
        {4.8,4.3,4.2,4.4,4.1,5.1,5.1,4.2,4.6,4.5,5.1,5.2},
        {4.3,6.3,4.2,4.4,4.1,5.1,5.1,4.2,4.6,4.5,5.1,5.2},
        {4.3,4.3,4.5,4.4,4.1,5.1,5.1,4.2,4.6,4.7,5.1,5.2},
        {4.3,4.3,4.2,4.4,4.6,5.1,5.1,4.2,4.6,4.5,5.1,5.2},
    };

    int year, month;
    //average of a year rainfall quantity (in inches as a float value)
    float  subtotal, total = 0.0;

    printf("YEAR\t\tRAINFALL  (inches)\n");
    

    for(year=0, total = 0; year<YEARS; year++){
        for(month=0, subtotal=0; month < MONTHS; month++){
            subtotal += weatherarray[year][month];
        }
        printf("%5d \t%15.1f\n", 2010 + year, subtotal);
        total += subtotal;
    }

    printf("\nThe yearly average is : %.1f inches.\n\n", total/YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");

    for(month = 0; month< MONTHS; month++)
    {
        for(year = 0, subtotal = 0; year < YEARS; year++)
        {
            subtotal = weatherarray[year][month];
        }
        printf("%4.1f  ", subtotal/YEARS);
    }

    printf("\n");

    return 0;
}