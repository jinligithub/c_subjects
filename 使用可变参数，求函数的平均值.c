//ʹ�ÿɱ������ʵ�ֺ���������������ƽ��ֵ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
int average(int n, ...)
{
	va_list arg;//����һ��arg���͵ı��������ڷ��ʲ����б��δ֪����
	va_start(arg, n);//��ʼ��argΪδ֪�����б�ĵ�һ��ֵ�ĵ�ַ
	int i = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);//intΪƫ������
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