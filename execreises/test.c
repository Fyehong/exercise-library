#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
//void is_print(const int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	is_print(arr,sz);
//	return 0;
//}

//��һ���ַ���str�����ݵߵ��������������
//void reverse(char* arr)
//{
//	char* left = arr;
//	int i = 0;
//	while (*(arr + i))
//	{
//		i++;
//	}
//	char* right = arr + i - 1;//���ұ�һ���ַ�(��'\0')�ĵ�ַ
//	char temp = '*';
//	while (left < right)
//	{
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
int is_Sn(const int x)
{
	int i = 0;
	int mul = 1;
	int an = x;
	int Sn = x;

	for (i = 2; i <= 5; i++)
	{
		mul *= 10;
		an = an + x* mul;
		Sn = Sn + an;
	}
	return  Sn;
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	printf("%d\n", is_Sn(x));
}


