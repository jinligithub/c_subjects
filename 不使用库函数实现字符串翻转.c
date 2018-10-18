4. 编写一个函数reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strlen(char *str)
{
	int len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return len;
}
int reverse_string(char*str)
{
	assert(str != NULL);
	int len = my_strlen(str);
	int temp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1)>1)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = temp;
	return str;

}
int main()
{
	char arr[] = "abcdef";
	char *p = "abcdef"; 无法逆序，因为它是常量字符串
		reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}


