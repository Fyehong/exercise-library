#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//void test(int* arr[][5])
//{
//	printf("%p\n", *arr+1);
//	printf("%p\n", arr+1);
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	printf("%p\n", *arr);
//	printf("%p\n", *arr+1);
//	printf("%p\n", arr+1);
//	test(&arr);
//	//*arr,arrָ��Ķ��ǵ�һ���׸�Ԫ�صĵ�ַ������������岻ͬ��ǰһ������������Ԫ�صĵ�ַ����������еĵ�ַ
//	return 0;
//}
//
////����ָ������
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int calc(int (*pf)(int, int))
//{
//	
//	int x = 0, y = 0;
//	printf("��������������");
//	scanf("%d %d", &x, &y);
//	int ret = pf(x, y);
//	printf("%d\n", ret);
//	return ret;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("**** 1.Add  2.Sub ****\n");
//	printf("**** 3.Sul  4.Div ****\n");
//	printf("**** 0.exit       ****\n");
//	printf("**********************\n");
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//		while (getchar() != EOF && getchar() != '\n')
//		{
//			;
//		}
//	} while (input);
//	return 0;
//}

////ð����������
//void bobble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,6,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bobble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//qsort�÷�



//test1();//��������
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_int(const void* e3, const void* e4)
{
	return (*(int*)e3 - *(int*)e4);//��ǿ������ת�����ټ�
}
void test1()
{
	int arr[10] = { 29,18,6,6,15,41,3,12,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}


//����������
void bubble_qsort(const void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2));
int cmp_dou(const void* e1, const void* e2)
{
	return *((double*)e1) > *((double*)e2) ? 1: -1;
}
void test2()
{
	double arr[10] = { 1.1,12.3,22,44,55,12,2,3.23,43,12.55 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(arr[1]), cmp_dou);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%.2lf ", arr[i]);
	}
	printf("\n");
}



//�ṹ������
struct stu
{
	char name[20];
	int age;
	double score;
};
int cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test3()
{
	struct stu arr[3] = { {"zhangsan", 20, 55.5},{"lisi", 30, 88.0},{"wangwu", 10, 90.0} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[1]), cmp_stu_name);
	printf("%s %s %s\n", arr[0].name, arr[1].name, arr[2].name);
}


//��ð������ģ��qsort

//�����������ݽ���
void Swap(char* base0, char* base1,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *base0;
		*base0 = *base1;
		*base1 = temp;
		base0++;
		base1++;
	}
}
void bubble_qsort(const void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			//if (arr[j] > arr[j + 1])//�Ƚ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test4()
{
	int arr[10] = { 32,23,34,43,55,55,65,76,48,21 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}


void test5()
{
	struct stu arr[3] = { {"zhangsan", 20, 55.5},{"lisi", 30, 88.0},{"wangwu", 10, 90.0} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_dou);
	printf("%.2lf %.2lf %.2lf\n", arr[0].score, arr[1].score, arr[2].score);
}

void test6()
{
	struct stu arr[3] = { {"zhangsan", 20, 55.5},{"lisi", 30, 88.0},{"wangwu", 10, 90.0} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	printf("%d %d %d\n", arr[0].age, arr[1].age, arr[2].age);
}
int main()
{
	test1();//��������
	test2();//����������
	test3();//�ṹ������
	test4();//��ð������ģ��qsort,��������
	test5(); //��ð������ģ��qsort, �ṹ�帡���ͳ�Ա����ʧ��
	test6(); //��ð������ģ��qsort, �ṹ�����ͳ�Ա����ʧ��
	return 0;
}


//��ð������ģ��qsort

