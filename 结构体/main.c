#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//�ṹ�����͵�����
////����1
////struct stu
////{
////	char name[20];//����
////	int age;//����
////	char sex[8];//�Ա�
////	float score;//����
////}s1,s2,s3;//s1,s2,s3��ȫ�ֱ�������main()�����ж����Ǿֲ�����
////typedef struct stu stu;
//// 
////����2
//typedef struct stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[8];//�Ա�
//	float score;//����
//}stu;
//
//int main()
//{
//	struct stu s4;
//	struct stu s5;
//	stu s6;
//
//	return 0;
//}


////�ṹ��ĳ�ʼ���Ͷ���
struct student
{
	char name[20];//����
	int age;//����
	char sex[8];//�Ա�
	float score;//����
}stu1={"xiaoming",12,"��",96}, s3;

struct school 
{
	char  name[20];
	char grade[15];
	struct student stu;
};

void printf_school(struct school sch)
{
	printf("%s %s %s %d %s %.1lf\n", sch.name, sch.grade, sch.stu.name, sch.stu.age, sch.stu.sex, sch.stu.score);
}
void printf1(struct school* sch)
{
	printf("%s %s %s %d %s %.1lf\n", sch->name,sch->grade,sch->stu.name, sch->stu.age, sch->stu.sex, sch->stu.score);
}
int main()
{
	struct student stu2 = { "xiaohong",12,"Ů",96.5};
	struct student stu3 = { "xiaohong",12,"Ů",96 };
	struct school school1 = { "����Сѧ","6�꼶",{"zhanghong",12,"Ů",96} };

//�ṹ���Ա���ʲ�����
//.          �ṹ�����.�ṹ���Ա
//->         �ṹ��ָ��->�ṹ���Ա
	printf("%s %d %s %.1lf\n", stu2.name, stu2.age, stu2.sex, stu2.score);
	printf("%s %s %s %d %s %.1lf\n", school1.name, school1.grade, school1.stu.name, school1.stu.age, school1.stu.sex, school1.stu.score);
	printf_school(school1);
	printf1(&school1);//��ָ���ӡ

//���ṹ���Ա��ֵ
	school1.stu.age = 15;
	school1.stu.score = 99;
	strcpy(school1.name, "�Ϸ�Сѧ");
	strcpy(school1.grade, "5�꼶");
	printf1(&school1);
	return 0;
}

