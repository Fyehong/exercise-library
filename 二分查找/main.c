#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//写一个函数，实现一个整形有序数组的二分查找。
//找到了就返回下标
//找不到返回-1

int binary_search(int arr[], int sz, int i)
//声明时不会创建数组不需要定义数组的大小，实参传给形参仅仅是数组的首元素地址
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
	scanf("%d", &k);//要查找的数
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, sz, k);
	if (-1 != ret)
	{
		printf("找到了，下标是%d\n",ret);
	}
	else
	{
		printf("没找到\n");
	}
}

