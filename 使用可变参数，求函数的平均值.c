//使用可变参数，实现函数，求函数参数的平均值。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
int average(int n, ...)
{
	va_list arg;//声明一个arg类型的变量，用于访问参数列表的未知部分
	va_start(arg, n);//初始化arg为未知参数列表的第一个值的地址
	int i = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);//int为偏移量，
	}
	return sum / n;
}

int main(void)
{
	int ret = average(5, 1, 2, 3, 4, 5);
	printf("%d\n", ret);

	system("pause");
	return 0;
}