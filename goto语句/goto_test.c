#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//һ���ػ�����
//1. ����ִ�������͵���ʱ�ػ���60���ػ�
//������룺��������ȡ���ػ�
//shutdown -s -t 60
//shutdown -a ȡ���ػ�

int main()
{
	char a[20] = { 0 };
	
	system("shutdown -s -t 60");
a:
	printf("�����롰���ǰ���������������Խ���60���ڹػ�\n");
	while (1)
	{
		scanf("%s", a);
		if (strcmp(a, "���ǰ�����") == 0)
		{
			system("shutdown -a");
			printf("�ػ�����ֹͣ\n");
		}
		else
		{
			goto a;
		}

	}
}