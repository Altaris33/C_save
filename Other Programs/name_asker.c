#include <stdio.h>

int main(){

    char name [20];
    char dateOfBirth [26];
    char number [14];

    printf("Please enter your name, date of birth and phone number : \n");

    scanf("%s %s %s",  &name, &dateOfBirth, &number);

    printf("\nYour name is : %s \n", name);
    printf("You date of birth is : %s \n", dateOfBirth);
    printf("Your number is : %s \n", number );
    return 0;
}
