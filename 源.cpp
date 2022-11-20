#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
//int main()
//{ 
//	int a = 20;
//	//00000000000000000000000000010100-源码
//	//00000000000000000000000000010100-反码
//	//00000000000000000000000000010100-补码
//	//0x00 00 00 14-十六进制数。
//	int b = -10;
//	//10000000000000000000000000001010-源码
//	//11111111111111111111111111110101-反码+1=补码；
//	//11111111111111111111111111110110-补码。
//	//0xFF FF FF F6
//	return 0;
//}
/*int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	printf("%d", *p);
	return *p;
}
int main()
{
	if (check_sys() == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}*//*
int main()
{
	char a = -1;
	  char b = -1;
	unsigned char c = -1;
	printf("%d %d %d ", a, b, c);
	return 0;
}*/

/*****根据相减法定义求最大公约数int gcd(int a, int b)*****/
/********** Begin **********/
//int gcd(int a, int b)
//{
//	int i = 0;
//	if (b > a)
//	{
//		int max = b;
//		b = a;
//		a = max;
//	}
//	int m = 0;
//	for (i = 0; i < a; i++)
//	{
//		m = a % b;
//		if (m == 0)
//		{
//			return b;
//		}
//		else
//		{
//			a = b;
//			b = m;
//		}
//	}
//
//}
///********** End **********/
///*****定义求最小公倍数int lcm(int a, int b)*****/
///********** Begin **********/
//int lcm(int a, int b, int sum)
//{
//	return a * b / sum;
//
//}
//
///********** End **********/
//
//int main()
//{
//	/********** Begin **********/
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a, &b);
//	int sum = gcd(a, b);
//	int t = lcm(a, b, sum);
//	printf("最大公约数为：%d\n最小公倍数为：%d", sum, t);
//
//	/********** End **********/
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i = 0; i < 9; i++)
//	{
//		int k = 0;
//		for (k = 0; k < 9 - i; k++)
//		{
//			printf(" ");
//		}
//		int m = 0;
//		for (m = 0; m <= i; m++)
//		{
//			printf("#");
//		}
//		printf("\n");
//
//	}
//
//
//	return 0;
//}
int main()
{
	



	return 0;
}