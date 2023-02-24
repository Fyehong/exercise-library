#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//打印界面
void menu()
{
	printf("********************\n");
	printf("****  1.play  ******\n");
	printf("****  0.exit  ******\n");
	printf("********************\n");
}


void game()
{
	//扫雷游戏的实现
	char mine[ROWS][COLS] = { 0 };//用来存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//用来存放排查出的雷的信息

	//初始化棋盘
	Init_board(mine, ROWS, COLS, '0');
	Init_board(show, ROWS, COLS, '*');
	////打印初始化后的棋盘,检查一下棋盘
	//Display_board(mine, ROW, COL);
	//Display_board(show, ROW, COL);

	set_mine(mine, ROW, COL);//布置雷
	//Display_board(mine, ROW, COL);//打印布置雷后的棋盘，检查一下正确性

	//————以上都属于游戏加载中————

	fine_mine(mine, show, ROW, COL);//游戏正式开始

}


int main()
{
	int input = 0;
	do
	{
		menu();//初始界面
		printf("请输入：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("输入错误，重新输入\n");
			break;
		}

	} while (input);
}