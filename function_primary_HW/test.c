#define _CRT_SECURE_NO_WARNINGS



////ʵ��һ���������ж�һ�����ǲ���������
////��������ʵ�ֵĺ�����ӡ100��200֮���������
//#include <stdio.h>
//#include <math.h>
//
//int judge_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (judge_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\n����%d������", count);
//	return 0;
//}


//int judge_leap_year(int year)
//{
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
////ʵ�ֺ����ж�year�ǲ������ꡣ
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret=judge_leap_year(year);
//	if (ret == 1)
//	{
//		printf("%d������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//}


//ʵ��һ�������������������������ݡ�
#include<stdio.h>
void swap(int* x, int* y)
{
	printf("��������������������������������\n");
	printf("&%d=%p &%d=%p\n", *x, x, *y, y);
	int ret = 0;
	ret = *x;
	*x = *y;
	*y = ret;
	printf("&%d=%p &%d=%p\n", *x, x, *y, y);
	printf("��������������������������������\n");
}
int main()
{
	int x = 2;
	int y = 3;
	printf("&%d=%p &%d=%p\n",x , &x ,y , &y);
	swap(&x, &y);
	printf("%p %p\n", &x, &y);
	printf("x=%d y=%d", x, y);
}




////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
////�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
////
////#include <stdio.h>
////int main()
////{
////	int i = 0;
////	int x = 0;
////	scanf("%d", &x);
////	for (i = 1; i <= x; i++)
////	{
////		int j = 1;
////		for (j = 1; j <= i; j++)
////		{
////			printf("%2d*%-2d=%-3d  ", i, j, i * j);
////		}
////		printf("\n");
////	}
////	return 0;
////}