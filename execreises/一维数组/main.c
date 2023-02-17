#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印数组每个元素的地址

////方法1：
//int main()
//{
//	int i=0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ", &arr[i]);
//	}
//	return 0;
//}

////方法2：用指针打印
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[1];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p\n", p++);
//	}
//	return 0;
//}


//打印数组元素
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &arr[0];
	while (i < 10)
	{
		printf("%d ", *p);
		p++;
		i++;
	}

	return 0;
}