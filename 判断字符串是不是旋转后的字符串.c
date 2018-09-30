2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 ＝ AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.


AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void is_left_move(char *arr, char *p)
{
	if (strlen(p) != strlen(arr))
	{
		printf("不是旋转字符串\n");
	}
	strncat(arr, arr, strlen(arr));
	strstr(arr, p);
	if (strstr(arr, p) != NULL)
	{
		printf("是旋转字符串\n");
	}
	else
	{
		printf("不是旋转串\n");
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