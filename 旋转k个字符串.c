//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//方法一
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void left_move(char *str, int key)
{
	char temp = 0;
	int len = strlen(str);
	while (key--)
	{
		char *cur = str;
		temp = *cur;
		while (*(cur + 1) != '\0')
		{
			*cur = *(cur + 1);
			cur++;
		}
		*cur = temp;
	}
}

int main()
{
	int key = 0;
	char arr[] = "ABCD";
	printf("请输入key"); 
		scanf("%d", &key);
	left_move(arr, key);
	printf("%s", arr);
	system("pause");
	return 0;

//方法二 左右指针法
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void reverse(char *left, char *right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void left_move(char *str, int k)
{
	int len = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);
}
int main(void)
{
	char arr[] = "ABCDE";
	int k = 0;
	printf("请输入k");
	scanf("%d", &k);
	left_move(arr, k);
	printf("%s\n", arr);
	system("pause");
	return 0;
}