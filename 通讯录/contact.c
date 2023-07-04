#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//��ʼ����ˢ��\�����ͨѶ¼ 
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//���
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == 1000)
	{
		printf("ͨѶ¼����,�޷����\n");
		return;
	}
	printf("����������:");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:");
	scanf("%s", pc->data[pc->sz].tele);
	printf("������סַ:");
	scanf("%s", pc->data[pc->sz].addre);
	pc->sz++;
	printf("��ӳɹ�\n");
}

//��ӡ
void PrintContact(const Contact* pc)
{
	assert(pc);
	printf("%-15s %-5s %-5s %-12s %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-15s %-5d %-5s %-12s %-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addre);
	}
}

int FindByName(Contact* pc,char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(name, pc->data[i].name))
		{
			return i;//���ҵ���
		}
	}
	return -1;//û���ҵ�
}


//ɾ��
void DelContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ����������");
	scanf("%s",name);
	int jud = FindByName(pc, name);
	if (jud < 0)
	{
		printf("��Ҫɾ��������\n");
	}
	else
	{
		int i = 0;
		for (i = jud; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(Contact* pc)
{
	int i = 0;
	int count = 0;//��¼���ҵ����ָ���
	char find_name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ����֣�");
	scanf("%s", find_name);
	printf("%-15s %-5s %-5s %-12s %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(find_name, pc->data[i].name))
		{
			printf("%-15s %-5d %-5s %-12s %-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addre);
			count++;
		}
	}
	if (count == 0)
	{
		printf("û�ҵ�\n");
	}
}

//�޸���ϵ����Ϣ
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸ĵ���ϵ��������");
	scanf("%s", name);
	int jud = FindByName(pc, name);
	if (jud < 0)
	{
		printf("�޸���ϵ������\n");
	}
	else
	{
		char input[5] = { 0 };
		//������
		printf("�Ƿ��޸�����(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input,"y"))
		{
			printf("������������");
			char name1[MAX_NAME] = { 0 };
			scanf("%s", name1);
			memset(pc->data[jud].name, 0, sizeof(pc->data[jud].name));
			strcpy(pc->data[jud].name, name1);
		}
		//������
		printf("�Ƿ��޸�����(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input, "y"))
		{
			printf("���������䣺");
			int age = 0;
			scanf("%d", &age);
			pc->data[jud].age = age;
		}
		//���Ա�
		printf("�Ƿ��޸��Ա�(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input, "y"))
		{
			printf("�������Ա�");
			char sex[MAX_SEX] = { 0 };
			scanf("%s", sex);
			memset(pc->data[jud].sex, 0, sizeof(pc->data[jud].sex));
			strcpy(pc->data[jud].sex, sex);
		}
		//�ĵ绰
		printf("�Ƿ��޸ĵ绰(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input, "y"))
		{
			printf("������绰��");
			char tele[MAX_TELE] = { 0 };
			scanf("%s", tele);
			memset(pc->data[jud].tele, 0, sizeof(pc->data[jud].tele));
			strcpy(pc->data[jud].tele, tele);
		}
		//�ĵ�ַ
		printf("�Ƿ��޸ĵ�ַ(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input, "y"))
		{
			printf("�������ַ��");
			char addre[MAX_ADDRE] = { 0 };
			scanf("%s", addre);
			memset(pc->data[jud].addre, 0, sizeof(pc->data[jud].addre));
			strcpy(pc->data[jud].addre, addre);
		}
	}
}

void SortContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		int j = 0;
		for (j = 0; j < pc->sz - 1; j++)
		{
			//��������������
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				PeoInfo tmp;
				memset(&tmp, 0, sizeof(tmp));
				tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}
	}
	PrintContact(pc);
}


