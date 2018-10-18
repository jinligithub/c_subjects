5.递归和非递归分别实现strlen
//非递归
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int Strlen(const char*str)
{
	assert(str != NULL);
	int len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}
int main()
{
	char arr[] = "abcdef";
	int len = Strlen(arr);
	printf("%d", len);
	system("pause");
	return 0;
}
//递归
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
int my_strlen(const char*str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char *p = "abcdef";
	int len = my_strlen(p);
	printf("%d\n", len);
	system("pause");
	return 0;
}
