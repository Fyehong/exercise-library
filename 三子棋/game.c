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
		//打印数据,一行一行打印
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)//打印分割线
				printf("|");
		}
		printf("\n");

		//打印分割线
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
		printf("请下棋：");
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
				printf("该处已落子，请下别处\n");
			}
			
		}
		else
		{
			printf("输入错误，请重新输入:\n");
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	srand((unsigned int)time(NULL));
	printf("电脑下棋\n");
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



//判断输赢

//格子是否填满
 
int is_full(char board[ROW][COL], int row, int col);

char is_win(char board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][1] == board[i][2] && board[i][0] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}

	//判断列
	for (i = 0; i < col; i++)
	{
		if (board[1][i] == board[2][i] &&(board[0][i] == board[2][i]) && (board[1][i] != ' '))
			return board[1][i];
	}
	//判断对角线
	if (board[2][2] == board[1][1] && board[0][0] == board[1][1] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
		return board[1][1];

	//判断平局(是否无空格)
	int ret = is_full(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}

	//继续
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
