2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 �� AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.


AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA

AABCD����һ���ַ��õ�DAABC

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void is_left_move(char *arr, char *p)
{
	if (strlen(p) != strlen(arr))
	{
		printf("������ת�ַ���\n");
	}
	strncat(arr, arr, strlen(arr));
	strstr(arr, p);
	if (strstr(arr, p) != NULL)
	{
		printf("����ת�ַ���\n");
	}
	else
	{
		printf("������ת��\n");
	}
}
int main(void)
{


	char arr[20] = "ABCDEF";
	char*p = "CDEFAB";
	is_left_move(arr, p);
	system("pause");
	return 0;
}