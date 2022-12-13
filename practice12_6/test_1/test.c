#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (x >=y)
	{
		printf("%d\n", x);
	}
	else 
	{
		printf("%d\n", y);
	}
	return 0;
}