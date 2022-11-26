#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int main()
{
	int arr[10] = { 0 };
	int (*p)[10]= & arr;//取出数组的指针；
	int(*pfarr[4])(int, int);
	int(*(* ppfarr)[4])(int,int) =&pfarr;




	return 0;
}*/
/*void print(const char* str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(const char*))
{
	p("bit");
}
int main()
{
	test(print);
	return 0;
}*/
void bubble_sort(int arr[],int sz)
{
	int j = 0;
	for (j = 0; j < sz - 1; j++)
	{
		int i = 0;
		for (i = 0; i < sz - j-1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int max = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = max;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);

	}
	return 0;
}









