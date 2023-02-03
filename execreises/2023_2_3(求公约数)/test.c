#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//给定两个数，求这两个数的最大公约数
//
//例如：
//
//输入：20 40
//
//输出：20
int main()
{
	int a = 0;
	int b = 0;
	int ret = 1;
	scanf("%d %d", &a, &b);
	while (ret)
	{
		ret = a % b;
		a = b;
		b = ret;
	}
		printf("%d\n", a);
	return 0;
}