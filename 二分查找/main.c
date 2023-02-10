#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//�ҵ��˾ͷ����±�
//�Ҳ�������-1

int binary_search(int arr[], int sz, int i)
//����ʱ���ᴴ�����鲻��Ҫ��������Ĵ�С��ʵ�δ����βν������������Ԫ�ص�ַ
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (i > arr[mid])
		{
			left = mid+1;
		}
		else if(i < arr[mid])
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);//Ҫ���ҵ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, sz, k);
	if (-1 != ret)
	{
		printf("�ҵ��ˣ��±���%d\n",ret);
	}
	else
	{
		printf("û�ҵ�\n");
	}
}

