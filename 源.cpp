#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	qsort(arr, 10, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/
/*int com_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;

}
void test()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), com_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}
int com_float(const void*e1,const void*e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}
void test1()
{
	float f[] = { 4.00,3.00,2.00,1.00 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), com_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f", f[j]);
	}
}
struct stu
{
	char name[20];
	short age;
};
int com_stu_s_age(const void*e1,const void*e2)
{
	return ((struct stu*)e1)->age-((struct stu*)e2)->age;
}
void test2()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), com_stu_s_age);

}
int com_stu_s_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), com_stu_s_name);

}
void swap(char* buf1, char* buf2, int kb)
{
	int i = 0;
	for (i = 0; i < kb; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(const void* base, int sz, int kb,int (*cmp)(const void*e1,const void*e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*kb,(char*)base+kb*(j+1)) > 0)
			{
				swap((char*)base + j * kb, (char*)base + kb * (j + 1),kb);
			}
		}

	}
}
void test5()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]),com_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	//使用bubble——sort函数他一定知道自己要排序什么类型的数据；
	//就应该知道如何比较两个数据；
}
int main()
{
	test5();
	//test();
	//test1();
	//test2();
	//test3();
	//qsort//第一个参数是待排序数组
	//的首元素地址
	// 第二个参数是待排序的元素个数
	//第三个待排序的每个元素的大小；
	//第四个 是函数指针：待比较两个元素所用的函数地址
	return 0;
}*/
int main()
{
	 



	return 0;
}



