#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////1.����������������򣨴Ӵ�С��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int ret = 0;
//	printf("����������������");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		ret = a;
//		a = b;
//		b = ret;
//	}
//	if(a<c)
//	{
//		ret = a;
//		a = c;
//		c = ret;
//	}
//	if(b<c)
//	{
//		ret = b;
//		b = c;
//		c = ret;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}




////дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i=1;
//	int ret = 3;
//	int product = 0;
//	for (i = 1; product < 100; i++)
//	{
//		product = ret * i;
//		printf("%d ", product);
//	}
//}

//
////��10 �����������ֵ
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	int i = 1;
//	int ret = 0;
//	int arr[10] = { 0 };
//	srand((unsigned)time(NULL));
//	
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 16 + 1;
//		printf("%d ", arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > arr[0])
//		{
//			arr[0] = arr[i];
//		}
//	}
//	printf("\nmax:%d", arr[0]);
//	return 0;
//}





//дһ�����룺��ӡ100~200֮�������

//�ж������ĺ���
#include<math.h>
int is_prime(int x)
{
	int i = 2;
	int ret = 0;
	for (i = 2; i <=(int)sqrt(x); i++)
	{
		ret = x % i;
		if (ret==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int y = 0;
	int n = 0;
	for (n=100;n<=200;n++)
	{
		if (is_prime(n) == 1)
		{
			printf("%d ", n);
		}
	}
	return 0;
}




////��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int i = 1;
//	for (year = 1000; year <= 2000; i++)
//	{
//		year += i;
//		if (0 == year % 400||year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//	}
//}



////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	double i = 0.00;
//	double ret = 0.00;
//	double sum = 0.00;
//	int a = -1;
//	for (i = 1; i <= 100; i++)
//	{
//		a = a * (-1);
//		ret = a*1 / i;
//		sum += ret;
//	}
//	printf("%f\n", sum);
//}