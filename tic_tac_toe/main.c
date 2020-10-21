#include <stdio.h>

#include "ticTacToe.h"

void initBoard(void);
void drawBoard(void);
int userFirst(void);


char board[BOARD_SIZE][BOARD_SIZE];
char computer;
char user;

int main(){
	initBoard();

  int choice;
  choice = userFirst();
  
char computer  = 'O';;
char user='X';

if (choice==0){
computer = 'X';
user='O';

}

drawBoard();

char winner = playGame();


  return(0);

}
