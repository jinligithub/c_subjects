4. ��дһ������reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������

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
	char *p = "abcdef"; �޷�������Ϊ���ǳ����ַ���
		reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}


