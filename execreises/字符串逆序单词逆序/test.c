#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//将一句话的单词进行倒置，标点不倒置。比如 "I like beijing."，经过处理后变为："beijing. like I"。
//字符串长度不超过100。
void reverse(char* l, char* r)
{
	assert(l && r);
	while (l < r)
	{
		char temp = *r;
		*r = *l;
		*l = temp;
		l++;
		r--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);

	//1.逆序整个字符串
	char* left = arr;//字符串起始地址
	char* right = arr + len - 1;//最后一个字符地址
	reverse(left, right);

	//2.逆序每个单词
	char* start = arr;//单词的起始地址
	char* cur = arr;//用来计算单词最后一个字符地址
	while (*cur != '\0')
	{
		while (*cur != ' ' && *cur != '\0')
		{
			cur++;
		}
		reverse(start, cur - 1);
		start = cur + 1;
		if (*cur != '\0')
		{
			cur++;
		}
	}
	printf("%s\n", arr);
	return 0;
}