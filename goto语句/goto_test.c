#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//一个关机程序
//1. 程序执行起来就倒计时关机，60秒后关机
//如果输入：我是猪，就取消关机
//shutdown -s -t 60
//shutdown -a 取消关机

int main()
{
	char a[20] = { 0 };
	
	system("shutdown -s -t 60");
a:
	printf("请输入“我是奥特曼”，否则电脑将在60秒内关机\n");
	while (1)
	{
		scanf("%s", a);
		if (strcmp(a, "我是奥特曼") == 0)
		{
			system("shutdown -a");
			printf("关机程序停止\n");
		}
		else
		{
			goto a;
		}

	}
}