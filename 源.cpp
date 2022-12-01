#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
/*void reverse(char* arr)
{
	int len = strlen(arr)-1;
	char* left = arr;
	char* right = arr + len - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char ch[256] = { 0 };
	scanf("%s", ch);
	reverse(ch);
	printf("%s", ch);
	return 0;
}*/
/*int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int sum = 0;
	int i = 0;
	int ret = 0;

	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d", sum);

	return 0;
}*/
/*int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	for (i = 0; i < line ; i++)
	{
		int j = 0;
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line-1; i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j <2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/
/*int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = 0;
	total = money;
	int empty = money;

	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2+empty%2;
	}
	printf("%d", total);
	return 0;
}*/
int main()
{


	return 0;
}









