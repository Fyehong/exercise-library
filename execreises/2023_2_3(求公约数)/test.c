#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���������������������������Լ��
//
//���磺
//
//���룺20 40
//
//�����20
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