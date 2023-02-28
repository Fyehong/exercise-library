#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba


//非递归

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
		////这是用指针
		//char temp = *(arr + i);
		//*(arr + i) = *(arr + ret - 1);
		//*(arr + ret - 1) = temp;
		
		//用数组
		char temp = arr[i];
		arr[i] = arr[ret - 1];
		arr[ret - 1] = temp;

	}
}



////递归
//void reverse_string(char arr[])
//{
//	int ret = is_strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + ret - 1);
//	*(arr + ret - 1) = '\0';
//	if (Is_strlen(arr + 1) >= 2)//除去'\0'至少还有两个字符，才可以进入递归
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