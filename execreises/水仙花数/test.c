#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮�͵��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������


//�ж�λ��
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
//��¼ÿһλ�ϵ���ֵ
void is_ass(int* arr, int n, int i)
{
	while (n--)
	{
		*(arr + n) = i % 10;
		i /= 10;
	}
}
//����ֵ��n�η���
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
	int arr[6] = { 0 }; //��¼ÿһλ�ϵ���ֵ
	int n = 0;
	int i = 0;;
	//��¼ÿһλ�ϵ���ֵ��n�η�
	for (i = 1; i <= 100000; i++)
	{

		int n = h_digit(i);//�ж�λ��n

		is_ass(arr, n, i);//��¼ÿһλ�ϵ���ֵ

		if (i == is_mul(arr, n))
		{
			printf("%d ", i);
		}

	}
	return 0;
}