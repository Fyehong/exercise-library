#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//���������
////����һ�����ݹ������ĸ����2��ʼ����
//int gcd(int x, int y)
//{
//	int ret=(x < y ? x : y);
//	int com = 2;
//	int gcd = 1;
//	while (com <= ret)
//	{
//		if (x % com ==  y % com )
//		{
//			gcd = com;
//		}
//		com++;
//	}
//	return gcd;
//}

////��������շת�����
//int gcd(int x, int y)
//{
//	int temp = 1;
//	while (temp)
//	{
//		temp = x % y;
//		x = y;
//		y = temp;
//	} 
//	return x;
//}

//f��������շת��������ݹ飩
int gcd(int x, int y)
{
	return x % y == 0 ? y : gcd(y, x % y);
}


int main()
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	printf("���������%d\n", gcd(x, y));
	return 0;
}