#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int my_strlen(char* arr)
{
	/*int count = 0;
	while (*arr != '\0')
	{
		arr++;
		count++;
	}
	return count;*/

	//”√µ›πÈ¿¥–¥£∫
	while (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);
	}
	return 0;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}