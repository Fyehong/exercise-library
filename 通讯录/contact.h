#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>


enum Option
{
	exit,
	add,
	del,
	search,
	modify,
	print,
	empty,
	sort
};

#define MAX 1000
#define MAX_NAME 15
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDRE 20


//创建个人信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addre[MAX_ADDRE];
}PeoInfo;


//创建通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//记录通讯录中个人信息
	int sz;//记录通讯录中人数
}Contact;



//初始化（刷新\清除）通讯录 
void InitContact(Contact* pc);

//添加联系人
void AddContact(Contact* pc);

//打印通讯录
void PrintContact(const Contact* pc);

//删除某个联系人
void DelContact(Contact* pc);

//查找某个联系人
void SearchContact(Contact* pc);

//修改某个联系人
void ModifyContact(Contact* pc);

//对通讯录进行排序
void SortContact(Contact* pc);