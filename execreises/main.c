#define _CRT_SECURE_NO_WARNINGS

//���n��쳲�������
//#include<stdio.h>
//int fib(int x)
//{
//	if (x > 2)
//	{
//		return fib(x - 1) + fib(x - 2); 
//	}
//	return 1;
//}
//�ظ����㣬Ч�ʵͣ����ַ���

int fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}

