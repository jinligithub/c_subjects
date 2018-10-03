//使用可变参数，实现函数，求函数参数的最大值。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
int Max(int n, ...)
{
	va_list arg;//声明一个arg变量，用于访问未知参数
	va_start(arg, n);//初始化arg为
	//第一个参数是va_list的变量名，
	int max = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int val = va_arg(arg, int);
		if (max < val)
			max = val;
	}
	return max;
}
int main(void)
{
	int ret = Max(5, 3, 6, 9, 8, 7);
	printf("%d\n", ret);
	system("pause");
	return 0;
}