//4.1.ģ��ʵ��printf���������������Ĺ���
//��������溯���ĵ��á�
//print("s ccc d.\n", "hello", 'b', 'i', 't'��100);
//����ԭ�ͣ�
//print(char *format, ...)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdarg.h>
int print_int(int n)
{
	if (n > 9){
		print_int(n / 10);
	}
	putchar(n % 10 + '0');//���Ǽ�\0,�����ַ�0��������

}
void print(const char*format, ...)
{
	va_list arg;
	va_start(arg, format);
	while (*format)
	{
		switch (*format)
		{
		case 's':
		{
					char *str = va_arg(arg, char *);
					while (*str)
					{
						putchar(*str);
						str++;
					}
		}
			break;
		case 'c':
		{
					char ch = va_arg(arg, char);
					putchar(ch);
		}
			break;
		case 'd':
		{
					int ret = va_arg(arg, int);
					print_int(ret);

		}
			break;
		default:
			putchar(*format);
			break;
		}
		format++;
	}
}
int main(void)
{
	print("s ccc d.\n", "hello", 'b', 'i', 't', 100);

	system("pause");
	return 0;
}



