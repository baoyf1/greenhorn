#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

#define _CRT_SECURE_NO_WARNINGS 1
void initboard(char board[ROWS][COLS], int rows, int  cols,char set) 
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}


}
void printboard(char board[ROWS][COLS], int row, int  col)
{
	int i = 0;
	//打印列号
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setboard(char board[ROWS][COLS], int row, int  col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void blank(char board[ROWS][COLS], int x, int y,int n)
{
	if (n == 0)
	{
		board[x - 1][y - 1] = board[x - 1][y] = board[x - 1][y + 1] =
			board[x][y - 1] = board[x][y + 1] = board[x + 1][y - 1] =
			board[x + 1][y] = board[x + 1][y + 1] = ' ';
	}

}
int get_board_count(char board[ROWS][COLS],int x,int y)
{
	int num=0;
	num = board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] +
		board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1] +
		board[x + 1][y] + board[x + 1][y + 1]-8*'0';
	return num;
}
void findboard(char board[ROWS][COLS], char showboard[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 80;
	int win_ = 0;
	while (win- EASY_COUNT)
	{
		printf("请输入排查雷的坐标:>");

		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] == '1')
			{
				printf("很遗憾你被炸死了\n");
				printboard(board, row-2, col-2);
				break;
			}
			else
			{
				int n = 0;
				//计算xy坐标周围有几个雷
				n = get_board_count(board, x, y);
					blank(showboard, x, y,n);
				showboard[x][y] = '0' + n;
				printboard(showboard, row-2, col-2);
				win_++;
			}
		}
		else
		{
			printf("输入坐标非法请重新输入");
		}
	}
	if (win_ == win - EASY_COUNT)
	{
		printf("所有的雷已被排除，你赢了！！！！\n");
		printboard(board, row, col);
	}
}