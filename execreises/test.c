#define _CRT_SECURE_NO_WaRNINGS
#include<stdio.h>
#include<assert.h>


////ģ��strcpy������ʵ��
//
//char* my_strcpy(char* dest,const char* src)
//{
//	/*assert(dest != NULL);
//	assert(src != NULL);
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//
//	//�Ż�
//	assert(dest && src);
//	int* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[] = "hello ait";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//ģ��strlen����
int my_strlen(const char* arr)
{
	int i = 0;
	assert(arr);
	while (*arr++)
	{
		i++;
	}
	return i;
}
int main()
{
	char arr[] = "hello bit";
	printf("%d", my_strlen(arr));
}