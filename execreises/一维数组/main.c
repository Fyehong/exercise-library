#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ӡ����ÿ��Ԫ�صĵ�ַ

////����1��
//int main()
//{
//	int i=0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ", &arr[i]);
//	}
//	return 0;
//}

////����2����ָ���ӡ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[1];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p\n", p++);
//	}
//	return 0;
//}


//��ӡ����Ԫ��
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &arr[0];
	while (i < 10)
	{
		printf("%d ", *p);
		p++;
		i++;
	}

	return 0;
}