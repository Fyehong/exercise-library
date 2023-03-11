#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//调整数组使奇数位全部都位于偶数位前面

void ji_ou(int* a,int sz)
{
	int left = 1;//做奇数位起点
	int right = sz-1;//做偶数位起点
	int temp = 0;
	if (0 == sz % 2)
	{
		right = right - 1;
		while (left < right)
		{
			temp = *(a + right);
			*(a + right) = *(a + left);
			*(a + left) = temp;
			left += 2;
			right -= 2;
		}
	}
	else
	{
		while (left < right)
		{
			temp = *(a + right);
			*(a + right) = *(a + left);
			*(a + left) = temp;
			left += 2;
			right -= 2;
		}
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = 10;
	/*for (i = 0; i < 10; i++)
	{
		scanf("%d ", &arr[i]);
		sz++;
	}*/
	ji_ou(arr,sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}






