#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//初始化（刷新\清除）通讯录 
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//添加
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == 1000)
	{
		printf("通讯录已满,无法添加\n");
		return;
	}
	printf("请输入姓名:");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入住址:");
	scanf("%s", pc->data[pc->sz].addre);
	pc->sz++;
	printf("添加成功\n");
}

//打印
void PrintContact(const Contact* pc)
{
	assert(pc);
	printf("%-15s %-5s %-5s %-12s %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
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
			return i;//查找到了
		}
	}
	return -1;//没有找到
}


//删除
void DelContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除的姓名：");
	scanf("%s",name);
	int jud = FindByName(pc, name);
	if (jud < 0)
	{
		printf("无要删除的姓名\n");
	}
	else
	{
		int i = 0;
		for (i = jud; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("删除成功\n");
	}
}

void SearchContact(Contact* pc)
{
	int i = 0;
	int count = 0;//记录查找的名字个数
	char find_name[MAX_NAME] = { 0 };
	printf("请输入要查找的名字：");
	scanf("%s", find_name);
	printf("%-15s %-5s %-5s %-12s %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
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
		printf("没找到\n");
	}
}

//修改联系人信息
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改的联系人姓名：");
	scanf("%s", name);
	int jud = FindByName(pc, name);
	if (jud < 0)
	{
		printf("无该联系人姓名\n");
	}
	else
	{
		char input[5] = { 0 };
		//改名字
		printf("是否修改名字(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input,"y"))
		{
			printf("请输入姓名：");
			char name1[MAX_NAME] = { 0 };
			scanf("%s", name1);
			memset(pc->data[jud].name, 0, sizeof(pc->data[jud].name));
			strcpy(pc->data[jud].name, name1);
		}
		//改年龄
		printf("是否修改年龄(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input, "y"))
		{
			printf("请输入年龄：");
			int age = 0;
			scanf("%d", &age);
			pc->data[jud].age = age;
		}
		//改性别
		printf("是否修改性别(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input, "y"))
		{
			printf("请输入性别：");
			char sex[MAX_SEX] = { 0 };
			scanf("%s", sex);
			memset(pc->data[jud].sex, 0, sizeof(pc->data[jud].sex));
			strcpy(pc->data[jud].sex, sex);
		}
		//改电话
		printf("是否修改电话(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input, "y"))
		{
			printf("请输入电话：");
			char tele[MAX_TELE] = { 0 };
			scanf("%s", tele);
			memset(pc->data[jud].tele, 0, sizeof(pc->data[jud].tele));
			strcpy(pc->data[jud].tele, tele);
		}
		//改地址
		printf("是否修改地址(y or n)\n");
		scanf("%s", input);
		if (0 == strcmp(input, "y"))
		{
			printf("请输入地址：");
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
			//按名字升序排列
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


