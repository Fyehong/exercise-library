#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Init_board(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void Display_board(char arr1[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("  ");//打印空白格

	for (i = 1; i <= col; i++)//打印标题列
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);//打印标题行
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void set_mine(char arr2[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	srand((unsigned int)time(NULL));
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (arr2[x][y] == '0')
		{
			arr2[x][y] = '1';//布置雷
			count--;
		}
	}
}

int get_mine_board(char mine1[ROWS][COLS], int x, int y)
{
	/*int i = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine1[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;*/
	//换种方式
	int count= mine1[x - 1][y - 1] + mine1[x - 1][y] + mine1[x - 1][y + 1]
		       +
		       mine1[x][y - 1] + mine1[x][y + 1] 
		       +
		       mine1[x + 1][y - 1] + mine1[x + 1][y] + mine1[x + 1][y + 1]
		       - 
		      '0' * 8;
	return count;
}

void fine_mine(char mine1[ROWS][COLS], char show2[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int SUM = 0;
	while (SUM < ROW*COL-EASY_COUNT)
	{
		printf("请输入：");
		scanf("%d %d", &x, &y);
		if (x <= row && x >= 1 && y <= col && y >= 1)
		{
			if (mine1[x][y] == '1')
			{
				printf("砰——游戏结束！\n");
				Display_board(mine1, row, col);
				break;
			}
			else
			{
				int count = get_mine_board(mine1, x, y);
				printf("周围有%d个雷\n",count );
				show2[x][y] = count + '0';
				Display_board(show2, row, col);
				SUM++;
			}
		}
		else
		{
			printf("坐标超出棋盘大小，请重新输入\n");
		}
	}
	if (SUM == ROW * COL - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
	}
}
