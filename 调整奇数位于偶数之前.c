//1.
//��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void my_swap(int arr[], int sz)
{
	int i = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{

		while ((left < right) && (arr[left] % 2 == 1))//����(left<gight)��ֹ����Խ�硣��Ϊ����������ﶼ���������Ӿͻ�һֱ������������
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)//��ֹ����Խ��
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
}
int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_swap(arr, sz);
	print_arr(arr, sz);
	system("pause");
	return 0;
}