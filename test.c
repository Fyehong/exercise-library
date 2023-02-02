#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//猜数字游戏
//1.电脑玩家随机生成一个数字（1~100)
// 2.玩家猜数字
//    玩家猜小了，就告知猜小了
//    玩家猜大了，就告知猜大了
//    直到猜对为止
// 3.游戏可以一直玩


//菜单
void menu()
{
	printf("*****************\n");
	printf("******1.play******\n");
	printf("******0.exit*****\n");
	printf("*****************\n");
}

//猜数字游戏的实现
//RAND_MAX
//rand函数返回的随机数范围是0~RAND_MAX
void game()
{
//1.生成一个随机数字
	srand((unsigned)time(NULL)+rand());
	int ret = rand()%100+1;
	
//2.开始猜数字
	int input = 0;
	while (1)
	{
		scanf("%d", &input);
		if (ret < input)
		{
			printf("猜大了，再猜\n");
		}
		else if (ret > input)
		{
			printf("猜小了，再猜\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}


int main()
{
	menu();
	int input = 0;
	do
	{
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始，请猜：");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
		}

	} while (input);
}