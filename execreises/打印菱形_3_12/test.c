#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr[14] = "             ";
	char arr1[14] = "*************";
	char arr2[14] = "             ";
	int mid = 6;
	int left = mid;
	int right = mid;
	while (left>=0)
	{
		arr[mid] = arr1[mid];
		arr[left] = arr1[left];
		arr[right] = arr1[right];
		printf("%s\n", arr);
		left--;
		right++;
	}
	while (left <= right)
	{
		left++;
		right--;
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);
		
	}
	return 0;
}