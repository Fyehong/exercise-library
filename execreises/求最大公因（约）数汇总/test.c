#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//求最大公因数
////方法一：根据公因数的概念，从2开始遍历
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

////方法二：辗转相除法
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

//f方法三：辗转相除法（递归）
int gcd(int x, int y)
{
	return x % y == 0 ? y : gcd(y, x % y);
}


int main()
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	printf("最大公因数是%d\n", gcd(x, y));
	return 0;
}