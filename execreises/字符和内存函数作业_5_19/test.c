#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include <string.h>


////模拟strstr
//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	char* d1 = (char*)dest;
//	char* s1 = (char*)src;
//	char* cur = (char*)dest;
//	while (*cur)
//	{
//		d1 = cur;
//		char* s2 = s1;
//		while( *d1 && *src && (*d1 == *s2))
//		{
//			d1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "asdfgfac";
//	char arr2[] = "df";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

////模拟strcat
//char* my_strcat(char* a1, const char* a2)
//{
//	assert(a1 && a2);
//	char* ret = (char*)a1;
//	while (*++a1)
//	{
//		;
//	}
//	while (*a1++ = *a2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "bit,Hello\088*******";
//	char arr2[] = "hello";
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}


////模拟实现strcmp
//int my_strcmp(const char* ar1, const char* ar2)
//{
//	assert(ar1 && ar2);
//	char* a1 = ar1;
//	char* a2 = ar2;
//	while (*a1++ == *a2++)
//	{
//		if (*a1 == '\0'&& *a2 == '\0')
//		{
//			return 0;
//		}
//	}
//	if (*a1 > *a2)
//	{
//		return 1;
//	}
//	if (*a1 < *a2)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdf";
//	char arr2[] = "abcd";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


////模拟strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = (char*)dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[8] = "abcdef";
//	char arr2[] = "uioed";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////模拟strlen
//int my_strlen(char* arr)
//{
//	assert(arr);
//	int i = 0;
//	while (*arr++)
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	int count = my_strlen(arr1);
//	printf("%d\n", count);
//	return 0;
//}


//模拟实现memmove
void* my_memmove(char* dest, const char* src, size_t count)
{
	assert(dest && src);
	void* ret = (char*)dest;
	if (dest > src)
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	else
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	my_memmove(arr1+2, arr1, 12);
	return 0;
}



////模拟实现mencpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = (char*)dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 6,7,8,12 };
//	my_memcpy(arr1, arr2,16);
//	return 0;
//}