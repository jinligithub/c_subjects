//ʹ�ÿɱ������ʵ�ֺ������������������ֵ��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
int Max(int n, ...)
{
	va_list arg;//����һ��arg���������ڷ���δ֪����
	va_start(arg, n);//��ʼ��argΪ
	//��һ��������va_list�ı�������
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