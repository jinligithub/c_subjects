//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//����һ
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
	printf("������key"); 
		scanf("%d", &key);
	left_move(arr, key);
	printf("%s", arr);
	system("pause");
	return 0;

//������ ����ָ�뷨
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
	printf("������k");
	scanf("%d", &k);
	left_move(arr, k);
	printf("%s\n", arr);
	system("pause");
	return 0;
}