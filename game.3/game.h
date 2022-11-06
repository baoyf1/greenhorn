#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
void initboard(char board[ROWS][COLS], int rows, int  cols,char set);
void printboard(char board[ROWS][COLS], int row, int  col);
void setboard(char board[ROWS][COLS], int row, int  col);
void findboard(char board[ROWS][COLS],char showboard[ROWS][COLS], int row,int col);