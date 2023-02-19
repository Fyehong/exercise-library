#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******************\n");
	printf("***  1.play  *****\n");
	printf("***  0.exit  *****\n");
	printf("******************\n");
}
void game()
{
	int i = 1;
	char ret = '0';
	char board[ROW][COL] = { 0 };
	//��ʼ������ȫΪ�ո�
	InitBoard(board, ROW, COL);

	//��ӡ����
	DisplayBoard(board, ROW, COL);

	while (i)
	{
		//�������
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//�������壨����£�
		computer_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

//��ô�ж���Ӯ
//������Ӯ��is_win����'*'
//�������Ӯ��is_win����'#'
//���ƽ�֣�����'Q'
//��������'C'
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}