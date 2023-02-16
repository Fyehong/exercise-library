#define _CRT_SECURE_NO_WARNINGS
//ÇónµÄ½×³Ë
#include<stdio.h>


int fac(int x)
{
	if (x > 1)
	{
		return fac(x - 1) * x;
	}
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d\n", ret);
}