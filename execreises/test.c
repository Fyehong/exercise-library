#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
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