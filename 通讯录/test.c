#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"


void menu()
{
	printf("*****************************\n");
	printf("****  1.add    2.del     ****\n");
	printf("****  3.search 4.modify  ****\n");
	printf("****  5.print  6.empty   ****\n");
	printf("****  7.sort   0.exit    ****\n");
	printf("*****************************\n");
}
void test()
{
	int input = 0;
	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请输入：\n");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			DelContact(&con); 
			break;
		case search:
			SearchContact(&con);
			break;
		case modify:
			ModifyContact(&con);
			break;
		case print:
			PrintContact(&con);
			break;
		case empty:
			InitContact(&con);
			printf("通讯录已清除！\n");
			break;
		case sort:
			SortContact(&con);
			break;
		case exit:
			printf("已退出通讯录！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}