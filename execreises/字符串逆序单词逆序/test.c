#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� "I like beijing."������������Ϊ��"beijing. like I"��
//�ַ������Ȳ�����100��
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

	//1.���������ַ���
	char* left = arr;//�ַ�����ʼ��ַ
	char* right = arr + len - 1;//���һ���ַ���ַ
	reverse(left, right);

	//2.����ÿ������
	char* start = arr;//���ʵ���ʼ��ַ
	char* cur = arr;//�������㵥�����һ���ַ���ַ
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