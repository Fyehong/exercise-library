#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////用冒泡排序，将数组从小到大排序
//
//void bubble_sort(int arr[],int sz)//等价于void bubble_sort(int *arr,int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz-1; j++)
//	{
//		int flag = 0;
//		int i = 0;
//		for (i = 0; i < sz - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				flag = 1;
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//		if (0 == flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 5,6,7,8,9,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
////数组名，一般情况下表示的都是数组首元素的地址，有两种情况除外：
////1>.在sizeof(数组名)函数中，数组名表示的是整个数组，sizeof(数组名)计算的是整个数组的大小；
////1>.在用&取数组地址时，如&数组名，数组名表示的是整个数组，取的是整个数组的地址；
//


int main()
{
	int arr[4][5] = { {1,2,3,4,5},6,7,8,9,10,{11,12,13,14},15,16,17 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		int j = 0;
		for (j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			printf("arr[%d][%d]是：%-6d ", i, j, arr[i][j]);
		}
		printf("\n");
	}
}
