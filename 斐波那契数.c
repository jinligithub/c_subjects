1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

�ݹ鷽��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main(void)
{
	int n = 0;
	int ret = 0;
	printf("������n\n");
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	system("pause");
	return 0;
}

�ǵݹ鷽��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n - 2)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
int main(void)
{
	int n = 0;
	int ret = 0;
	printf("������n\n");
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	system("pause");
	system("pause");
	return 0;
}