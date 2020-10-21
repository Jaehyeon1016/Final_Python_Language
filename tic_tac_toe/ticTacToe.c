/*
* ticTacToe.c
*/

#include <stdio.h>
#include "ticTacToe.h"

/* create the board; make sure it starts off empty */
void initBoard(void)
{
	int row;
	int col;

	for(row=0; row < BOARD_SIZE; row++)
	{
		for (col=0; col < BOARD_SIZE; col++)
		{
			board[row][col]=' ';
		}

	}
	return;
}

void drawBoard(void)
{
 	int row;
	printf("\n");
	for (row=0; row < BOARD_SIZE; row++)
	{
		printf("  *  *  \n");
		printf("%c* %c* %c \n", board[row][0], board[row][1],board[row][2]);
		printf("  *  *  \n");
		if (row != 2)
		{
			printf("************\n");
		}
	}
	printf("\n");
	return;
}

int userFirst(void)
{
    char response;

    printf("Do you want to go first? (y/n) ");
    do
    {
        response = getchar();
    }while ((response != 'y')&&
                (response != 'Y')&&(response !='n')&&(response != 'N'));
    if ((response == 'y')||(response == 'Y'))
    {
        return(1);
    }else
    {
        return(0);

    }

}


char playGame(void){
    return('X');

}


int symbolWin(char symbol)
{
    int row = 0;
    int col;

    for (row=0; row< BOARD_SIZE; row++)
    {
        if ((board[row][0]==symbol) && (board[row][1] == symbol) && (board[row][2]==symbol))
        {
            return(1);
        }
    }
    for (col=0; col< BOARD_SIZE; col++){
        if ((board[0][col]==symbol) && (board[1][col] == symbol) && (board[2][col]==symbol)){
            return(1):

        }
    }



}



int findWin(char symbol){
    int square;
    int row, col;
    int result = 0;

    for(square =1; square<= 9; square++){
        row = (square-1)/3;
        col = (square-1)%3;

        if (board[row][col] == ' '){
            board[row][col]=symbol;
            if(symbolWon(symbol)){
                result=square;
                board[row][col]=' ';
            }
        }
    }
    return(result);
}

char computerMove(void){
    int square;
    int row, col;

    square = findWin(computer);
}

void playerMove(void){
int square;
int row, col;

do
{
    printf("enter a square: \n");
} while (!square_valid(square));
row = (square-1)/3;
col = (square-1)%3;

board[row][col] = user;
}

int square_volid(int square){
    int row, col;
    row = (square-1)/3;
    col = (square-1)%3;

    if((square>=1) && (square <= 9)){
        if (board[row][col]==' '){
                return(1);
        }
    }

}
