#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������Ϸ
//1.��������������һ�����֣�1~100)
// 2.��Ҳ�����
//    ��Ҳ�С�ˣ��͸�֪��С��
//    ��Ҳ´��ˣ��͸�֪�´���
//    ֱ���¶�Ϊֹ
// 3.��Ϸ����һֱ��


//�˵�
void menu()
{
	printf("*****************\n");
	printf("******1.play******\n");
	printf("******0.exit*****\n");
	printf("*****************\n");
}

//��������Ϸ��ʵ��
//RAND_MAX
//rand�������ص��������Χ��0~RAND_MAX
void game()
{
//1.����һ���������
	srand((unsigned)time(NULL)+rand());
	int ret = rand()%100+1;
	
//2.��ʼ������
	int input = 0;
	while (1)
	{
		scanf("%d", &input);
		if (ret < input)
		{
			printf("�´��ˣ��ٲ�\n");
		}
		else if (ret > input)
		{
			printf("��С�ˣ��ٲ�\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}


int main()
{
	menu();
	int input = 0;
	do
	{
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ����£�");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}

	} while (input);
}