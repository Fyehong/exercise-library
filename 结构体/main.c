#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//结构体类型的声明
////方法1
////struct stu
////{
////	char name[20];//姓名
////	int age;//年龄
////	char sex[8];//性别
////	float score;//分数
////}s1,s2,s3;//s1,s2,s3是全局变量，在main()函数中定义是局部变量
////typedef struct stu stu;
//// 
////方法2
//typedef struct stu
//{
//	char name[20];//姓名
//	int age;//年龄
//	char sex[8];//性别
//	float score;//分数
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


////结构体的初始化和定义
struct student
{
	char name[20];//姓名
	int age;//年龄
	char sex[8];//性别
	float score;//分数
}stu1={"xiaoming",12,"男",96}, s3;

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
	struct student stu2 = { "xiaohong",12,"女",96.5};
	struct student stu3 = { "xiaohong",12,"女",96 };
	struct school school1 = { "光荣小学","6年级",{"zhanghong",12,"女",96} };

//结构体成员访问操作符
//.          结构体变量.结构体成员
//->         结构体指针->结构体成员
	printf("%s %d %s %.1lf\n", stu2.name, stu2.age, stu2.sex, stu2.score);
	printf("%s %s %s %d %s %.1lf\n", school1.name, school1.grade, school1.stu.name, school1.stu.age, school1.stu.sex, school1.stu.score);
	printf_school(school1);
	printf1(&school1);//用指针打印

//给结构体成员赋值
	school1.stu.age = 15;
	school1.stu.score = 99;
	strcpy(school1.name, "合肥小学");
	strcpy(school1.grade, "5年级");
	printf1(&school1);
	return 0;
}

