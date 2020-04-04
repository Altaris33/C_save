/* Author Jeremie LAERA
*/

// This program aims at displaying names of companies using enum type.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //definition of the enum
    enum companies{GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};

    //declaration of variables from the enum created
    enum companies xerox = XEROX;
    enum companies google = GOOGLE;
    enum companies ebay = EBAY;
    enum companies facebook = FACEBOOK;

    //printing out the values
    printf("The value of xerox is : %d\n", xerox);
    printf("The value of google is : %d\n", google);
    printf("The value of ebay is : %d\n", ebay);
    printf("And the value of Facebook iiissss : %d\n", facebook);


    return 0;
}
