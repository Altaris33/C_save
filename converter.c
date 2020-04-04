/*
Author Altaris on 29/07/2019
This program aims at converting an amount of days in years, weeks and days as a whole
*/

#include <stdio.h>


int main(){

    int days, years, weeks;

    days = 1658;

    //converting days to years, weeks & days
    years = days/365;
    weeks = (days % 365)/7;
    days = days - ((years*365) + (weeks*7));

    printf("Years: %d\n:", years);
    printf("Weeks: %d\n:", weeks);
    printf("Days: %d\n:", days);

    return 0;
}
