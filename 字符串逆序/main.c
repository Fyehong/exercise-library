#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba


//�ǵݹ�

int is_strlen(char arr[])
{
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}
void reverse_string(char arr[])
{
	int ret = is_strlen(arr);
	int i;
	for (i = 0; i < ret; i++, ret--)
	{
		////������ָ��
		//char temp = *(arr + i);
		//*(arr + i) = *(arr + ret - 1);
		//*(arr + ret - 1) = temp;
		
		//������
		char temp = arr[i];
		arr[i] = arr[ret - 1];
		arr[ret - 1] = temp;

	}
}



////�ݹ�
//void reverse_string(char arr[])
//{
//	int ret = is_strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + ret - 1);
//	*(arr + ret - 1) = '\0';
//	if (Is_strlen(arr + 1) >= 2)//��ȥ'\0'���ٻ��������ַ����ſ��Խ���ݹ�
//	{
//		reverse_string(arr + 1);
//	}
//	*(arr + ret - 1) = tmp;
//}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}