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
	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("�����룺\n");
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
			printf("ͨѶ¼�������\n");
			break;
		case sort:
			SortContact(&con);
			break;
		case exit:
			printf("���˳�ͨѶ¼��\n");
			break;
		default:
			printf("����������������룡\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}