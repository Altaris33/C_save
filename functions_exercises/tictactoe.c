//Program that will create a Tictactoe game
//3x3 Grid and the game is played by 2 players, who takes turns and use X and O.
//Array to depicture the grid (array of type char of 10 elements, each one is a coord on the board)

//Author : Jérémie LAERA
//Date : 10/02/2020

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
int choice, player;

int checkForWin();
void displayBoard();
void markBoard(char mark);

int main()
{

    int gameStatus;

    char mark;

    player = 1;

    do
    {
        displayBoard();
        player = (player %2) ? 1 : 2;      //determine the right player and changes turns

        printf("Player %d, enter a number please: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';     //determine the mark given to each player

        markBoard(mark);
        gameStatus = checkForWin();

        player++;         //change player's turn

    }while(gameStatus == -1);
    if (gameStatus == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");
        
    return 0;
}

/*
Function to return game status 
1 for game is over with result and 
-1 for game is in progress, 
0 game is over and no result*/
// DIVIDE AND CONQUER and testing small chunks of the board
int checkForWin(){

    int returnValue = 0;

    if(square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1; 
    }
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;
    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;
    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;
    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;      
    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;
    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;
    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;
    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' &&
            square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' &&
            square[9] != '9')
            returnValue = 0;    
    else
        returnValue = -1;
    return returnValue;                 
}

// Function that draws board of Tic Tac Toe with player mark
void displayBoard()
{
        system("cls");                                    //clear the screen (check library)
        printf("\n\nTic Tac Toe\n\n");
        printf("Player 1 (X) - Player 2 (O) \n\n\n\n");

        printf("       |       |     \n");
        printf(" %c |   %c |   %c \n", square[1], square[2], square[3]);

        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf(" %c |   %c |   %c \n", square[4], square[5], square[6]);

        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf(" %c |   %c |   %c \n", square[7], square[8], square[9]);

        printf("       |       |     \n");
}

/**************************************
 * Set the board with the correct character, x or o in the correct spot in the array
 * ***********************************/
void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;
    else if (choice == 2 && square[2] == '2')     
        square[2] = mark;
    else if (choice == 3 && square[3] == '3')     
        square[3] = mark;
    else if (choice == 4 && square[4] == '4')     
        square[5] = mark;
    else if (choice == 5 && square[5] == '5')     
        square[5] = mark;
    else if (choice == 6 && square[6] == '6')     
        square[6] = mark;
    else if (choice == 7 && square[7] == '7')     
        square[7] = mark;
    else if (choice == 8 && square[8] == '8')     
        square[8] = mark;
    else if (choice == 9 && square[9] == '9')     
        square[9] = mark;  
    else{
        printf("Invalid move");

        player--;
        getch();        //pausing the program
    }                              

}