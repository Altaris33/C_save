/* Auhtor J LAERA */
/* Aim: The program will make a user guess a random number between 0 and 20. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //creating a time variable
    time_t t;

    //initializing the random number generator
    srand((unsigned) time(&t));

    //get the random number between 0 and 20 and storing it an int variable
    int generatedNumber = rand() % 21;

    //user number input variable
    int userNumber;
    

    printf("This is a guessing game. \nI have chosen a number between 0 and 20 which you must guess. ");
    

    //checking if the number entered by user is different from generated number
    for(int trials = 5; trials > 0; trials--){

        printf("You have %d trials left.", trials);
        printf("\nEnter a guess:");
        scanf("%d", &userNumber);
        if(trials > 0){
            if (userNumber >= generatedNumber){
                printf("Sorry, %d is wrong. My number is less than that.", userNumber);
            }else{
                printf("Sorry, %d is wrong. My number is more than that.", userNumber);
            }
        }else{
            printf("Congratulations. You guessed the correct number!"); 
        }
    }
    

    return 0;
}