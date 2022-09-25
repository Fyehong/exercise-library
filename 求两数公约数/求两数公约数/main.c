<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	int ret = 1;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a > b)
		{
			max = b;
		}
		else
		{
			max = a;
		}
		int i = 0;
		while (1)
		{
			if (0 == a % max && 0 == b % max)
			{
				printf("最大公约数为：%d\n", max);
				break;
			}
			else
			{
				max--;
			}
		}
	}
	return 0;

=======
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	int ret = 1;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a > b)
		{
			max = b;
		}
		else
		{
			max = a;
		}
		int i = 0;
		while (1)
		{
			if (0 == a % max && 0 == b % max)
			{
				printf("最大公约数为：%d\n", max);
				break;
			}
			else
			{
				max--;
			}
		}
	}
	return 0;

>>>>>>> a15ab819a388aefe16f7ace6687e64a13cc105bf
}