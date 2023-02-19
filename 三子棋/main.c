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
	//初始化棋盘全为空格：
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	while (i)
	{
		//玩家下棋
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋（随机下）
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
		printf("玩家赢了\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}

//怎么判断输赢
//如果玩家赢，is_win返回'*'
//如果电脑赢，is_win返回'#'
//如果平局，返回'Q'
//继续返回'C'
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏载入中\n");
			game();
			break;
		case 0:
			printf("退出游戏中\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}