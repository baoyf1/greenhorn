#include <stdio.h>
/*int add(int x, int y)
{

	return y + x;

}

int main()
{
	//函数指针
	int a = 10;
	int b=20;
	//int z= add(a, b);
	printf("%p", &add);
	//&函数名和函数名都是函数的地址；
	//函数地址的储存；
	int(* pa)(int,int) = add;
	//printf("%d", (*pa)(2, 3));
	return 0;
}*/
/*void print(const char* str)
{
	printf("%s", str);
}
int main()
{
	void(*p)(const char*) = print;
	(*p)("hello bit");
	void(*signal(int, void(*)(int)))(int);
	typedef void(*pfun_t)(int);
	pfun_t signal(int, pfun_t);

	return 0;
*/
/*int add(int x, int y)
{
	return x + y;
}
int main()
{
	int* arr[5];//需要一个数组可以存放4个函数地址的数组；

	int(*parr[4])(int, int) = { add };
	
	return 0;
}*/
/*char* my_strcpy(char* destt, const char* str)
{

}
int main()
{
	char* (*pa)(char*, const char*) = my_strcpy;
	char* (*arr[4])(char*, const char*) = { my_strcpy };
	return 0;
}*/
void menu()
{
	printf("********************************\n");
	printf("******1.加           2.减*******\n");
	printf("******3.乘           4.除*******\n");
	printf("*********  0.exit   ************\n");
	printf("********************************\n");

}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
/*int main()//计算器
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf_s("%d", &input);
		printf("请输入两个操作数");
		scanf_s("%d%d", &x, &y);
		switch(input)
		{
		case 1:
			printf("%d", add(x, y));
			break;
		case 2:
			printf("%d", sub(x, y));
			break;
		case 3:
			printf("%d", mul(x, y));
			break;
		case 4:
			printf("%d", div(x, y));
			break;
		case 0:
			break;
		default:
			printf("输入错误");
			break;
		}


	} while (input);

	return 0;
}*/

int main()
{
	int input = 0;		int(*pfarr[5])(int, int) = { 0, add,sub,mul,div };
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf_s("%d", &input);
		if (input > 0 && input <= 4)
		{
			printf("请输入两个操作数\n");
			scanf_s("%d%d", &x, &y);
			printf("%d \n", pfarr[input](x, y));
		}
		else if (input == 0)
		{
			break;
		}
		else
			printf("输入错误");
	} while (input);

	return  0;
}//回调函数


