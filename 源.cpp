#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>	
typedef struct stu//描述一个学生。
	{
		char name[20];
		short age;
		char tele[12];
		char sex[5];
	}stu;
void print(stu* stu1)
{
	printf("%d", stu1->age);
}
int main()
{

	 stu stu1 = { "张三",18,"13165525225","男" };
	print(&stu1);
	return 0;
}