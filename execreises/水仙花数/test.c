#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。


//判断位数
int h_digit(int i)
{
	int n = 0;
	while (i > 0)
	{
		n++;
		i /= 10;
	}
	return n;
}
//记录每一位上的数值
void is_ass(int* arr, int n, int i)
{
	while (n--)
	{
		*(arr + n) = i % 10;
		i /= 10;
	}
}
//求数值的n次方和
int is_mul(int* arr, int n)
{
	int temp[6] = { 1,1,1,1,1,1 };
	int i = n;
	int mul = 0;
	while (i--)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			*(temp + i) *= *(arr + i);
		}
		mul += *(temp + i);
	}
	return mul;
}

int main()
{
	int arr[6] = { 0 }; //记录每一位上的数值
	int n = 0;
	int i = 0;;
	//记录每一位上的数值的n次方
	for (i = 1; i <= 100000; i++)
	{

		int n = h_digit(i);//判断位数n

		is_ass(arr, n, i);//记录每一位上的数值

		if (i == is_mul(arr, n))
		{
			printf("%d ", i);
		}

	}
	return 0;
}