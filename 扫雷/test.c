#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//��ӡ����
void menu()
{
	printf("********************\n");
	printf("****  1.play  ******\n");
	printf("****  0.exit  ******\n");
	printf("********************\n");
}


void game()
{
	//ɨ����Ϸ��ʵ��
	char mine[ROWS][COLS] = { 0 };//������Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//��������Ų�����׵���Ϣ

	//��ʼ������
	Init_board(mine, ROWS, COLS, '0');
	Init_board(show, ROWS, COLS, '*');
	////��ӡ��ʼ���������,���һ������
	//Display_board(mine, ROW, COL);
	//Display_board(show, ROW, COL);

	set_mine(mine, ROW, COL);//������
	//Display_board(mine, ROW, COL);//��ӡ�����׺�����̣����һ����ȷ��

	//�����������϶�������Ϸ�����С�������

	fine_mine(mine, show, ROW, COL);//��Ϸ��ʽ��ʼ

}


int main()
{
	int input = 0;
	do
	{
		menu();//��ʼ����
		printf("�����룺\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("���������������\n");
			break;
		}

	} while (input);
}