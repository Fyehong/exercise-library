#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������ʹ����λȫ����λ��ż��λǰ��

void ji_ou(int* a,int sz)
{
	int left = 1;//������λ���
	int right = sz-1;//��ż��λ���
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






