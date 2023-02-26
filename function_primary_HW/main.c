#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


////递归方式实现打印一个整数的每一位
//int print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	print(x);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归
//int factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n * factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=factorial(n);
//	printf("n!=%d\n", ret);
//	return 0;
//}
//非递归
//int factorial(int n)
//{
//	int i;
//	for (i = 1; n >= 1; n--)
//	{
//		
//		i = n * i;
//	}
//	return i;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("n!=%d\n", ret);
//	return 0;
//}



//递归和非递归分别实现strlen
////非递归
//int is_strlen(char arr[])
//{
//	int i = 0;
//	while(arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = is_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//
////递归
//int is_strlen(char arr[])
//{
//	int i = 0;
//	while (*arr != '\0')
//	{
//		return 1+is_strlen(arr + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = is_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////输入：1729，输出：19
//int DigitSum(int x)
//{
//	if (x / 10 > 0)
//	{
//		return x % 10 + DigitSum(x / 10);
//	}
//	return x;
//}
//
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	int ret = DigitSum(x);
//	printf("%d\n", ret);
//	return 0;
//}

//
////编写一个函数实现n的k次方，使用递归实现。
//
//int factorial(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * factorial(n, k - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	int k;
//	scanf("%d%d", &n, &k);
//	int fac=factorial(n, k);
//	printf("%d\n", fac);
//}


//递归和非递归分别实现求第n个斐波那契数
////递归
//int is_fib(n)
//{
//	while (n >= 2)
//	{
//		return is_fib(n - 1) + is_fib(n - 2);
//	}
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//	
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int fib = is_fib(n);
//	printf("%d\n", fib);
//}

//非递归
int is_fib(n)
{
	
	if (n == 0)
	{
		return 0;
	}
	
	int a = 1, b = 1, c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n;
	scanf("%d", &n);
	int fib = is_fib(n);
	printf("%d\n", fib);
}
