#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < row; i++)
	{
		//��ӡ����,һ��һ�д�ӡ
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)//��ӡ�ָ���
				printf("|");
		}
		printf("\n");

		//��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("�����壺");
		scanf("%d %d", &x, &y);
		if (x <= ROW && x >= 1 && y >= 1 && y <= COL)
		{
			if ('*'!=board[x-1][y-1])
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�ô������ӣ����±�\n");
			}
			
		}
		else
		{
			printf("�����������������:\n");
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	srand((unsigned int)time(NULL));
	printf("��������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}	
}



//�ж���Ӯ

//�����Ƿ�����
 
int is_full(char board[ROW][COL], int row, int col);

char is_win(char board[ROW][COL], int row, int col)
{
	//�ж���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][1] == board[i][2] && board[i][0] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}

	//�ж���
	for (i = 0; i < col; i++)
	{
		if (board[1][i] == board[2][i] &&(board[0][i] == board[2][i]) && (board[1][i] != ' '))
			return board[1][i];
	}
	//�ж϶Խ���
	if (board[2][2] == board[1][1] && board[0][0] == board[1][1] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
		return board[1][1];

	//�ж�ƽ��(�Ƿ��޿ո�)
	int ret = is_full(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}

	//����
	return 'C';
}

static int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
