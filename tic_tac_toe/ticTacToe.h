/*
* ticTacToe.h
*/

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#define BOARD_SIZE 3

/* note: define board in your main.c */
char board[BOARD_SIZE][BOARD_SIZE];
char user;
char computer;
/* create the board; make sure it starts off empty */
void initBoard(void);

void drawBoard(void);

int userFirst(void);

char playGame(void);


#endif /* endif of TIC_TAC_TOE_H */
