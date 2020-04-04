/*
  Author: Altaris
  Aim: Making time conversion -> convert minutes to years an days
*/


#include <stdio.h>

int main(){

    //declarations of variables and initialization, convention in camelCase
    int minutesEntered = 0;
    double minutesInYear = 0.0;
    double years = 0.0;
    double days = 0.0;

    
    //asking the user to input a value, stored as a whole number (integer) provide the ampersand for scanf as a reference th the variable
    printf("Please enter a value to represent minutes in time: ");
    scanf("%d", &minutesEntered);

    //performing calculations and converions 
    

    minutesInYear = (60 * 24 * 365);   // or minutesEntered * 525600 (60 * 24 * 365) = 525600
    years = (minutesEntered / minutesInYear);
    days =  ((minutesEntered / 60.0) / 24.0);    // 60 minutes in an hour and 24 hours in a day

    //format specifiers to display the correct format for the numbers
    printf("The value of %d minutes in days is:  %f years\n", minutesEntered, years);
    printf("The value of %d minutes in years is:  %f days\n", minutesEntered, days);

    //or printf("The value of %d minutes in years is:  %f days and %f years\n", minutesInYear, years, days);


    

    return 0;
}