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


//����������Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addre[MAX_ADDRE];
}PeoInfo;


//����ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];//��¼ͨѶ¼�и�����Ϣ
	int sz;//��¼ͨѶ¼������
}Contact;



//��ʼ����ˢ��\�����ͨѶ¼ 
void InitContact(Contact* pc);

//�����ϵ��
void AddContact(Contact* pc);

//��ӡͨѶ¼
void PrintContact(const Contact* pc);

//ɾ��ĳ����ϵ��
void DelContact(Contact* pc);

//����ĳ����ϵ��
void SearchContact(Contact* pc);

//�޸�ĳ����ϵ��
void ModifyContact(Contact* pc);

//��ͨѶ¼��������
void SortContact(Contact* pc);