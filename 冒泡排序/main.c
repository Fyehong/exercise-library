#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//ʵ��һ�������������ð������(��С����
//��ӡ����ĺ���
void print_arr(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//ð������
void bubble_sort(int arr[],int sz)
{
	int i=0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}	
	}
}

int main()
{
	int arr[8] = { 5,8,14,36,22,6,5,11 };
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;//����±�
	print_arr(arr, sz);//����ǰ
	bubble_sort(arr,sz);
	print_arr(arr, sz);//�����
	return 0;
}