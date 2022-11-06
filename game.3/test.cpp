#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("########################\n");
	printf("#####1.open  0.exi######\n");
	printf("########################\n");
}
void game()
{
printf("扫雷\n");
//雷的信息存储
char board[ROWS][COLS] = { 0 };//后台存储雷的信息
//初始化
char showboard[ROWS][COLS] = { 0 };
initboard(board,ROWS,COLS,'0');
//打印棋盘
setboard(board, ROW, COL);
//printboard(board, ROW, COL);
initboard(showboard, ROWS, COLS, '*');//初始化！
printboard(showboard, ROW, COL);
findboard(board,showboard,ROWS,COLS);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择 :>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出。\n");
			break;
		default:
			printf("选择错误请重新输入！\n");
		}
	} while(input);

}
int main()
{
	test();
	return 0;
}