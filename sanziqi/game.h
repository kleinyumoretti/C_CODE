#define ROW 3
#define COL 3 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void InitBoard(char board[ROW][COL], int row, int col);
//º¯ÊýÉùÃ÷
void DisplayBoard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);