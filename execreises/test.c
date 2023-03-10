#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
int how_bottle(int money)
{
	int count = money / 1;
	int ret = 0;
	int cou = count;
	while (count >= 2)
	{
		ret += count / 2;
		count = count / 2 + count % 2;
	}
	return ret + cou;
}

int main()
{
	int money = 20;
	int a_steamwater_price = 1;
	int two_empty_bottle = 1;
	int count = how_bottle(money);
	printf("%d\n", count);
}