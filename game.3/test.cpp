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
printf("ɨ��\n");
//�׵���Ϣ�洢
char board[ROWS][COLS] = { 0 };//��̨�洢�׵���Ϣ
//��ʼ��
char showboard[ROWS][COLS] = { 0 };
initboard(board,ROWS,COLS,'0');
//��ӡ����
setboard(board, ROW, COL);
//printboard(board, ROW, COL);
initboard(showboard, ROWS, COLS, '*');//��ʼ����
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
		printf("��ѡ�� :>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳���\n");
			break;
		default:
			printf("ѡ��������������룡\n");
		}
	} while(input);

}
int main()
{
	test();
	return 0;
}