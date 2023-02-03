#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//编写程序数一下 1到 100 的所有整数中出现多少个数字9

int main()
{
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("“9”的个数：%d", count);
}