#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char password[20] = { 0 };
	char arr[20] = "123456yls";
	printf("请输入密码:");
	scanf("%s", password);
	int ret = 0;
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		if ((ret = strcmp(arr, password)) == 0)
		{
			printf("密码输入正确\n");
			break;
		}
		else
		{
			if (i < 3)
			{
				printf("输入错误,请再次输入");
				scanf("%s", password);
			}
			else
			{
				printf("三次输入均错误，请20分钟后再尝试登录\n");
			}
		}

	}
	return 0;
}