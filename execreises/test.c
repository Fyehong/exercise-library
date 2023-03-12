#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//void is_print(const int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	is_print(arr,sz);
//	return 0;
//}

//将一个字符串str的内容颠倒过来，并输出。
//void reverse(char* arr)
//{
//	char* left = arr;
//	int i = 0;
//	while (*(arr + i))
//	{
//		i++;
//	}
//	char* right = arr + i - 1;//最右边一个字符(非'\0')的地址
//	char temp = '*';
//	while (left < right)
//	{
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
int is_Sn(const int x)
{
	int i = 0;
	int mul = 1;
	int an = x;
	int Sn = x;

	for (i = 2; i <= 5; i++)
	{
		mul *= 10;
		an = an + x* mul;
		Sn = Sn + an;
	}
	return  Sn;
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	printf("%d\n", is_Sn(x));
}


