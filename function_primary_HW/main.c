#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ݹ�
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
//�ǵݹ�
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



//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////�ǵݹ�
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
////�ݹ�
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


////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////���룺1729�������19
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
////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
////�ݹ�
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

//�ǵݹ�
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
