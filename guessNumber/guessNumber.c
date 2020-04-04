//while loop code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int randomNumber = 0;
    int guess = 0;
    int maximumNumberOfGuesses;
    time_t t;

    //initialize the random generator (0 to 20)
    srand((unsigned) time(&t));

    //get the random number
    randomNumber = rand() % 21;

    printf("This is a guessing game.");
    printf("\nI have chosen a number between 0 and 20 which you must guess. \n");

    for(maximumNumberOfGuesses = 5; maximumNumberOfGuesses > 0; --maximumNumberOfGuesses){
        printf("\nYou have %d tr%s left.", maximumNumberOfGuesses, maximumNumberOfGuesses == 1 ? "y": "ies");
        printf("\nEnter a guess :");
        scanf("%d", &guess);

        if(guess == randomNumber){
            printf("\nCongratulations. You guessed the correct number!\n");
            break;
        //invalid input 
        }else if(guess < 0 || guess > 20){
            printf("Number must be between 0 and 20...\n");
        }else if (randomNumber > guess){
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
        }else if (randomNumber < guess){
            printf("Sorry, %d is wrong. My number is lower than that.\n", guess);
        }

    }

    printf("\nYou have had five tries and failed. The number was %d\n", randomNumber);

    return 0;
}



