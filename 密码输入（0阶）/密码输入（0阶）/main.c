#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char password[20] = { 0 };
	char arr[20] = "123456yls";
	printf("����������:");
	scanf("%s", password);
	int ret = 0;
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		if ((ret = strcmp(arr, password)) == 0)
		{
			printf("����������ȷ\n");
			break;
		}
		else
		{
			if (i < 3)
			{
				printf("�������,���ٴ�����");
				scanf("%s", password);
			}
			else
			{
				printf("���������������20���Ӻ��ٳ��Ե�¼\n");
			}
		}

	}
	return 0;
}