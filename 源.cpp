#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>	
typedef struct stu//����һ��ѧ����
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

	 stu stu1 = { "����",18,"13165525225","��" };
	print(&stu1);
	return 0;
}